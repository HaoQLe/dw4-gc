#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_800238A8();
void *fn_80023A10();
void fn_8003AF70();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468694[];
extern char lbl_804700A8[];
extern char lbl_80470C2C[];
extern void *lbl_805614E8;
extern void *lbl_80562070;
void *fn_8003AE84();
void fn_8003AED0();
void fn_8003AEF8();
void *fn_8003AF68();
}
struct UnknownGenObject8003AE84_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8003AE48(){
 if(!lbl_80562070 || !(reinterpret_cast<unsigned int *>(lbl_80562070)[0x24/4]&4)) fn_8003AED0();
 return lbl_80562070;
}
void *fn_8003AE84(){
 UnknownGenObject8003AE84_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80470C2C;
 object.unknown00=lbl_804700A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003AED0(){
 fn_80066188((int)fn_8003AEF8);
}
void fn_8003AEF8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562070,(int)fn_800238A8,(int)fn_8003AF68,(int)fn_80023A10,(int)lbl_80468694,16,(int)fn_8003AE84,(int)fn_8003AF70,0,0);
}
void *fn_8003AF68(){return lbl_805614E8;}
}
#pragma pop
