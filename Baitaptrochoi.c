#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

char tendangnhap[250];
char matkhaudangnhap[250];
struct Taikhoandangki
{
	char ho[250];
	char ten[250];
	char tendangnhap[250];
	char matkhau[250];
	char matkhau1[250];
	char matkhaudangnhap[250];
};

struct Taikhoandangki tk[100000];


int main() 
{
	int q;
	int n;
	int k;
	printf("Moi ban nhap mot so:");
	scanf("%d",&n);

	
	manhinhdangnhap:
	
	printf("\n\nChao mung ban den voi tro choi cua toi\n");
	printf("1.Dang nhap\n");
	printf("2.Dang ky\n");
	printf("3.Thoat\n");
	printf("Moi ban chon mot so:");
	scanf("%d",&q);
	switch(q)
	{
		case 1:
			{
			
			    dangnhap:
	            fflush(stdin);
	            
	
	            printf("\nNhap ten dang nhap cua ban:");
	            gets(tendangnhap);
	            printf("\nNhap mat khau cua ban:");
	            gets(matkhaudangnhap);
	            
	            for(k=1;k<1000000;k++)
	            {
		            if(strcmp(tendangnhap,tk[k].tendangnhap)==0 && strcmp(matkhaudangnhap,tk[k].matkhaudangnhap)==0)
		                {
			                printf("\nTai khoan hop le!\n");
			                printf("\nDang nhap thanh cong!\n");
			                break;
		                }    
		            else if(strcmp(tendangnhap,tk[k].tendangnhap)!=0 && strcmp(matkhaudangnhap,tk[k].matkhaudangnhap)!=0)
		                {
		                	printf("%s\n",tk[k].matkhaudangnhap);			
		                    printf("Tai khoan khong ton tai hoac tai khoan sai!\n");
		                    printf("Neu chua co tai khoan moi ban dang ki!\n");
		                    printf("1.Di den dang ki\n");
		                    printf("2.Dang nhap lai\n");
		                    int e;
		                    printf("Moi ban nhap lua chon cua ban:");
		                    scanf("%d",&e);
		                    switch(e)
			                    {
				                    case 1:
				                    	{
				                    		goto dangki;
				                    		break;				                    			
									    }
				                  
					          
						
				                    case 2:	
		    	                        {
		    	    	                    goto dangnhap;
		    	    	                    break;
				                        }
				                }
			            }
		    
			
			
			
			
			
			
			
			
		        }
		        int g;
	                printf("\nBan co muon chuyen den man hinh tro choi khong?\n");
	                printf("1.Co\n");
	                printf("2.Khong\n");
	                printf("3.Quay lai man hinh dang nhap!\n");
	                printf("Moi ban nhap mot so:");
	                scanf("%d",&g);
	                switch(g)
					{
						case 1:
							{
								goto trochoi;
								break;
							}
						case 2:
						    {
						    	return 0;
							
							}
						case 3:
						    {
						    	goto manhinhdangnhap;
						    	break;
							}	
						
					}
		        
		        
		        
	        }
			    
		    
		    
		    
		case 2:
			{
			    dangki:
	
	            fflush(stdin);
	            printf("\nNhap ho cua ban:");
	            gets(tk[n].ho);
	            printf("Nhap ten cua ban:");
	            gets(tk[n].ten);

	            strcat(tk[n].ho,tk[n].ten);
	            printf("Ten dang nhap cua ban la:%s\n",tk[n].ho);
	            int a,b;
	            char m[100];
	
	            while(a!=b|| m==NULL)	            
	            {
		            printf("Nhap mat khau cua ban:");
		            gets(tk[n].matkhau);
		            printf("\nNhap lai mat khau cua ban:");
	                gets(tk[n].matkhau1);
	                a=strlen(tk[n].matkhau);
	                b=strlen(tk[n].matkhau1);
	                char *m=strstr(tk[n].matkhau,tk[n].matkhau1);
	                if(a>b||a<b)
	                {
	    	            printf("NMat khau ban nhap khong trung khop!\n");
	    	            printf("Nhap lai mat khau!\n");
		            }
		            else 
		            {
			        if(m!=NULL)
			        {
				        //printf("Mat khau cua ban da khop!\n");
				        break;
			        }
			
		
		}
	}
	
	
	                int i;
	                int j;
	                for(i=0;i<100;i++)
	                {
		                for(j=i+1;j<101;j++)
		                    {
			                    if(strcmp(tk[i].tendangnhap,tk[j].tendangnhap)==0 && strcmp(tk[i].matkhaudangnhap,tk[j].matkhaudangnhap))
			                    {
				                    printf("Tai khoan da ton tai!\n");
				                    printf("Moi ban dang ki lai!\n");
				                    goto dangki;
			                    }
			                    else
			                    {
				                    printf("Ban da dang ki thanh cong !\n");
				                    goto nhaplieu;
			                    }
		                    }
	                }            
	                nhaplieu:
	                strcpy(tk[n].tendangnhap,tk[n].ho);
	                strcpy(tk[n].matkhaudangnhap,tk[n].matkhau);
	                
	                printf("\nMoi ban dang nhap :\n");
	                goto dangnhap;
	                 
	                
		    
			
			
			
			}
		case 3:
		    {
			   return 0; 
			
			}    
		
		
		    
	}
	strcpy(tk[n].tendangnhap,tk[n].ho);
	strcpy(tk[n].matkhaudangnhap,tk[n].matkhau);
	
	
	trochoi:
		
	printf("\n\n\nXin chao [%s] \n",tk[n].tendangnhap);
	printf("1.Tinh so fibonacci giua mot khoang\n");
	printf("2.Game doan chu\n");
	printf("3.Game giai do \n");
	printf("4.Tro giup\n");
	printf("5.Dang xuat\n");
	int m;
	printf("Chon mot de tiep tuc:");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			{
				int p;
	            do
                {
	
	                int a1=1,a2=2;
	                int a3;
	                unsigned int n1,n2;
	                printf("\n\n\nNhap vao gia tri dau tien:");
	                scanf("%d",&n1);
	                printf("Nhap vao gia tri thu hai:");
	                scanf("%d",&n2);
	
	                int i=3;
	                if(n1>=n2)
	                   {
		                    return 0;
	                   }
	                if(n2<=1)
	                    {
		                    printf("%d",a1);
	                    }
	                if(n2<=2)
	                    {
		                    printf("%d\n%d",a1,a2);
	                    }
	                while(a3<n2)
	                    {
		                    a3=a1+a2;
		                    a1=a2;
		                    a2=a3;
		                    i++;
		                    if(a3>n1 && a3<n2)
		                        {
			                        printf("%d ",a3);
		                        }
	                   }
	            printf("\nBan co muon choi tiep khong?\n");
	            printf("1.Co\n");
	            printf("2.Khong.Thoat ve man hinh tro choi\n");
	            printf("Moi ban nhap mot so:");
	            scanf("%d",&p);
	
	            if(p==2)
	                {
	                	goto trochoi;
		                break;
	                }
	            }while(p==1);
				
			}
			
			
		case 2:
			{
				
			}
				
			
		case 3:
			{
					int o;
	                do
	                {
 	
	                    int a;
	                    int b;
	                    int tong;
	                    time_t c;
	                    int n;
	                    srand((unsigned)time(&c));

	
	                    printf("\n\n\n\n\nBan muon lam bao nhieu phep tinh?\n");
	                    printf("Moi ban nhap 1 so:");
	                    scanf("%d",&n);
	                    printf("Moi ban nhap cau tra loi!\n");
	                    int i;
	                    for(i=1;i<=n;i++)
	                        {
		                        a=rand()%100;
	                            b=rand()%100;
	    
	                            tinhtong:
                                printf("%d + %d = ",a,b,tong);
		                        scanf("%d",&tong);
		                        if(a+b==tong)
		                            {
			                            continue;
		                            }
		                        else
	                            	{
			                            printf("Ket qua sai!\n");
			                            printf("Moi ban nhap lai ket qua phep tinh!\n");			
			
		                            }
	                       }
	
                    	printf("Ban da hoan thanh tro choi!");
	                    printf("Ban co muon choi tiep khong?\n");
	
	                    
	                    printf("1.Choi tiep\n");
	                    printf("2.Thoat\n");
	                    printf("Moi ban nhap lua chon:");
	                    scanf("%d",&o);
	                    if(o==2)
	                    {
		                    break;
	                    }
	
                    }while(o==1);
				
			}
				
			
			
		case 4:
			{
				int u;
	
	            do
	            {    
	
	                printf("\n\nHuong dan tro choi\n");
	                printf("Ban muon huong dan tro choi nao?\n");
	                printf("1.Game tinh so fibonacci giua hai khoang\n");
	                printf("2.Game doan chu\n");
	                printf("3.Game giai do\n");
	                printf("4.Thoat\n");
	                int n;
	                printf("Moi ban nhap mot so:");
	                scanf("%d",&n);
	                switch(n)
	                {
		                case 1:
			                {
				                printf("Ban se nhap vao 2 so nguyen\nSau do chuong trinh se tim ra cac so fibonacci giua hai so nguyen do cho ban!");
				                break;
			                }
		                case 2:
		                    {
		    	                break;
		    	
			                }
		                case 3:
		                    {
		    	                printf("Chuong trinh se lay hai so ngau nhien \n Sau do ban se tinh phep tinh giua chung\n");
		    	                printf("Neu ban tinh sai ban se phai tinh lai\n");
		    	                printf("Chi khi ban tinh dung thi tro choi moi tiep tuc!\n");
		    	                break;
			                }
		                case 4:
		                    {
		                    	goto trochoi;
			                    break;
		                    }
                    }
		
	                printf("\n\n\n\nBan co muon huong dan tro nao nua khong?\n");
	                printf("1.Co\n");
	                printf("2.Khong.Thoat ve man hinh tro choi\n");
                    printf("Moi ban nhap mot so:");
	                scanf("%d",&u);
	
	                if(u==2)
	                    {
		    
		                    goto trochoi;
		
	                      }	
		
                }while(u==1);

				
			}
				
			
		case 5:
			{
				goto manhinhdangnhap;
				break;
			}
				
			
			
			
			
	}
		
		
    
	
	
	
	
	printf("\nHi!!!!");
	
	
	
	

	return 0;
}
































