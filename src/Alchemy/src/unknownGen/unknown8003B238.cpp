#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_800260C0();
void *fn_80026160();
void *fn_8003B3BC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_804687A8[];
extern char lbl_80470314[];
extern char lbl_80473480[];
extern char lbl_8047650C[];
extern void *lbl_805615EC;
extern void *lbl_805620A0;
void *fn_8003B274();
void fn_8003B31C();
void fn_8003B344();
void *fn_8003B3B4();
}
struct UnknownGenRoot8003B274 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B274(){fn_8006665C(this);}
};
struct UnknownGenObject8003B274_0 : UnknownGenRoot8003B274 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B274_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003B274_1 : UnknownGenObject8003B274_0 {
 inline ~UnknownGenObject8003B274_1(){unknown00=lbl_80473480;}
};
struct UnknownGenObject8003B274 : UnknownGenObject8003B274_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8003B274(){unknown00=lbl_80470314;}
};
extern "C" {
void *fn_8003B238(){
 if(!lbl_805620A0 || !(reinterpret_cast<unsigned int *>(lbl_805620A0)[0x24/4]&4)) fn_8003B31C();
 return lbl_805620A0;
}
void *fn_8003B274(){
 UnknownGenObject8003B274 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80473480;
 object.unknown00=lbl_80470314;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003B31C(){
 fn_80066188((int)fn_8003B344);
}
void fn_8003B344(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620A0,(int)fn_800260C0,(int)fn_8003B3B4,(int)fn_80026160,(int)lbl_804687A8,36,(int)fn_8003B274,(int)fn_8003B3BC,0,0);
}
void *fn_8003B3B4(){return lbl_805615EC;}
}
#pragma pop
