`default_nettype none
module noc_router_formal;
    localparam DATA_WIDTH = 256;
    localparam ADDR_WIDTH = 20;
    localparam COORD_BITS = 4;
    localparam FIFO_DEPTH = 4;
    localparam ROUTER_X   = 0;
    localparam ROUTER_Y   = 0;

    logic                     clk, rst_n;
    logic [DATA_WIDTH-1:0]    north_in_data;
    logic [COORD_BITS-1:0]    north_in_dest_x, north_in_dest_y;
    logic                     north_in_valid, north_in_ready;
    logic [DATA_WIDTH-1:0]    north_out_data;
    logic [COORD_BITS-1:0]    north_out_dest_x, north_out_dest_y;
    logic                     north_out_valid, north_out_ready;
    logic [DATA_WIDTH-1:0]    south_in_data;
    logic [COORD_BITS-1:0]    south_in_dest_x, south_in_dest_y;
    logic                     south_in_valid, south_in_ready;
    logic [DATA_WIDTH-1:0]    south_out_data;
    logic [COORD_BITS-1:0]    south_out_dest_x, south_out_dest_y;
    logic                     south_out_valid, south_out_ready;
    logic [DATA_WIDTH-1:0]    east_in_data;
    logic [COORD_BITS-1:0]    east_in_dest_x, east_in_dest_y;
    logic                     east_in_valid, east_in_ready;
    logic [DATA_WIDTH-1:0]    east_out_data;
    logic [COORD_BITS-1:0]    east_out_dest_x, east_out_dest_y;
    logic                     east_out_valid, east_out_ready;
    logic [DATA_WIDTH-1:0]    west_in_data;
    logic [COORD_BITS-1:0]    west_in_dest_x, west_in_dest_y;
    logic                     west_in_valid, west_in_ready;
    logic [DATA_WIDTH-1:0]    west_out_data;
    logic [COORD_BITS-1:0]    west_out_dest_x, west_out_dest_y;
    logic                     west_out_valid, west_out_ready;
    logic [DATA_WIDTH-1:0]    local_in_data;
    logic [COORD_BITS-1:0]    local_in_dest_x, local_in_dest_y;
    logic                     local_in_valid, local_in_ready;
    logic [DATA_WIDTH-1:0]    local_out_data;
    logic [COORD_BITS-1:0]    local_out_dest_x, local_out_dest_y;
    logic                     local_out_valid, local_out_ready;

    noc_router dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    always @(posedge clk) begin
        assume (north_in_dest_x < 2 && north_in_dest_y < 2);
        assume (south_in_dest_x < 2 && south_in_dest_y < 2);
        assume (east_in_dest_x  < 2 && east_in_dest_y  < 2);
        assume (west_in_dest_x  < 2 && west_in_dest_y  < 2);
        assume (local_in_dest_x < 2 && local_in_dest_y < 2);
    end

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (!north_out_valid && !south_out_valid && !east_out_valid &&
                    !west_out_valid  && !local_out_valid);

    always @(posedge clk)
        if (rst_n && local_out_valid)
            assert (local_out_dest_x == ROUTER_X[COORD_BITS-1:0] &&
                    local_out_dest_y == ROUTER_Y[COORD_BITS-1:0]);

    always @(posedge clk)
        if (rst_n && north_out_valid)
            assert (north_out_dest_y > ROUTER_Y[COORD_BITS-1:0]);

    always @(posedge clk)
        if (rst_n && south_out_valid)
            assert (south_out_dest_y < ROUTER_Y[COORD_BITS-1:0]);

    always @(posedge clk)
        if (rst_n && east_out_valid)
            assert (east_out_dest_x > ROUTER_X[COORD_BITS-1:0]);

    always @(posedge clk)
        if (rst_n && west_out_valid)
            assert (west_out_dest_x < ROUTER_X[COORD_BITS-1:0]);

endmodule
`default_nettype wire
