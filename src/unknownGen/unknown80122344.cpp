#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void fn_80033A14();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_801224C8();
extern char lbl_80472FA0[];
extern char lbl_80498CE8[];
extern char lbl_8049A5D8[];
extern char lbl_8049A638[];
extern void *lbl_80563A20;
void *fn_8012237C();
void *fn_801223B8();
void fn_80122410();
void fn_80122438();
void *fn_801224A8();
}
struct UnknownGenObject801223B8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80122344(void *object){
 fn_80122410();
 return fn_8006546C(lbl_80563A20,object);
}
void *fn_8012237C(){
 if(!lbl_80563A20 || !(reinterpret_cast<unsigned int *>(lbl_80563A20)[0x24/4]&4)) fn_80122410();
 return lbl_80563A20;
}
void *fn_801223B8(){
 UnknownGenObject801223B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049A638;
 object.unknown00=lbl_8049A5D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80122410(){
 fn_80066188((int)fn_80122438);
}
void fn_80122438(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A20,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_801224A8,(int)lbl_80498CE8,20,(int)fn_801223B8,(int)fn_801224C8,0,0);
}
void *fn_801224A8(){return fn_8012237C();}
}
#pragma pop
