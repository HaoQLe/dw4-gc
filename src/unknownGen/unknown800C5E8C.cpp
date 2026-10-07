#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800FC960(void *,int,void *,void *,void *,void *);
void fn_800FCA28(void *,int,void *,void *,void *,void *);
void fn_800FCA7C(void *,void *,void *,void *);
extern void *lbl_80562404;
extern void *lbl_80562410;
extern void *lbl_80562A88;
extern void *lbl_80562A9C;
extern void *lbl_80562AAC;
extern void *lbl_80562AB8;
extern void *lbl_80562AC4;
extern void *lbl_80562AD0;
}
extern "C" {
void fn_800C5E8C(int p0,int p1){
 void *local1;
 void *local0;
 fn_800FCA7C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13)=(unsigned char)(int)local0;
}
void fn_800C5ED8(int p0,int p1){
 fn_800FC960((void *)p1,0,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+12),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+16),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+20),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+24));
 fn_800FC960((void *)p1,1,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+13),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+17),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+21),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+25));
 fn_800FC960((void *)p1,2,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+14),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+18),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+22),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+26));
 fn_800FC960((void *)p1,3,(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+15),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+19),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+23),(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+27));
}
void fn_800C5FBC(int p0,int p1){
 void *local3;
 void *local2;
 void *local1;
 void *local0;
 fn_800FCA28((void *)p1,0,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+24)=(unsigned char)(int)local0;
 fn_800FCA28((void *)p1,1,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+17)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+21)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+25)=(unsigned char)(int)local0;
 fn_800FCA28((void *)p1,2,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+14)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+18)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+22)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+26)=(unsigned char)(int)local0;
 fn_800FCA28((void *)p1,3,&local3,&local2,&local1,&local0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+15)=(unsigned char)(int)local3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+19)=(unsigned char)(int)local2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+23)=(unsigned char)(int)local1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+27)=(unsigned char)(int)local0;
}
void *fn_800C60E0(){return lbl_80562A88;}
void fn_800C60E8(){}
void fn_800C60EC(){}
void fn_800C60F0(){}
void fn_800C60F4(){}
int fn_800C60F8(){return 1;}
void *fn_800C6100(){return lbl_80562A9C;}
void fn_800C6108(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800C6110(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+13)=value;}
void *fn_800C6118(){return lbl_80562AAC;}
void *fn_800C6120(){return lbl_80562AB8;}
void *fn_800C6128(){return lbl_80562AC4;}
int fn_800C6130(){return 4;}
void *fn_800C6138(){return lbl_80562AD0;}
int fn_800C6140(){return 4;}
void *fn_800C6148(){return lbl_80562404;}
void *fn_800C6150(){return lbl_80562410;}
}
#pragma pop
