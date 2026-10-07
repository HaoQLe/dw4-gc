#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_8004155C(void *,void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void *fn_800CB1F4();
void fn_800CB4AC();
void *fn_800CBC9C();
extern char lbl_8047EC18[];
extern char lbl_8047EC24[];
extern char lbl_8047F350[];
extern char lbl_8055E948[8];
extern void *lbl_805621F4;
extern void *lbl_80562B24;
extern void *lbl_80562B2C;
extern void *lbl_80562B40;
extern void *lbl_80562B60;
extern char lbl_80562B70[1];
extern char lbl_80562B71[1];
extern void *lbl_80562B74;
extern void *lbl_80562B9C;
extern void *lbl_80562BA4;
extern void *lbl_80562BB0;
void fn_800CAEE0();
void *fn_800CAF88();
void fn_800CAFC4();
void fn_800CAFEC();
void *fn_800CB058();
void *fn_800CB078();
void *fn_800CB080();
void *fn_800CB094();
void *fn_800CB100();
void fn_800CB13C();
void fn_800CB164();
void *fn_800CB1D4();
}
extern "C" {
void *fn_800CAE04(){return lbl_80562B40;}
void fn_800CAE0C(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0xC)=value;
}
int fn_800CAE7C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int fn_800CAE84(){return 32;}
void *fn_800CAE8C(){return lbl_80562B24;}
void *fn_800CAE94(){return lbl_80562B60;}
void *fn_800CAE9C(){return lbl_80562B2C;}
int fn_800CAEA4(){return 60;}
void fn_800CAEAC(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),60);
  return;
 } else {
  return;
 }
}
void fn_800CAEE0(){
 if((int)*reinterpret_cast<signed char *>((lbl_80562B71+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80562B70+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80562B71+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562B70+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80562B70+0))=1;
}
void *fn_800CAF14(void *object){
 fn_800CAFC4();
 return fn_8006546C(lbl_80562B74,object);
}
void *fn_800CAF4C(){
 if(!lbl_80562B74) lbl_80562B74=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562B74;
}
void *fn_800CAF88(){
 if(!lbl_80562B74 || !(reinterpret_cast<unsigned int *>(lbl_80562B74)[0x24/4]&4)) fn_800CAFC4();
 return lbl_80562B74;
}
void fn_800CAFC4(){
 fn_80066188((int)fn_800CAFEC);
}
void fn_800CAFEC(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562B74,(int)fn_800CB4AC,(int)fn_800CB078,(int)fn_800CB058,(int)lbl_8047EC24,8,0,(int)fn_800CB080,0,0);
}
void *fn_800CB058(){return fn_800CAF88();}
void *fn_800CB078(){return lbl_80562BB0;}
void *fn_800CB080(){
 void *value0=lbl_80562B74;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+60)=(void *)fn_800CB094;
 return value0;
}
void *fn_800CB094(){return fn_800CBC9C();}
void *fn_800CB0B4(){
 char *data=lbl_8047EC18;
 if(!lbl_80562B9C) lbl_80562B9C=fn_800635C8(data+0x72C,data+0x3E4,data+0x588,0x69);
 return lbl_80562B9C;
}
void *fn_800CB100(){
 if(!lbl_80562BA4 || !(reinterpret_cast<unsigned int *>(lbl_80562BA4)[0x24/4]&4)) fn_800CB13C();
 return lbl_80562BA4;
}
void fn_800CB13C(){
 fn_80066188((int)fn_800CB164);
}
void fn_800CB164(){
 fn_800CAEE0();
 fn_80066204(1,(int)&lbl_80562BA4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800CB1D4,(int)lbl_8047F350,12,0,(int)fn_800CB1F4,0,(int)lbl_8055E948);
}
void *fn_800CB1D4(){return fn_800CB100();}
}
#pragma pop
