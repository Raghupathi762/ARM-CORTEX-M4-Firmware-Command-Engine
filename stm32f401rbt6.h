#include<stdint.h>
/***************************************BASE_ADDRESS*************************************/
#define RCC_BASEADDRESS      0x40023800UL
#define GPIOA_BASEADDRESS    0x40020000UL
#define GPIOB_BASEADDRESS    0x40020400UL
#define GPIOC_BASEADDRESS 	 0x40020800UL
#define SYSTICK_BASEADDRESS  0xE000E010UL
#define NVIC_ISERx_BASE		 0xE000E100UL
#define EXTI_BASE  			 0x40013C00UL
#define SYSCFG_BASE			 0x40013800UL
#define TIM1_BASE 			  0x40010000UL
#define TIM2_BASE  					 0x40000000UL
#define TIM3_BASE            0x40003C00UL
#define TIM4_BASE            0x40000800UL
#define TIM5_BASE            0x40000C00UL
#define ADC_BASE             0x40012000UL
#define UART1_BASE           0x40012000UL
#define UART2_BASE           0x40004400UL
#define UART6_BASE           0x40011400UL
#define I2C1_BASE            0x40005400UL
#define I2C2_BASE            0x40005800UL
#define I2C3_BASE            0x40005800UL
#define SPI1_BASE 					 0x40013000UL
#define SPI2_BASE 					 0x40003800UL
#define SPI3_BASE 					 0x40003C00UL
#define SPI4_BASE 					 0x40013400UL
#define DMA1_BASE            0x40026000UL
#define DMA2_BASE            0x40026400UL
#define CRC_BASE             0x40023000UL
/************************RCC PHYSCAL ADDRESS ***********************************************/

#define RCC ((RCC_TypeDef *)RCC_BASEADDRESS)
typedef struct 
{
	volatile uint32_t CR;
	volatile uint32_t PLLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
  volatile uint32_t Reserved1;
	volatile uint32_t Reserved2;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
  volatile uint32_t Reserved3;
	volatile uint32_t Reserved4;
	volatile uint32_t AHB1ENR;	
	volatile uint32_t AHB2ENR;
	volatile uint32_t Reserved5;
	volatile uint32_t	Reserved6;
	volatile uint32_t APB1ENR;	
	volatile uint32_t APB2ENR;
	volatile uint32_t Reserved7;
  volatile uint32_t Reserved8;
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t Reserved9;
	volatile uint32_t	Reserved10;													
	volatile uint32_t APB1LPENR;	
	volatile uint32_t APB2LPENR;
	volatile uint32_t Reserved11;	
	volatile uint32_t Reserved12;	
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
  volatile uint32_t Reserved13;	
	volatile uint32_t Reserved14;	
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
	volatile uint32_t Reserved15;	
	volatile uint32_t DCKCFGR;
}RCC_TypeDef;


/********************GPIO **********************************************/
#define GPIOA ((GPIO_TypeDef *)GPIOA_BASEADDRESS)
#define GPIOB ((GPIO_TypeDef *)GPIOB_BASEADDRESS)
#define GPIOC ((GPIO_TypeDef *)GPIOC_BASEADDRESS)
typedef struct 
{
volatile uint32_t MODER;
volatile uint32_t OTYPER;     
volatile uint32_t OSPEEDR;     
volatile uint32_t PUPDR ;  
volatile uint32_t IDR;  
volatile uint32_t ODR; 
volatile uint32_t BSRR; 
volatile uint32_t LCKR;  
volatile uint32_t AFRL;    
volatile uint32_t AFRH;    
}GPIO_TypeDef;

/**************************** SYSTICK TIMER ****************************************/	



#define SYSTICK ((SYSTICK_TypeDef *)SYSTICK_BASEADDRESS )
typedef struct
{
volatile uint32_t CTRL;
volatile uint32_t	LOAD; 
volatile uint32_t	VAL; 
volatile uint32_t CALIB; 
}SYSTICK_TypeDef;

/********************************NVIC******************************************************/
#define NVIC ((NVIC_Typedef *)NVIC_ISERx_BASE)
typedef struct 
{
volatile uint32_t ISER[8];
}NVIC_Typedef;

	
/*********************************  UART  ************************************************/
#define UART1 ((UART_Typedef*)UART1_BASE )
#define UART2 ((UART_Typedef*)UART2_BASE )
#define UART6 ((UART_Typedef*)UART6_BASE )
typedef struct 
{
volatile uint32_t SR;  
volatile uint32_t DR;	
volatile uint32_t BRR;  
volatile uint32_t CR1 ; 
volatile uint32_t CR2;
volatile uint32_t CR3;	
volatile uint32_t GTPR;	
}UART_Typedef;

/********************************syscgf**********************************************/
#define SYSCGF ((SYSCGF_TypeDef *)SYSCFG_BASE)
typedef struct 
{
volatile uint32_t MEMRMP;
volatile uint32_t PMC;
volatile uint32_t EXTICR1;
volatile uint32_t EXTICR2;
volatile uint32_t EXTICR3;
volatile uint32_t EXTICR4; 	
volatile uint32_t CMPCR;
}SYSCGF_TypeDef;

/**************************************ADC**************************************************/

#define ADC ((ADC_TypeDef *)ADC_BASE)
typedef struct 
{
volatile uint32_t SR;  
volatile uint32_t CR1;
volatile uint32_t CR2; 
volatile uint32_t SMPR1;
volatile uint32_t SMPR2;
volatile uint32_t JOFR1;
volatile uint32_t JOFR2;
volatile uint32_t JOFR3;
volatile uint32_t JOFR4;
volatile uint32_t HTR;
volatile uint32_t LTR;
volatile uint32_t SQR1;
volatile uint32_t SQR2;
volatile uint32_t SQR3;
volatile uint32_t JSQR;
volatile uint32_t JDR1;
volatile uint32_t JDR2;
volatile uint32_t JDR3;
volatile uint32_t JDR4;
volatile uint32_t DR;
//volatile uint32_t CCR;
}ADC_TypeDef;



/****************************************EXTI*****************************************************/
#define EXTI ((EXTI_Typedef *)EXTI_BASE)
typedef struct 
{
volatile uint32_t IMR;			  
volatile uint32_t EMR;			
volatile uint32_t RTSR;	    
volatile uint32_t FTSR;		  
volatile uint32_t SWIER;	    
volatile uint32_t PR;
}EXTI_TypeDef;

/**************************************TIMERS 2 REGISTERS********************************************************/
#define TIM1 ((TIM_TypeDef*)TIM1_BASE )
#define TIM2 ((TIM_TypeDef*)TIM2_BASE )
#define TIM3 ((TIM_TypeDef*)TIM3_BASE )
#define TIM4 ((TIM_TypeDef*)TIM4_BASE )
#define TIM5 ((TIM_TypeDef*)TIM5_BASE )
typedef struct 
{
volatile uint32_t CR1; 
volatile uint32_t CR2;
volatile uint32_t	SMCR;
volatile uint32_t	DIER;
volatile uint32_t SR;  	
volatile uint32_t	EGR;
volatile uint32_t	CCMR1;
volatile uint32_t	CCMR2;
volatile uint32_t CCER;
volatile uint32_t CNT;	
volatile uint32_t PSC;
volatile uint32_t ARR;
volatile uint32_t RCR;
volatile uint32_t CCR1;
volatile uint32_t CCR2;
volatile uint32_t CCR3;
volatile uint32_t CCR4;
volatile uint32_t BDTR;
volatile uint32_t DCR;
volatile uint32_t DMAR;
volatile uint32_t	OR;
}TIM_TypeDef;

/*********************************************i2c**************************************/
#define I2C1 ((I2C_Typedef *)I2C1_BASE)
#define I2C2 ((I2C_Typedef *)I2C2_BASE)
#define I2C3 ((I2C_Typedef *)I2C3_BASE)
typedef struct 
{
volatile uint32_t CR1;
volatile uint32_t CR2;	
volatile uint32_t OAR1;	
volatile uint32_t OAR2;
volatile uint32_t DR;
volatile uint32_t SR1;
volatile uint32_t SR2;
volatile uint32_t CCR;
volatile uint32_t TRISE;
volatile uint32_t FLTR;			
}I2C_TypeDef;
/**************************************************SYS_CONF***********************************************/


/****************************************SPI*****************************************************/
#define SPI1 ((SPI_TypeDef*)SPI1_BASE)
#define SPI2 ((SPI_TypeDef*)SPI2_BASE)
#define SPI3 ((SPI_TypeDef*)SPI3_BASE)
#define SPI4 ((SPI_Typeef*)SPI4_BASE)
typedef struct 
	{
volatile uint32_t CR1;    
volatile uint32_t CR2;     
volatile uint32_t SR;    
volatile uint32_t DR;     
volatile uint32_t RCPR;   	
volatile uint32_t PI_RXCRCR;  	
volatile uint32_t TXCRCR; 	
volatile uint32_t I2SCFGR; 
volatile uint32_t PI_I2SPR;
}SPI_TypeDef;
	
/****************************DMA***********************************************/
#define CRC ((CRC_TypeDef*)CRC_BASE)
typedef struct 
	{
volatile uint32_t DR;    
volatile uint32_t IDR;        
volatile uint32_t CR	; 
}CRC_TypeDef;
/**********************************************************************************/
#define DMA1 ((DMA_Typedef *)DMA1_BASE)
 #define DMA2 ((DMA_Typedef *)DMA2_BASE)
	typedef struct 
	{
	volatile uint32_t	LISR;
	volatile uint32_t	HISR;
	volatile uint32_t	LIFCR;
	volatile uint32_t	HIFCR;
	volatile uint32_t S0CR;
	volatile uint32_t	S0NDTR;
	volatile uint32_t S0PAR;
	volatile uint32_t S0M0AR;
	volatile uint32_t	S0M1AR;
	volatile uint32_t S0FCR;	
	volatile uint32_t S1CR;
    volatile uint32_t	S1NDTR;
	volatile uint32_t S1PAR;
	volatile uint32_t	S1M0AR;
	volatile uint32_t S1M1AR;
	volatile uint32_t	S1FCR;
	volatile uint32_t S2CR;
	volatile uint32_t S2NDTR;
	volatile uint32_t	S2PAR;
	volatile uint32_t S2M0AR;
	volatile uint32_t S2M1AR;	
  volatile uint32_t	S2FCR;
	volatile uint32_t	S3CR;
	volatile uint32_t S3NDTR;
	volatile uint32_t	S3PAR;
	volatile uint32_t S3M0AR;
	volatile uint32_t S3M1AR;
	volatile uint32_t S3FCR;
  volatile uint32_t	S4CR;
	volatile uint32_t	S4NDTR;
	volatile uint32_t S4PAR;	
	volatile uint32_t	S4M0AR;
	volatile uint32_t S4M1AR;	
	volatile uint32_t S4FCR;
	volatile uint32_t	S5CR;
	volatile uint32_t S5NDTR;
	volatile uint32_t S5PAR;
    volatile uint32_t	S5M1AR;
	volatile uint32_t S5FCR;
	volatile uint32_t S6CR;
	volatile uint32_t	S6NDTR;
	volatile uint32_t S6PAR;
	volatile uint32_t S6M0AR;
	volatile uint32_t	S6M1AR;
	volatile uint32_t S6FCR;
	volatile uint32_t S7CR;
	volatile uint32_t	S7NDTR;
	volatile uint32_t S7PAR;
	volatile uint32_t S7M0AR;
	volatile uint32_t	S7M1AR;
	volatile uint32_t S7FCR;
}DMA_TypeDef;

#define SCB_AIRCR (*(volatile unsigned int *)0xE000ED0C)



