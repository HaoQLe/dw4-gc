#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80028A20();
void *fn_80028BFC();
void *fn_80028C64();
void fn_80028CA0();
void fn_8002936C();
void *fn_80029E64(void *);
void fn_80033A14();
void fn_80053650(void *,int);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80464130[];
extern char lbl_8046414C[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D214[8];
extern char lbl_8055D21C[4];
extern char lbl_8055D220[4];
extern char lbl_8055D224[4];
extern char lbl_8055D228[4];
extern void *lbl_805616E8;
extern void *lbl_805616FC;
extern void *lbl_80561700;
extern void *lbl_80561708;
extern char lbl_8056170C[4];
extern void *lbl_80561710;
extern void *lbl_805621F4;
void fn_80028D9C();
void *fn_80028E10();
void *fn_80028E30();
void fn_80028E38();
void *fn_80028FC0();
void *fn_80028FFC();
void fn_80029054();
void fn_8002907C();
void *fn_800290EC();
void fn_8002910C();
}
struct UnknownGenObject80028FFC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_80028D74(){
 fn_80066188((int)fn_80028D9C);
}
void fn_80028D9C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616FC,(int)fn_80028A20,(int)fn_80028E30,(int)fn_80028E10,(int)lbl_80464130,72,(int)fn_80028CA0,(int)fn_80028E38,0,(int)lbl_8055D214);
}
void *fn_80028E10(){return fn_80028C64();}
void *fn_80028E30(){return lbl_805616E8;}
void fn_80028E38(){
 void *meta=lbl_805616FC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D21C,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D220,lbl_8055D224,lbl_8055D228,field);
}
void fn_80028EB4(){
 if(!lbl_80561700){
  void *object=(lbl_80561700=fn_8006546C(lbl_805616FC,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561700));
   reinterpret_cast<short *>(lbl_80561700)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561700);
  }
 }
}
void *fn_80028F4C(void *object){
 fn_80029054();
 return fn_8006546C(lbl_80561708,object);
}
void *fn_80028F84(){
 if(!lbl_80561708) lbl_80561708=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561708;
}
void *fn_80028FC0(){
 if(!lbl_80561708 || !(reinterpret_cast<unsigned int *>(lbl_80561708)[0x24/4]&4)) fn_80029054();
 return lbl_80561708;
}
void *fn_80028FFC(){
 UnknownGenObject80028FFC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029054(){
 fn_80066188((int)fn_8002907C);
}
void fn_8002907C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561708,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_800290EC,(int)lbl_8046414C,20,(int)fn_80028FFC,(int)fn_8002910C,0,0);
}
void *fn_800290EC(){return fn_80028FC0();}
void fn_8002910C(){
 void *meta=lbl_80561708;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_80028BFC();
 field->unknown38=0;
 field->unknown1C=lbl_8056170C;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_800291C8(void *object){
 fn_8002936C();
 return fn_8006546C(lbl_80561710,object);
}
void *fn_80029200(){
 if(!lbl_80561710 || !(reinterpret_cast<unsigned int *>(lbl_80561710)[0x24/4]&4)) fn_8002936C();
 return lbl_80561710;
}
}
#pragma pop
