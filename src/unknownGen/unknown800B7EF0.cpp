#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B803C();
extern char lbl_804798AC[];
extern char lbl_8047CAE8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562908;
void *fn_800B7EF0();
void *fn_800B7F2C();
void fn_800B7F84();
void fn_800B7FAC();
void *fn_800B801C();
}
struct UnknownGenObject800B7F2C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B7EF0(){
 if(!lbl_80562908 || !(reinterpret_cast<unsigned int *>(lbl_80562908)[0x24/4]&4)) fn_800B7F84();
 return lbl_80562908;
}
void *fn_800B7F2C(){
 UnknownGenObject800B7F2C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CAE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7F84(){
 fn_80066188((int)fn_800B7FAC);
}
void fn_800B7FAC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562908,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B801C,(int)lbl_804798AC,16,(int)fn_800B7F2C,(int)fn_800B803C,0,0);
}
void *fn_800B801C(){return fn_800B7EF0();}
}
#pragma pop
