#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801420C0();
void fn_801465FC();
extern char lbl_8049E8B0[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
extern void *lbl_80564198;
void *fn_801467C0();
void *fn_801467FC();
void fn_80146848();
void fn_80146870();
void *fn_801468D8();
}
struct UnknownGenObject801467FC {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801467C0(){
 if(!lbl_80564198 || !(reinterpret_cast<unsigned int *>(lbl_80564198)[0x24/4]&4)) fn_80146848();
 return lbl_80564198;
}
void *fn_801467FC(){
 UnknownGenObject801467FC object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80146848(){
 fn_80066188((int)fn_80146870);
}
void fn_80146870(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564198,(int)fn_801465FC,(int)fn_801420C0,(int)fn_801468D8,(int)lbl_8049E8B0,32,(int)fn_801467FC,0,0,0);
}
void *fn_801468D8(){return fn_801467C0();}
}
#pragma pop
