#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_800253DC();
void fn_80025404();
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
void fn_80071E44(void *);
extern char lbl_804636B0[];
extern char lbl_80471018[];
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_8047693C[];
extern char lbl_8055D100[8];
extern char lbl_8055D108[4];
extern char lbl_8055D10C[4];
extern char lbl_8055D110[4];
extern char lbl_8055D114[4];
extern void *lbl_805615B4;
extern void *lbl_805615B8;
extern void *lbl_805615C8;
extern void *lbl_805615CC;
extern void *lbl_805621F4;
void *fn_800256F0();
void *fn_8002572C();
void fn_800257D0();
void fn_800257F8();
void *fn_8002586C();
void *fn_8002588C();
void fn_80025894();
}
struct UnknownGenRoot8002572C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002572C(){fn_80071E44(this);}
};
struct UnknownGenObject8002572C_0 : UnknownGenRoot8002572C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002572C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002572C_1 : UnknownGenObject8002572C_0 {
 inline ~UnknownGenObject8002572C_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002572C_2 : UnknownGenObject8002572C_1 {
 inline ~UnknownGenObject8002572C_2(){unknown00=lbl_8047693C;}
};
struct UnknownGenObject8002572C : UnknownGenObject8002572C_2 {
 char unknown10[48];
 inline ~UnknownGenObject8002572C(){unknown00=lbl_80471018;}
};
extern "C" {
void fn_80025628(){
 if(!lbl_805615B8){
  void *object=(lbl_805615B8=fn_8006546C(lbl_805615B4,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615B8));
   reinterpret_cast<short *>(lbl_805615B8)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615B8);
  }
 }
}
void *fn_800256C0(){
 if(!lbl_805615B8){
  fn_800253DC();
 }
 return lbl_805615B8;
}
void *fn_800256F0(){
 if(!lbl_805615C8 || !(reinterpret_cast<unsigned int *>(lbl_805615C8)[0x24/4]&4)) fn_800257D0();
 return lbl_805615C8;
}
void *fn_8002572C(){
 UnknownGenObject8002572C object;
 object.unknown00=lbl_80471018;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800257D0(){
 fn_80066188((int)fn_800257F8);
}
void fn_800257F8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805615C8,(int)fn_80025404,(int)fn_8002588C,(int)fn_8002586C,(int)lbl_804636B0,64,(int)fn_8002572C,(int)fn_80025894,0,(int)lbl_8055D100);
}
void *fn_8002586C(){return fn_800256F0();}
void *fn_8002588C(){return lbl_805615B4;}
void fn_80025894(){
 void *meta=lbl_805615C8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D108,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D10C,lbl_8055D110,lbl_8055D114,field);
}
void fn_80025910(){
 if(!lbl_805615CC){
  void *object=(lbl_805615CC=fn_8006546C(lbl_805615C8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615CC));
   reinterpret_cast<short *>(lbl_805615CC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615CC);
  }
 }
}
}
#pragma pop
