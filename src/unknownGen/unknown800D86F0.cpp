#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D1E48();
void *fn_800D1EE8();
void fn_800D8824();
extern char lbl_8048ED5C[];
extern char lbl_8049168C[];
extern char lbl_80492C48[];
extern char lbl_804930AC[];
extern void *lbl_80562F5C;
extern void *lbl_80563464;
void *fn_800D872C();
void fn_800D8784();
void fn_800D87AC();
void *fn_800D881C();
}
struct UnknownGenObject800D872C {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_800D86F0(){
 if(!lbl_80563464 || !(reinterpret_cast<unsigned int *>(lbl_80563464)[0x24/4]&4)) fn_800D8784();
 return lbl_80563464;
}
void *fn_800D872C(){
 UnknownGenObject800D872C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_80492C48;
 object.unknown00=lbl_8049168C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D8784(){
 fn_80066188((int)fn_800D87AC);
}
void fn_800D87AC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563464,(int)fn_800D1E48,(int)fn_800D881C,(int)fn_800D1EE8,(int)lbl_8048ED5C,8,(int)fn_800D872C,(int)fn_800D8824,0,0);
}
void *fn_800D881C(){return lbl_80562F5C;}
}
#pragma pop
