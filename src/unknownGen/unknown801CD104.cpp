#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801CD274();
extern char lbl_804B289C[];
extern char lbl_804B5AFC[];
extern void *lbl_805621F4;
extern void *lbl_80565558;
void *fn_801CD140();
void *fn_801CD17C();
void fn_801CD1BC();
void fn_801CD1E4();
void *fn_801CD254();
}
struct UnknownGenObject801CD17C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801CD104(){
 if(!lbl_80565558) lbl_80565558=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565558;
}
void *fn_801CD140(){
 if(!lbl_80565558 || !(reinterpret_cast<unsigned int *>(lbl_80565558)[0x24/4]&4)) fn_801CD1BC();
 return lbl_80565558;
}
void *fn_801CD17C(){
 UnknownGenObject801CD17C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B5AFC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD1BC(){
 fn_80066188((int)fn_801CD1E4);
}
void fn_801CD1E4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565558,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CD254,(int)lbl_804B289C,32,(int)fn_801CD17C,(int)fn_801CD274,0,0);
}
void *fn_801CD254(){return fn_801CD140();}
}
#pragma pop
