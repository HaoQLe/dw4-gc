#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void fn_8002A6D8();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8011D8BC();
extern char lbl_80471914[];
extern char lbl_804988F4[];
extern char lbl_804995D4[];
extern char lbl_8055F338[8];
extern void *lbl_805621F4;
extern void *lbl_8056390C;
extern void *lbl_80563910;
void *fn_8011E924();
void *fn_8011E960();
void fn_8011E9EC();
void fn_8011EA14();
void *fn_8011EA80();
}
struct UnknownGenObject8011E960 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8011E960(){unknown00=lbl_804995D4;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8011E924(){
 if(!lbl_8056390C || !(reinterpret_cast<unsigned int *>(lbl_8056390C)[0x24/4]&4)) fn_8011E9EC();
 return lbl_8056390C;
}
void *fn_8011E960(){
 UnknownGenObject8011E960 object;
 fn_800638E0(&object);
 object.unknown00=lbl_804995D4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011E9EC(){
 fn_80066188((int)fn_8011EA14);
}
void fn_8011EA14(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056390C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011EA80,(int)lbl_804988F4,52,(int)fn_8011E960,0,0,(int)lbl_8055F338);
}
void *fn_8011EA80(){return fn_8011E924();}
void fn_8011EAA0(){
 if(!lbl_80563910){
  void *object=(lbl_80563910=fn_8006546C(lbl_8056390C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563910));
   reinterpret_cast<short *>(lbl_80563910)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563910);
  }
 }
}
}
#pragma pop
