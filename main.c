/**
  ******************************************************************************
  * @file    main.c
  * @author  Rawaa Balhoudi
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define OTHERS 
#define MUL
#define INTEL 
#define SOM

/* Private function prototypes -----------------------------------------------*/
static int sum(int x, int y);
static int mul(int x, int y);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
 #ifdef OTHERS
   #ifdef MUL
      int multResult=mul(1,2);
   #endif
      
   #ifdef MAX
      int maxResult=max(1,2);
   #endif
 #endif 
      
 #ifdef INTEL
   #ifdef SOM
     int SumResult=sum(1,2);
   #endif
     
   #ifdef MIN
     int MinResult=min(1,2);
   #endif
 #endif     
 
  while (1)
  {
   
  }
}
#ifdef INTEL
  #ifdef SOM 
    static int sum(int x, int y)
    {
      return (x+y);
    }
  #endif
  #ifdef MIN
    #define MIN ((x)<(y))? (x) : (y) 
    static int min(int x, int y)
    {
     return (MIN);
    }
  #endif
#endif

#ifdef OTHERS
  #ifdef MUL
    static int mul(int x, int y)
    {
      return (x*y);
    }
  #endif

  #ifdef MAX
    #define MAX ((x)>(y))? (x) : (y))
    static int max(int x, int y)
    {
      return (MAX);
    }
  #endif
#endif
/**************************************END OF FILE**************************************/
