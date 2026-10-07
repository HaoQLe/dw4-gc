#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80023CFC();
void *fn_80023E40();
void *fn_80026020();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_8002CD1C();
void *fn_8003AE48();
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80065D94(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void *fn_800755F8();
void *fn_8007568C();
extern char lbl_80463100[];
extern char lbl_804631F8[];
extern char lbl_80463204[];
extern char lbl_804632A8[];
extern char lbl_804632B4[];
extern char lbl_804632C0[];
extern char lbl_8055CF98[8];
extern char lbl_8055CFA8[8];
extern char lbl_8055CFB0[8];
extern char lbl_8055CFB8[8];
extern char lbl_8055CFF0[8];
extern char lbl_8055CFF8[8];
extern char lbl_8055D000[6];
extern char lbl_8055D018[6];
extern char lbl_8055D030[8];
extern char lbl_8055D038[8];
extern char lbl_8055D040[5];
extern void *lbl_805614E8;
extern void *lbl_805614F4;
extern void *lbl_805614F8;
extern void *lbl_805614FC;
extern void *lbl_80561500;
extern void *lbl_80561504;
extern void *lbl_80561744;
extern void *lbl_805621F4;
void *fn_80023844();
void fn_80023880();
void fn_800238A8();
void *fn_80023920();
void fn_80023940();
void *fn_80023A10();
void *fn_80023A30();
void *fn_80023A50();
void *fn_80023C04();
void fn_80023C40();
void fn_80023C68();
void *fn_80023CD4();
void *fn_80023CF4();
}
extern "C" {
void *fn_800237EC(){return fn_8002CD1C();}
void *fn_8002380C(void *object){
 fn_80023880();
 return fn_8006546C(lbl_805614E8,object);
}
void *fn_80023844(){
 if(!lbl_805614E8 || !(reinterpret_cast<unsigned int *>(lbl_805614E8)[0x24/4]&4)) fn_80023880();
 return lbl_805614E8;
}
void fn_80023880(){
 fn_80066188((int)fn_800238A8);
}
void fn_800238A8(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805614E8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80023920,(int)lbl_80463204,16,0,(int)fn_80023940,(int)fn_80023A30,(int)lbl_804631F8);
}
void *fn_80023920(){return fn_80023844();}
void fn_80023940(){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(lbl_805614E8)+24)=1;
 void *value0=lbl_805614E8;
 void *value2=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055CF98,2);
 void *value3=fn_800658E4(value0,value2);
 void *value4=fn_80023E40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value2)+1));
 void *value6=fn_80026020();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 fn_800659C0(value0,lbl_8055CFA8,lbl_8055CFB0,lbl_8055CFB8,value2);
 void *value1=lbl_805614E8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+60)=(void *)fn_80023A10;
 fn_80065D94((void *)fn_80023A50);
}
void *fn_80023A10(){return fn_8003AE48();}
void *fn_80023A30(){return fn_800755F8();}
void *fn_80023A50(){return fn_8007568C();}
void *fn_80023A70(){
 char *data=lbl_80463100;
 if(!lbl_805614F4) lbl_805614F4=fn_800635C8(data+0x174,data+0x144,data+0x15C,0x6);
 return lbl_805614F4;
}
void *fn_80023ABC(){
 void *value0;
 if(!lbl_805614F8){
  value0=fn_800635C8(lbl_8055D000,lbl_8055CFF0,lbl_8055CFF8,2);
  lbl_805614F8=value0;
 }
 return lbl_805614F8;
}
void *fn_80023B00(){
 void *value0;
 if(!lbl_805614FC){
  value0=fn_800635C8(lbl_8055D018,lbl_804632A8,lbl_804632B4,3);
  lbl_805614FC=value0;
 }
 return lbl_805614FC;
}
void *fn_80023B4C(){
 void *value0;
 if(!lbl_80561500){
  value0=fn_800635C8(lbl_8055D040,lbl_8055D030,lbl_8055D038,2);
  lbl_80561500=value0;
 }
 return lbl_80561500;
}
void *fn_80023B90(void *object){
 fn_80023C40();
 return fn_8006546C(lbl_80561504,object);
}
void *fn_80023BC8(){
 if(!lbl_80561504) lbl_80561504=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561504;
}
void *fn_80023C04(){
 if(!lbl_80561504 || !(reinterpret_cast<unsigned int *>(lbl_80561504)[0x24/4]&4)) fn_80023C40();
 return lbl_80561504;
}
void fn_80023C40(){
 fn_80066188((int)fn_80023C68);
}
void fn_80023C68(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561504,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80023CD4,(int)lbl_804632C0,48,0,(int)fn_80023CFC,0,0);
}
void *fn_80023CD4(){return fn_80023C04();}
void *fn_80023CF4(){return lbl_80561744;}
}
#pragma pop
