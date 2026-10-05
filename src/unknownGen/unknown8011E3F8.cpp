#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void fn_8002A6D8();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8011D8BC();
void fn_8011E2A4();
extern char lbl_80471914[];
extern char lbl_804988B0[];
extern char lbl_804988C8[];
extern char lbl_80499204[];
extern char lbl_804992F8[];
extern char lbl_804993EC[];
extern char lbl_8055F318[8];
extern char lbl_8055F320[4];
extern char lbl_8055F324[4];
extern char lbl_8055F328[4];
extern char lbl_8055F32C[4];
extern char lbl_8055F330[8];
extern void *lbl_805621F4;
extern void *lbl_805638E8;
extern void *lbl_805638F0;
extern void *lbl_805638F4;
extern void *lbl_805638FC;
extern void *lbl_80563900;
void *fn_8011E430();
void *fn_8011E46C();
void fn_8011E508();
void fn_8011E530();
void *fn_8011E5A4();
void *fn_8011E5C4();
void fn_8011E5CC();
void *fn_8011E6E0();
void *fn_8011E71C();
void fn_8011E7A8();
void fn_8011E7D0();
void *fn_8011E83C();
}
struct UnknownGenObject8011E46C {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8011E46C(){unknown00=lbl_804992F8;unknown00=lbl_80499204;unknown00=lbl_80471914;}
};
struct UnknownGenObject8011E71C {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8011E71C(){unknown00=lbl_804993EC;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8011E3F8(void *object){
 fn_8011E508();
 return fn_8006546C(lbl_805638F0,object);
}
void *fn_8011E430(){
 if(!lbl_805638F0 || !(reinterpret_cast<unsigned int *>(lbl_805638F0)[0x24/4]&4)) fn_8011E508();
 return lbl_805638F0;
}
void *fn_8011E46C(){
 UnknownGenObject8011E46C object;
 fn_800638E0(&object);
 object.unknown00=lbl_80499204;
 object.unknown00=lbl_804992F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011E508(){
 fn_80066188((int)fn_8011E530);
}
void fn_8011E530(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638F0,(int)fn_8011E2A4,(int)fn_8011E5C4,(int)fn_8011E5A4,(int)lbl_804988B0,56,(int)fn_8011E46C,(int)fn_8011E5CC,0,(int)lbl_8055F318);
}
void *fn_8011E5A4(){return fn_8011E430();}
void *fn_8011E5C4(){return lbl_805638E8;}
void fn_8011E5CC(){
 void *meta=lbl_805638F0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055F320,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055F324,lbl_8055F328,lbl_8055F32C,field);
}
void fn_8011E648(){
 if(!lbl_805638F4){
  void *object=(lbl_805638F4=fn_8006546C(lbl_805638F0,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638F4));
   reinterpret_cast<short *>(lbl_805638F4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638F4);
  }
 }
}
void *fn_8011E6E0(){
 if(!lbl_805638FC || !(reinterpret_cast<unsigned int *>(lbl_805638FC)[0x24/4]&4)) fn_8011E7A8();
 return lbl_805638FC;
}
void *fn_8011E71C(){
 UnknownGenObject8011E71C object;
 fn_800638E0(&object);
 object.unknown00=lbl_804993EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011E7A8(){
 fn_80066188((int)fn_8011E7D0);
}
void fn_8011E7D0(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638FC,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011E83C,(int)lbl_804988C8,52,(int)fn_8011E71C,0,0,(int)lbl_8055F330);
}
void *fn_8011E83C(){return fn_8011E6E0();}
void fn_8011E85C(){
 if(!lbl_80563900){
  void *object=(lbl_80563900=fn_8006546C(lbl_805638FC,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563900));
   reinterpret_cast<short *>(lbl_80563900)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563900);
  }
 }
}
}
#pragma pop
