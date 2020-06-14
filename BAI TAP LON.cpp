#include <stdio.h>
#include <conio.h>
#include <math.h>

int tinhtong(int a, int b)
{
    return a + b;
}

int tinhhieu(int a, int b)
{
    return a - b;   
}

int tinhtich(int a, int b)
{
    if(a > 100000 && b > 100000)
	{
        printf( "So vuot qua nguong cho phep,vui long nhap so nho hon chut!" );
        return -1;    
    } else {
      return a*b;       
    }  
}

int tinhthuong(int a, int b)
{
    if(b == 0)
	{
         printf("\nError: Phep chia cho khong, thuc hien nhap lai b");     
         return -1;
    } 
	else 
	{
        return (int) (a/b);
    }  
}

int main()
{
    int a,b;
    char key = 'N';
    int luachon = 0;
    do
	{
	printf("\n=========CHUONG TRINH MAY TINH=========");
       printf("\nNhap gia tri cho a: ");
       scanf("%d",&a);
       printf("\nNhap gia tri cho b: ");
       scanf("%d", &b);
       printf("\nChon 1: Tinh tong");
       printf("\nChon 2: Tinh hieu");
       printf("\nChon 3: Tinh tich");
       printf("\nChon 4: Tinh thuong");
       printf("\nChon phep tinh ban muon thuc :");
       scanf("%d", &luachon);
       switch( luachon )
	   {
            case 1: printf("a + b = %d", tinhtong(a,b));
                break;
            case 2: printf("a - b = %d", tinhhieu(a,b));
                break;
            case 3:
                if( tinhtich(a,b) != -1)
				{
                    printf("a - b = %d", tinhtich(a,b));
                } 
				else 
				{
                    tinhtich(a,b);  
                }
                break;
            case 4:
                   if( tinhthuong(a,b) == -1)
				   {
                break;    
                   } 
				   else 
				   {
                       printf("a / b = %d", tinhthuong(a,b));          
                   }
                break;
            default: printf("\nBan chi duoc chon 1,2,3 hoac 4."); 
		        break;
       }
       printf("\nBan co muon thuc hien phep tinh khac ? (Y / N): ");
       scanf("%s",&key);
       if( key == 'N' || key == 'n') 
	        break;
    } while(1);
printf("\n Nhap phim bat ki de ket thuc chuong trinh!");     
getch();   
}

