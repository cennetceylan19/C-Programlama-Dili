#include<stdio.h>
#include<string.h>
//pointer bir pointerin baska bir de�i�kenin bellekteki adresini veren gerekirse o adresteki de�erine eri�ilebilmesini sa�lar.



int main()
{
	/*
	int sayi1=15;
	int sayi2=25;
	char kelime='c';
	int *pointerBir, *pointerIki;
	pointerBir=&sayi1; //sayi1 in bellekteki adresi pointer de�i�keninin de�eri olur.
	pointerIki=&sayi2;
	pointerBir+=1; //de�i�kenin bellekteki kaplad��� yeri bir art�rmak demek int de�i�kenin bellekte kaplad��� alan 4 bit oldu�u i�in 4 bit art�racakt�r.
	*pointerBir+=1; // de�i�kenin de�erini 1 art�r�r 15+1 olur.
	
	
	printf("Sayi1'in degeri:%d\nSayi1 in bellekteki degeri:%d\nSayi1'in bellekteki degeri(hektadecimal):%x\n",sayi1,&sayi1,&sayi1); 
	printf("Sayi2'in degeri:%d\nSayi2 in bellekteki degeri:%d\nSayi2'in bellekteki degeri(hektadecimal):%x\n",sayi2,&sayi2,&sayi2); 
	printf("Kelime'nin degeri:%c\nKelime'nin bellekteki degeri:%d\nkelime'nin bellekteki degeri(hektadecimal):%x\n",kelime,&kelime,&kelime);//& de�i�kenin bellekteki yerine eri�imini sa�lar.

	printf("Sayi1'in degeri:%d\nSayi1'in bellekteki degeri(hektadecimal):%x\n",*pointerBir,pointerBir); // *pointerBir diyerek sayi1 in de�erini �ekmi� oluyoruz.
	printf("Sayi2'in degeri:%d\nSayi2'in bellekteki degeri(hektadecimal):%x\n",*pointerIki,pointerIki); 
 // pointer de diziler
 char kelimeler[20];
 int *pointerKelimeler;
 
 pointerKelimeler= &kelimeler; //kelimeler[0] ile ayn�d�r. 
 printf("%x",pointerKelimeler);
 */
int soru,i;
printf("Lutfen sayi miktarini giriniz:\n");
scanf("%d",&soru);
int sayilar[soru];
for(i=0;i<soru;i++)

 	{
 		printf("Lutfen %d sayisini giriniz:\n",i);
 		scanf("%d",&sayilar[i]);
	 }
 int *pointer;
 for(i=0;i<soru;i++)
 {
 	pointer=&sayilar[i];
 	printf("Lutfen %d sayisinin bellekteki degeri:%x\n",sayilar[i],pointer);
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

}
