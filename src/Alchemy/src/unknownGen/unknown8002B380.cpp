#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002AEAC();
void *fn_8002B240();
void fn_8002B27C();
void fn_8002BAF8();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80464AE8[];
extern char lbl_80464B04[];
extern char lbl_80472FA0[];
extern char lbl_80475FC0[];
extern char lbl_80476024[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D2AC[8];
extern char lbl_8055D2B4[4];
extern char lbl_8055D2B8[4];
extern char lbl_8055D2BC[4];
extern char lbl_8055D2C0[4];
extern char lbl_8055D2C4[8];
extern void *lbl_80561818;
extern void *lbl_80561848;
extern void *lbl_8056184C;
extern void *lbl_80561854;
extern void *lbl_80561858;
extern void *lbl_805621F4;
void fn_8002B3A8();
void *fn_8002B41C();
void *fn_8002B43C();
void fn_8002B444();
void *fn_8002B594();
void *fn_8002B5D0();
void fn_8002B640();
void fn_8002B668();
void *fn_8002B6D4();
}
struct UnknownGenObject8002B5D0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_8002B380(){
 fn_80066188((int)fn_8002B3A8);
}
void fn_8002B3A8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561848,(int)fn_8002AEAC,(int)fn_8002B43C,(int)fn_8002B41C,(int)lbl_80464AE8,84,(int)fn_8002B27C,(int)fn_8002B444,0,(int)lbl_8055D2AC);
}
void *fn_8002B41C(){return fn_8002B240();}
void *fn_8002B43C(){return lbl_80561818;}
void fn_8002B444(){
 void *meta=lbl_80561848;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D2B4,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D2B8,lbl_8055D2BC,lbl_8055D2C0,field);
}
void fn_8002B4C0(){
 if(!lbl_8056184C){
  void *object=(lbl_8056184C=fn_8006546C(lbl_80561848,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_8056184C));
   reinterpret_cast<short *>(lbl_8056184C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_8056184C);
  }
 }
}
void *fn_8002B558(){
 if(!lbl_80561854) lbl_80561854=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561854;
}
void *fn_8002B594(){
 if(!lbl_80561854 || !(reinterpret_cast<unsigned int *>(lbl_80561854)[0x24/4]&4)) fn_8002B640();
 return lbl_80561854;
}
void *fn_8002B5D0(){
 UnknownGenObject8002B5D0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476024;
 object.unknown00=lbl_80475FC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002B640(){
 fn_80066188((int)fn_8002B668);
}
void fn_8002B668(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561854,(int)fn_8002907C,(int)fn_80024180,(int)fn_8002B6D4,(int)lbl_80464B04,20,(int)fn_8002B5D0,0,0,(int)lbl_8055D2C4);
}
void *fn_8002B6D4(){return fn_8002B594();}
void *fn_8002B6F4(void *object){
 fn_8002BAF8();
 return fn_8006546C(lbl_80561858,object);
}
void *fn_8002B72C(){
 if(!lbl_80561858 || !(reinterpret_cast<unsigned int *>(lbl_80561858)[0x24/4]&4)) fn_8002BAF8();
 return lbl_80561858;
}
}
#pragma pop
