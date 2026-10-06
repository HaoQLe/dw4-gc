#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002A6D8();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80065D94(int);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8011D8BC();
void *fn_8012705C();
void *fn_80127270();
void fn_8012728C();
void fn_80127368();
void *fn_80127910();
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049882C[];
extern char lbl_80498838[];
extern char lbl_80498848[];
extern char lbl_8049885C[];
extern char lbl_80498870[];
extern char lbl_8049901C[];
extern char lbl_8049BA38[];
extern char lbl_8049BA94[];
extern char lbl_8049BAF0[];
extern char lbl_8049BB54[];
extern char lbl_8055F2F8[8];
extern char lbl_8055F300[8];
extern void *lbl_805621F4;
extern void *lbl_805638C8;
extern void *lbl_805638CC;
extern void *lbl_805638D0;
extern void *lbl_805638D4;
extern void *lbl_805638D8;
extern void *lbl_805638DC;
void *fn_8011D950();
void fn_8011D98C();
void fn_8011D9B4();
void *fn_8011DA28();
void fn_8011DA48();
void fn_8011DA70();
void *fn_8011DA9C();
void *fn_8011DB30();
void *fn_8011DB6C();
void fn_8011DBDC();
void fn_8011DC04();
void *fn_8011DC70();
void *fn_8011DC90();
void *fn_8011DCCC();
void fn_8011DD0C();
void fn_8011DD34();
void *fn_8011DDA4();
void *fn_8011DDC4();
void *fn_8011DDE4();
void *fn_8011DE20();
void fn_8011DE60();
void fn_8011DE88();
void *fn_8011DEF8();
void *fn_8011DF18();
void *fn_8011DF38();
void *fn_8011DF74();
void fn_8011E000();
void fn_8011E028();
void *fn_8011E094();
}
struct UnknownGenObject8011DB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011DCCC_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject8011DE20_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8011DF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011DF74(){fn_800638E0(this);}
};
struct UnknownGenObject8011DF74_0 : UnknownGenRoot8011DF74 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011DF74_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011DF74 : UnknownGenObject8011DF74_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011DF74(){unknown00=lbl_8049901C;}
};
extern "C" {
void *fn_8011D914(){
 if(!lbl_805638C8) lbl_805638C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805638C8;
}
void *fn_8011D950(){
 if(!lbl_805638C8 || !(reinterpret_cast<unsigned int *>(lbl_805638C8)[0x24/4]&4)) fn_8011D98C();
 return lbl_805638C8;
}
void fn_8011D98C(){
 fn_80066188((int)fn_8011D9B4);
}
void fn_8011D9B4(){
 fn_8011D8BC();
 fn_80066204(1,(int)&lbl_805638C8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8011DA28,(int)lbl_8049882C,8,0,(int)fn_8011DA48,(int)fn_8011DA70,0);
}
void *fn_8011DA28(){return fn_8011D950();}
void fn_8011DA48(){
 fn_80065D94((int)fn_8011DA9C);
}
void fn_8011DA70(){
 fn_8012728C();
 fn_80065DBC((int)fn_80127368);
}
void *fn_8011DA9C(){return fn_80127910();}
void *fn_8011DABC(void *object){
 fn_8011DBDC();
 return fn_8006546C(lbl_805638CC,object);
}
void *fn_8011DAF4(){
 if(!lbl_805638CC) lbl_805638CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805638CC;
}
void *fn_8011DB30(){
 if(!lbl_805638CC || !(reinterpret_cast<unsigned int *>(lbl_805638CC)[0x24/4]&4)) fn_8011DBDC();
 return lbl_805638CC;
}
void *fn_8011DB6C(){
 UnknownGenObject8011DB6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8049BB54;
 object.unknown00=lbl_8049BAF0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011DBDC(){
 fn_80066188((int)fn_8011DC04);
}
void fn_8011DC04(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638CC,(int)fn_8002907C,(int)fn_80024180,(int)fn_8011DC70,(int)lbl_80498838,20,(int)fn_8011DB6C,0,0,(int)lbl_8055F2F8);
}
void *fn_8011DC70(){return fn_8011DB30();}
void *fn_8011DC90(){
 if(!lbl_805638D0 || !(reinterpret_cast<unsigned int *>(lbl_805638D0)[0x24/4]&4)) fn_8011DD0C();
 return lbl_805638D0;
}
void *fn_8011DCCC(){
 UnknownGenObject8011DCCC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049BA94;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011DD0C(){
 fn_80066188((int)fn_8011DD34);
}
void fn_8011DD34(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638D0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8011DDA4,(int)lbl_80498848,8,(int)fn_8011DCCC,0,(int)fn_8011DDC4,0);
}
void *fn_8011DDA4(){return fn_8011DC90();}
void *fn_8011DDC4(){return fn_80127270();}
void *fn_8011DDE4(){
 if(!lbl_805638D4 || !(reinterpret_cast<unsigned int *>(lbl_805638D4)[0x24/4]&4)) fn_8011DE60();
 return lbl_805638D4;
}
void *fn_8011DE20(){
 UnknownGenObject8011DE20_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049BA38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011DE60(){
 fn_80066188((int)fn_8011DE88);
}
void fn_8011DE88(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638D4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8011DEF8,(int)lbl_8049885C,8,(int)fn_8011DE20,0,(int)fn_8011DF18,0);
}
void *fn_8011DEF8(){return fn_8011DDE4();}
void *fn_8011DF18(){return fn_8012705C();}
void *fn_8011DF38(){
 if(!lbl_805638D8 || !(reinterpret_cast<unsigned int *>(lbl_805638D8)[0x24/4]&4)) fn_8011E000();
 return lbl_805638D8;
}
void *fn_8011DF74(){
 UnknownGenObject8011DF74 object;
 object.unknown00=lbl_8049901C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011E000(){
 fn_80066188((int)fn_8011E028);
}
void fn_8011E028(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638D8,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011E094,(int)lbl_80498870,52,(int)fn_8011DF74,0,0,(int)lbl_8055F300);
}
void *fn_8011E094(){return fn_8011DF38();}
void fn_8011E0B4(){
 if(!lbl_805638DC){
  void *object=(lbl_805638DC=fn_8006546C(lbl_805638D8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638DC));
   reinterpret_cast<short *>(lbl_805638DC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638DC);
  }
 }
}
}
#pragma pop
