#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_8013BA18();
void fn_801527B0();
extern char lbl_8049DA7C[];
extern char lbl_8049DA90[];
extern char lbl_8049DA9C[];
extern char lbl_804AA160[];
extern void *lbl_805621F4;
extern void *lbl_80563ECC;
extern void *lbl_80563ED0;
extern void *lbl_8056455C;
void *fn_8013B7EC();
void *fn_8013B828();
void fn_8013B868();
void fn_8013B890();
void *fn_8013B8F8();
void *fn_8013B918();
void fn_8013B954();
void fn_8013B97C();
void *fn_8013B9F0();
void *fn_8013BA10();
}
struct UnknownGenObject8013B828_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_8013B778(void *object){
 fn_8013B868();
 return fn_8006546C(lbl_80563ECC,object);
}
void *fn_8013B7B0(){
 if(!lbl_80563ECC) lbl_80563ECC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563ECC;
}
void *fn_8013B7EC(){
 if(!lbl_80563ECC || !(reinterpret_cast<unsigned int *>(lbl_80563ECC)[0x24/4]&4)) fn_8013B868();
 return lbl_80563ECC;
}
void *fn_8013B828(){
 UnknownGenObject8013B828_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AA160;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013B868(){
 fn_80066188((int)fn_8013B890);
}
void fn_8013B890(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ECC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8013B8F8,(int)lbl_8049DA7C,8,(int)fn_8013B828,0,0,0);
}
void *fn_8013B8F8(){return fn_8013B7EC();}
void *fn_8013B918(){
 if(!lbl_80563ED0 || !(reinterpret_cast<unsigned int *>(lbl_80563ED0)[0x24/4]&4)) fn_8013B954();
 return lbl_80563ED0;
}
void fn_8013B954(){
 fn_80066188((int)fn_8013B97C);
}
void fn_8013B97C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563ED0,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_8013B9F0,(int)lbl_8049DA9C,40,0,(int)fn_8013BA18,0,(int)lbl_8049DA90);
}
void *fn_8013B9F0(){return fn_8013B918();}
void *fn_8013BA10(){return lbl_8056455C;}
}
#pragma pop
