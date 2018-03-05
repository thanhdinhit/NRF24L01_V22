

enum  {     
   R_REGISTER  =0b00000000,   
   W_REGISTER  =0b00100000,    
   R_RX_PAYLOAD=0b01100001,  
   W_TX_PAYLOAD=0b10100000,   
   FLUSH_TX    =0b11100001,   
   FLUSH_RX    =0b11100010,   
   REUSE_TX_PL =0b11100011,   
   R_RX_PL_WID =0b01100000,   
   W_ACK_PAYLOAD=0b10101000,    
   W_TX_PAYLOAD_NOACK=0b10110000,
   NOP         =0b11111111};  


enum RF24_addr {  
   CONFIGURATION=0x00,         
   EN_AUTOACK,                  
   EN_RXPIPES,                  
   SETUP_ADDRESSWIDTH,         
   SETUP_AUTORETRANSMISSION,  
   RF_CHANNEL=0x05,            
   RF_SETUP,                   
   STATUS,                     
   OBSERVE_TX,                   
   RX_POWER_DETECTOR,       
   RX_ADDR_P0=0x0A,           
   RX_ADDR_P1,RX_ADDR_P2,RX_ADDR_P3,RX_ADDR_P4,RX_ADDR_P5,   
   TX_ADDR=0x10,              
   RX_PW_P0=0x11,             
   RX_PW_P1,RX_PW_P2,RX_PW_P3,RX_PW_P4,RX_PW_P5,   
   FIFO_STATUS=0x17,            
   EN_DYNAMIC_PAYLOAD=0x1C,   
   DYN_PAYLOAD_CONFIG=0x1D};   




enum RF24_CONFIGURATION {  
   MASK_RX_DR  =0b01000000,   
   MASK_TX_DR  =0b00100000,   
   MASK_MAX_RT =0b00010000,   
   EN_CRC      =0b00001000,   
   CRC8        =0b00000000,   
   CRC16       =0b00000100,   
   PWR_UP      =0b00000010,   
   PRIM_RX     =0b00000001    
   }; 
    
enum RF24_SETUP { 
   CONT_WAVE    =0b10000000,    
   PLL_LOCK     =0b00010000,   
   RF_DR_250kbps=0b00100000,   
   RF_DR_1Mbps  =0b00000000,    
   RF_DR_2Mbps  =0b00001000,  
   RF_PWR_n18dBm=0b00000000,   
   RF_PWR_n12dBm=0b00000010,   
   RF_PWR_n6dBm =0b00000100,   
   RF_PWR_0dBm  =0b00000110    
   }; 
    

enum RF24_STATUS {   
   IRQ_RX_dataready  =0b01000000,   
   IRQ_TX_datasent   =0b00100000,    
   IRQ_MAX_retransmit=0b00010000,    
   IRQ_ALL           =0b01110000,   
   RX_PIPE0          =0b00000000,   
   RX_PIPE1          =0b00000010,   
   RX_PIPE2          =0b00000100,   
   RX_PIPE3          =0b00000110,   
   RX_PIPE4          =0b00001000,   
   RX_PIPE5          =0b00001010,   
   RX_BUFFER_EMPTY   =0b00001110,   
   TX_BUFFER_FULLY    =0b00000001   
   }; 

  
enum RF24_FIFO_STATUS { 
   TX_REUSE =0b01000000,   
   TX_FULL  =0b00100000,   
   TX_EMPTY =0b00010000,   
   RX_FULL  =0b00000010,   
   RX_EMPTY =0b00000001    
   }; 

enum RF24_DYN_PAYLOAD_CONFIG {    
   EN_DPL      =0b00000100,  
   EN_ACK_PAY  =0b00000010,   
   EN_DYN_ACK  =0b00000001,   
   EN_DPL_ALL  =0b00000111    
   }; 

 
