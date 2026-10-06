#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013B2B0();
void fn_80141778();
void fn_80142038();
extern char lbl_8049E0FC[];
extern char lbl_804A6460[];
extern char lbl_804AA0F4[];
extern char lbl_804AA22C[];
extern void *lbl_805621F4;
extern void *lbl_8056403C;
extern void *lbl_80564040;
void *fn_8014151C();
void *fn_80141558();
void fn_801415B0();
void fn_801415D8();
void *fn_80141640();
}
struct UnknownGenObject80141558_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801414E0(){
 if(!lbl_8056403C) lbl_8056403C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056403C;
}
void *fn_8014151C(){
 if(!lbl_8056403C || !(reinterpret_cast<unsigned int *>(lbl_8056403C)[0x24/4]&4)) fn_801415B0();
 return lbl_8056403C;
}
void *fn_80141558(){
 UnknownGenObject80141558_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804AA0F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801415B0(){
 fn_80066188((int)fn_801415D8);
}
void fn_801415D8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056403C,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_80141640,(int)lbl_8049E0FC,32,(int)fn_80141558,0,0,0);
}
void *fn_80141640(){return fn_8014151C();}
void *fn_80141660(){
 if(!lbl_80564040) lbl_80564040=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564040;
}
void *fn_8014169C(){
 if(!lbl_80564040 || !(reinterpret_cast<unsigned int *>(lbl_80564040)[0x24/4]&4)) fn_80141778();
 return lbl_80564040;
}
}
#pragma pop
