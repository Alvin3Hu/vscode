#include <stdio.h>

void set_register_data(int a,int d)
{
  char log_msg[255];
  int temp;
  int bit[16];

  printf("set_Reg0x%2X_0x%04X\n",a,d);

//   SOCKET_INC(FRZ_OFF)
//   {
    temp = a; //address
    for(int j=0;j<8;j++)
    {
      bit[j] = 0;
      bit[j] = temp%2;
      temp = temp/2;
    }

    for(int j=7;j>=0;j--)
    {
      int lineNum = 7 - j;
      printf ("%2d\t%1d\t%2d\n", j, bit[j], lineNum);
      // if(bit[j]==0)
      // {
      //   WRITE_PAT_MEM(SOCKET, SDIN, set_reg:addr+7-j, ,"0");
        
      // }
      // else
      // {
      //   WRITE_PAT_MEM(SOCKET, SDIN, set_reg:addr+7-j, ,"1");
      // }
    }

    temp = d; //data
    for(int j=0;j<16;j++)
    {
      bit[j] = 0;
      bit[j] = temp%2;
      temp = temp/2;
    }

    for(int j=15;j>=8;j--)
    {
      int lineNum = 15 - j;
      printf ("%2d\t%1d\t%2d\n", j, bit[j], lineNum);
      // if(bit[j]==0)
      // {
      //   WRITE_PAT_MEM(SOCKET, SDIN, set_reg:dath+15-j, ,"0");
      // }
      // else
      // {
      //   WRITE_PAT_MEM(SOCKET, SDIN, set_reg:dath+15-j, ,"1");
      // }
    }
    
    for(int j=7;j>=0;j--)
    {
      int lineNum = 7 - j;
      printf ("%2d\t%1d\t%2d\n", j, bit[j], lineNum);
      // if(bit[j]==0)
      // {
      //   WRITE_PAT_MEM(SOCKET, SDIN, set_reg:datL+7-j, ,"0");
      // }
      // else
      // {
      //   WRITE_PAT_MEM(SOCKET, SDIN, set_reg:datL+7-j, ,"1");
      // }
    }
//   }

  // test_no++;
  // TEST_NO(test_no);DATALOG_MSG = log_msg ;

  // JUDGE_PAT(set_reg,__set_reg);
}

int main()
{
    printf("demo.exe\n");
    set_register_data(0xF2,0x1234);
 
    return 0;
}