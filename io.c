 #include<stdio.h>


int main()
{
    int category;
    int list;
    int unit;
    int bill;
    int fixed_charge;
    int phase;
    int BHP;
    int amt;
    int kw;
    int ec,fc,tb,c,cd,pf,d,e,bd,x,y;
    int toc;
    int nt;
    

 
  
    printf("Welcome to the tariff page\n");
    printf("Choose from the list Below\n");
    printf("1.RGP:Residential Purpose(Up to & including 15KW)\n",1);
    printf("2.GLP : For Hospitals,Schools & Religious Purpose\n",2);
    printf("3.Non -RGP:Commercial and Industrial Purpose(Up to & including 15KW)\n",3);
    printf("4.LTP(AG): For Agricultural Purpose\n",4);
    printf("5.LTMD 1:For Residential Purpose(Above 15KW)\n",5);
    printf("6.LTMD 2:For Commerical/Industrial Purpose(Above 15KW)\n",6);
    printf("7.SL:For Street Light\n",7);
    printf("8.LEV:LT-Electric Vehicle Charging Stations\n",8);
    printf("9.TMP: For Temporary Supply(Below 100KW)\n",9);
    printf("10.HTMD-1: For High Tension Load(100 KW & Above)\n",10);
    printf("11.HTMD-2: For High Tension AMC Pumping Stations\n",11);
    printf("12.HTMD-3: For Temporary Supply(100 KW & Above)\n",12);
    printf("13.EV:HT-Electric Vehicle Charging Stations\n",13);
    printf("14.HTMD -Metro Traction \n",14);
    printf("Enter your choice from above choices:",category);
    scanf("%d",&category);
    if( category == 1)
    {
        printf("Choose from the list : 1. RGP 2. BPL:",list);
        scanf("%d",&list);
        if (list == 1)
         {
            printf("Enter your usage of unit:\n",unit);
            scanf("%d",&unit);
            if(unit >= 0 && unit <= 50)
            {
                fixed_charge=300;
                bill=3.2*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
            }
            else if(unit >= 51 && unit <= 150)
            {
                fixed_charge=300;
                bill=3.95*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
            }
                      
           else 
           {
                fixed_charge=300;
                bill=5.00*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
           }
        }
        else if (list == 2)
        {
            printf("Enter your usage of unit:\n",unit);
            scanf("%d",&unit);
            if(unit >= 0 && unit <= 50)
            {
                fixed_charge=5;
                bill=1.5*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
            }
            else if(unit >= 51 && unit <= 150)
            {
                fixed_charge=5;
                bill=3.95*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
            }
                      
           else 
           {
                fixed_charge=5;
                bill=5.00*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
           }

    }
        }


        
    else if( category == 2)
    {
        printf("Enter usage of unit:|n",unit);
        scanf("%d",&unit);
        if(unit >= 0 && unit <= 200)
        {
            printf("Enter the phase:",phase);
            scanf("%d",&phase);
            if ( phase == 1)
            {
                fixed_charge=360;
                bill=4.10*unit + fixed_charge;
                printf("Your bill is %d Rupees",bill);
            }
           else if (phase == 3)
           {
               fixed_charge=840;
               bill=4.10*unit + fixed_charge;
               printf("Your bill is %d Rupees",bill);
           }
           else 
           {
               printf("Invalid input");
           }
           
        }
        else if (unit >= 201)
        {
              printf("Enter the Phase:\n",phase);
              scanf("%d",&phase);
              if ( phase == 1)
              {
                  fixed_charge=360;
                  bill=4.80*unit + fixed_charge;
                  printf("Your bill is %d Rupees",bill);
              }
              else if (phase == 3)
              {
                  fixed_charge=840;
                  bill=4.80*unit + fixed_charge;
                  printf("Your bill is %d Rupees",bill);
              }
              else 
              {
                  printf("Invalid Input");
              }
        }
        else
        {
            printf("Invalid Input");
        }
    }
    else if (category == 3)
    {
    printf("Enter the usage of unit:",unit);
    scanf("%d",&unit);
    amt=4.6*unit;
    printf("Now enter the kw value (Not more than 15):",kw);
    scanf("%d",&kw);
    if(kw>=0 && kw<=5)
    {
        fixed_charge = 840;
        bill=4.6*unit + fixed_charge;
        printf("Your bill is %d Rupees",bill);
    }
    else if (kw>=5 && kw<=15)
    {
        fixed_charge=1080;
        bill=4.6*unit + fixed_charge;
        printf("Your Bill is %d Rupees",bill);
    }
    else
    {
        printf("Not applicable");
    }
    }
    else if(category == 4)
    {
    printf("Enter the usage of unit:",unit);
    scanf("%d",&unit);
    amt= unit*3.4;
    printf("Now enter BHP Value:",BHP);
    scanf("%d",&BHP);
    bill=BHP*10 + amt;
    printf("Your Bill is %d Rupees",bill);
    }
    else if (category == 7)
    {
        printf("Enter the usage of unit:",unit);
        scanf("%d",&unit);
        bill=4.3*unit;
        printf("Your bill is %d Rupees",bill);
    }
    else if (category == 8)
    {
        printf("Enter the usage of unit:",unit);
        scanf("%d",&unit);
        fixed_charge=300;
        bill=4.2*unit + fixed_charge;
        printf("Your Bill is %d Rupees",bill);
    }
    else if (category == 9)
    {
        printf("Enter the usage of unit:",unit);
        scanf("%d",&unit);
        amt=5.1*unit;
        printf("Now enter the value in kw:",kw);
        scanf("%d",&kw);
        bill= kw*25 + amt;
        printf("Your Bill is %d Rupees",bill);
    }
    else if (category == 13)
    {
        printf("Enter the usage of unit:",unit);
        scanf("%d",&unit);
        amt=4.10*unit;
        printf("Now enter the value in kw:",kw);
        scanf("%d",&kw);
        if(kw>=0 && kw<=99)
        {
            fixed_charge=25;
            bill=kw*fixed_charge + amt;
            printf("Your Bill is %d Rupees",bill);
        }
        else if (kw>=100)
        {
            fixed_charge=50;
            bill=kw*fixed_charge + amt;
            printf("Maxmimum demand .Your Bill is %d Rupees",bill);
        }
        else
        {
            printf("Invalid input");
        }
    }
    else if (category==5)
    {
      
{
    
    printf("enter the amount of contract demand in KW : ");
    scanf("%d",&cd);
    printf("enter the amount of maximum billing demand in KW : ");
    scanf("%d",&e);
    printf("enter the amount of power factor in percentage : ");
    scanf("%d",&pf);
    x=((cd*17)/20);
    y=6;
    bd = e;
    printf(" billing demand is :%d ",bd);
    
    if(bd<=50)
        {
            ec=(bd*4.65);
        }
        else if (bd>50)
        {
            ec=(bd*4.8);
        }
        printf("\nyour energy charge is : %d",ec);
    if(bd<=50)
        {
            fc=(bd*150);
        }
        else if (bd>50 && bd<=80)
        {
            fc=((50*150)+((bd-50)*185));
        }
        else if (bd>80 && bd<=cd)
        {
            fc=((50*150)+(30*185)+((bd-80)*245));
        }
        else if(bd>cd)
        {
            fc=(bd*350);
        }
        printf("\nyour fixed charge is : %d",fc);
    if(d>=90 && d<=95)
    {
        pf=(bd*0.0015);
    }
    else if (d>95)
    {
        pf=(bd*0.0027);
    }
    else if (d<90)
    {
        pf=(bd*0.03);
    }
    printf("\nyour power factor is :%d",pf);
    tb = ec + fc + pf ;
    printf("\nyour total bill is : %d",tb);
}     
    }

    else if (category==6)
    {
      
{
    
    printf("enter the amount of contract demand in KW : ");
    scanf("%d",&cd);
    printf("enter the amount of maximum billing demand in KW : ");
    scanf("%d",&e);
    printf("enter the amount of power factor in percentage : ");
    scanf("%d",&pf);
    x=((cd*17)/20);
    y=6;
    bd = e;
    printf(" billing demand is :%d ",bd);
    
    if(bd<=50)
        {
            ec=(bd*1.75);
        }
        else if (bd>50)
        {
            ec=(bd*2.3);
        }
        printf("\nyour energy charge is : %d",ec);
    if(bd<=50)
        {
            fc=(bd*175);
        }
        else if (bd>50 && bd<=80)
        {
            fc=((50*175)+((bd-50)*230));
        }
        else if (bd>80 && bd<=cd)
        {
            fc=((50*175)+(30*230)+((bd-80)*300));
        }
        else if(bd>cd)
        {
            fc=(bd*425);
        }
        printf("\nyour fixed charge is : %d",fc);
    if(d>=90 && d<=95)
    {
        pf=(bd*0.0015);
    }
    else if (d>95)
    {
        pf=(bd*0.0027);
    }
    else if (d<90)
    {
        pf=(bd*0.03);
    }
    printf("\nyour power factor is :%d",pf);
    tb = ec + fc + pf ;
    printf("\nyour total bill is : %d",tb);
}     
    }
     else if (category==10)
    {
      
{
    
    printf("enter the amount of contract demand in KW : ");
    scanf("%d",&cd);
    printf("enter the amount of maximum billing demand in KW : ");
    scanf("%d",&e);
    printf("enter the amount of power factor in percentage : ");
    scanf("%d",&pf);
    x=((cd*17)/20);
    y=100;
    bd = e;
    printf(" billing demand is :%d ",bd);
    
    if(bd<=400)
        {
            ec=(bd*4.55);
        }
        else if (bd>=401)
        {
            ec=(bd*4.45);
        }
        else
        {
            printf("Invalid");
        }
        printf("\nyour energy charge is : %d",ec);
    if(bd<=1000)
        {
            fc=(bd*260);
        }
        else if (bd>=1001)
        {
            fc=(bd*335);
        }
        
        else
        {
           fc=(bd*385);
        }
        printf("\nyour fixed charge is : %d",fc);
    if(d>=90 && d<=95)
    {
        pf=(bd*0.0015);
    }
    else if (d>95)
    {
        pf=(bd*0.0027);
    }
    else if (d<90)
    {
        pf=(bd*0.03);
    }
    printf("\nyour power factor is :%d",pf);
    if(bd<=300)
    {
        toc = (bd*0.8);
    }
    else if(bd>300)
    {
        toc = (bd);
    }
    else
    {
        toc = 0;
    }
    printf("\nYour tou charge is :%d",toc);
    printf("   ");
    printf("Have you applied for night time,Please Enter 1 for Yes and 2 For No:\n ",nt);
    scanf("%d",&nt);
    
    if(nt==1)
    {
        bill=bd*0.3;
    }
    else if (nt==2)
    {
        bill=0;
    }
    else{
        printf("Only 1 and 2");
    }
    }
    printf("Your bill for night time is%d",bill);
    
    
    tb=ec + fc +toc+bill;
    {
    printf("     ");
    printf("Your total bill is %d",tb);
    }
    
} 
else if (category==11)
    {
      
{
    
    printf("enter the amount of contract demand in KW : ");
    scanf("%d",&cd);
    printf("enter the amount of maximum billing demand in KW : ");
    scanf("%d",&e);
    printf("enter the amount of power factor in percentage : ");
    scanf("%d",&pf);
    x=((cd*17)/20);
    y=100;
    bd = e;
    printf(" billing demand is :%d ",bd);
    
   ec=bd*4.10;
        printf("\nyour energy charge is : %d",ec);
    if(bd<=0)
        {
            fc=(bd*285);
        }
        else if (bd>=0)
        {
            fc=(bd*225);
        }
        
        else
        {
           fc=(0);
        }
        printf("\nyour fixed charge is : %d",fc);
    if(d>=90 && d<=95)
    {
        pf=(bd*0.0015);
    }
    else if (d>95)
    {
        pf=(bd*0.0027);
    }
    else if (d<90)
    {
        pf=(bd*0.03);
    }
    printf("\nyour power factor is :%d",pf);
    toc=(bd*0.6);
    printf("\nYour tou charge is :%d",toc);
    printf("   ");
    printf("Have you applied for night time,Please Enter 1 for Yes and 2 For No:\n ",nt);
    scanf("%d",&nt);
    
    if(nt==1)
    {
        bill=bd*0.3;
    }
    else if (nt==2)
    {
        bill=0;
    }
    else{
        printf("Only 1 and 2");
    }
    }
    printf("Your bill for night time is%d",bill);
    
    
    tb=ec + fc +toc+bill;
    {
    printf("     ");
    printf("Your total bill is %d",tb);
    }
    
} 
else if (category==12)
    {
      
{
    
    printf("enter the amount of contract demand in KW : ");
    scanf("%d",&cd);
    printf("enter the amount of maximum billing demand in KW : ");
    scanf("%d",&e);
    printf("enter the amount of power factor in percentage : ");
    scanf("%d",&pf);
    x=((cd*17)/20);
    y=100;
    bd = e;
    printf(" billing demand is :%d ",bd);
    
   ec=bd*7.05;
        printf("\nyour energy charge is : %d",ec);
    if(bd<=cd)
        {
            fc=(bd*25);
        }
        else if (bd>=cd)
        {
            fc=(bd*30);
        }
        
        else
        {
           fc=(0);
        }
        printf("\nyour fixed charge is : %d",fc);
    if(d>=90 && d<=95)
    {
        pf=(bd*0.0015);
    }
    else if (d>95)
    {
        pf=(bd*0.0027);
    }
    else if (d<90)
    {
        pf=(bd*0.03);
    }
    printf("\nyour power factor is :%d",pf);
    toc=(bd*0.6);
    printf("\nYour tou charge is :%d",toc);
    printf("   ");
    printf("Have you applied for night time,Please Enter 1 for Yes and 2 For No:\n ",nt);
    scanf("%d",&nt);
    
    if(nt==1)
    {
        bill=bd*0.3;
    }
    else if (nt==2)
    {
        bill=0;
    }
    else{
        printf("Only 1 and 2");
    }
    }
    printf("Your bill for night time is%d",bill);
    
    
    tb=ec + fc +toc+bill;
    {
    printf("     ");
    printf("Your total bill is %d",tb);
    }
    
} 
else if (category==14)
    {
      
{
    
    printf("enter the amount of contract demand in KW : ");
    scanf("%d",&cd);
    printf("enter the amount of maximum billing demand in KW : ");
    scanf("%d",&e);
    printf("enter the amount of power factor in percentage : ");
    scanf("%d",&pf);
    x=((cd*17)/20);
    y=100;
    bd = e;
    printf(" billing demand is :%d ",bd);
    
   ec=bd*3.55;
        printf("\nyour energy charge is : %d",ec);
    if(bd<=cd)
        {
            fc=(bd*335);
        }
        else if (bd>=cd)
        {
            fc=(bd*385);
        }
        
        else
        {
           fc=(0);
        }
        printf("\nyour fixed charge is : %d",fc);
    if(d>=90 && d<=95)
    {
        pf=(bd*0.0015 - 0.0015);
    }
    else if (d>95)
    {
        pf=(bd*0.0027- 0.0027);
    }
    else if (d<90)
    {
        pf=(bd*0.03 + 0.03);
    }
    printf("\nyour power factor is :%d",pf);
    toc=(bd*0.6);
    printf("\nYour tou charge is :%d",toc);
    printf("   ");
    printf("Have you applied for night time,Please Enter 1 for Yes and 2 For No:\n ",nt);
    scanf("%d",&nt);
    
    if(nt==1)
    {
        bill=bd*0.3;
    }
    else if (nt==2)
    {
        bill=0;
    }
    else{
        printf("Only 1 and 2");
    }
    }
    printf("Your bill for night time is%d",bill);
    
    
    tb=ec + fc +toc+bill;
    {
    printf("     ");
    printf("Your total bill is %d",tb);
    }
    
}
else
{
    printf("Please choose only between 1 to 14");
} 


    
   


    
    



    return 0;
}