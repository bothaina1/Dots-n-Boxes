#include "Functions.h"

void save_top_10()
{  

 FILE *top10;
   
 top10= fopen("top10.txt","wb");
  if (top10==NULL)
       {
        printf( "\nError opening file\n");
        exit (1);
    }
     fwrite(top,sizeof(struct win),10,top10);
        printf("data stored");
        fclose(top10);



}



void load_top_10()
{
        FILE *vt;
  vt=fopen("variable.txt","r");
  fscanf(vt,"%d",&t);
  fclose(vt);
   
 FILE *top10;
 top10= fopen("top10.txt","rb");
  if (top10==NULL)
       {
        printf( "\nError opening file\n");
        exit (1);
    }
     fread(top,sizeof(struct win),10,top10);
        printf("1-%s with score %d\n\n2- %s with score %d\n\n",top[1].name2,top[1].score2,top[2].name2,top[2].score2);
        if(t>3)
            printf("3-%s with score %d\n\n",top[3].name2,top[3].score2);
        if(t>4)
            printf("4-%s with score %d\n\n",top[4].name2,top[4].score2);
            if(t>5)
            printf("5-%s with score %d\n\n",top[5].name2,top[5].score2);
        if(t>6)
            printf("6-%s with score %d\n\n",top[6].name2,top[6].score2);
            if(t>7)
            printf("7-%s with score %d\n\n",top[7].name2,top[7].score2);
        if(t>8)
            printf("8-%s with score %d\n\n",top[8].name2,top[8].score2);
            if(t>9)
            printf("9-%s with score %d\n\n",top[9].name2,top[9].score2);
      if(t>10)
            printf("10-%s with score %d\n\n",top[10].name2,top[10].score2);

        fclose(top10);



}








void testing()
{ strlwr(top[t].name2);
int value=0; int temp;char tem[100];
for(int i=t-1;i>0;i--)
{
   if(strcmp(top[t].name2,top[i].name2)==0)
   {value=1;
       if(top[t].score2>top[i].score2)
            {top[i].score2=top[t].score2;}

        break;
   }
}

if(value==1)
{if(t<10||t==10)
 t--;}

for(int i=t;i>1;i--)
if(top[i].score2>top[i-1].score2)
{
    temp=top[i].score2;
    top[i].score2=top[i-1].score2;
   top[i-1].score2=temp;
   strcpy(tem,top[i].name2);
   strcpy(top[i].name2,top[i-1].name2);
   strcpy(top[i-1].name2,tem);
}

}

