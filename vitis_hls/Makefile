VPP = v++
TARGET = hw
PLATFORM = xilinx_u200_gen3x16_xdma_1_202110_1

vector_add.xo: vector_add.cpp
	$(VPP) -c -t $(TARGET) --platform $(PLATFORM) -k vector_add vector_add.cpp -o vector_add.xo

clean:
	rm -f *.xo *.xclbin *.log
