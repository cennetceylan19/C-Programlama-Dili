#include<stdio.h>
#include<string.h> //string k�t�phanesindeki kullan�labilecek fonksiyonlar� kullanmak i�in bu k�t�phaneyi eklemeliyiz.
/* string.h k�t�phanesinde kullan�lan fonksiyonlar;
strcat bir stringi di�er bir stringin sonuna ekler.
strlen string karakter say�s�n�n uzunlu�unu belirler.
strcmp ayn� m� de�il mi diye kontrol eder.
strlwr diziyi k���k harfe �evirir.
strupr diziyi b�y�k harfe �evirir.
strrev diziyi ters �evirir.
*/

int main()
{/*
	//diziler
	int sayilar[]={15,24,78,69,32};
	for(int i=4;i>=0;i--)
	{
		printf("%d\n",sayilar[i]);
	}
 
 
int sayilar[20],girileceksayi;
printf("Lutfen kac elemanli bir dizi olucagini belirtiniz:");
scanf("%d",&girileceksayi);
for(int i=0;i<girileceksayi;i++)
{
	printf("\n sayi_%d ",i+1);
	scanf("%d",&sayilar[i]);
	
}
for(int j=0;j<girileceksayi;j++)
{
	printf("%d\n",sayilar[j]);
}



char isim[]={"Cennet"};
char soyisim[]={"Ceylan"};

int length= strlen(isim);

printf("%d",length);

printf(strcat(isim,soyisim));//birle�tirip isim de�i�kenine atad�.
if(strcmp(isim,soyisim)==0){
	printf("\nKullanici bilgileri eslesti");
	
}
else
{
	printf("\nKullanici bilgileri eslesmedi");
}
printf("\n",strlwr(isim));
printf("\n",strupr(soyisim));
printf("\n",strrev(isim));


char isim[50];
char sifre[50];
char isimveri[]={"Cennet"};
char sifreveri[]={"16120"};
printf("Lutfen kullanici isminizi girin:");
scanf("%s",&isim);
printf("\nLutfen kullanici sifrenizi girin:");
scanf("%s",&sifre);


if(strcmp(isim,isimveri)==0 && strcmp(sifre,sifreveri)==0){
	printf("Kullanici bilgileri eslesti.\n Isleminizi yapabilirsiniz.");
	
}
else
{
	printf("Kullanici bilgileri eslesmedi.");
}

//Matrisler
//matris[s�tun][sat�r]={{1.s�tun}{2.s�tun}}; sekilinde yaz�l�r.

int matris[2][2]={{1,2}{3,4}};
matris[0][0]=1;
matris[0][1]=2;
matris[1][0]=3;
matris[1][1]=4;

int i,j; 
int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
printf("%d\n",matris[1][2]);
for(i=0;i<=3;i++){
	for(j=0;j<=3;j++)
	{
		printf("%d\n",matris[i][j]);
	}
}
*/
int i, j;
int matris[3][3];

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Su anda %d sutundasiniz %d sat�r� dolduracaksiniz:",i,j);
		scanf("%d",&matris[i][j]);
		
	}
	printf("\n");
	
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d",matris[i][j]);
	}
	printf("\n");
}
































}
