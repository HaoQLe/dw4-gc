#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_8002AB94();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_804649A8[];
extern char lbl_804649B4[];
extern char lbl_8047617C[];
extern void *lbl_80561808;
void *fn_8002A998();
void *fn_8002A9D4();
void fn_8002AAD4();
void fn_8002AAFC();
void *fn_8002AB74();
}
struct UnknownGenRoot8002A9D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A9D4(){fn_8006665C(this);}
};
struct UnknownGenObject8002A9D4 : UnknownGenRoot8002A9D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8002A9D4(){unknown00=lbl_8047617C;}
};
extern "C" {
void *fn_8002A960(void *object){
 fn_8002AAD4();
 return fn_8006546C(lbl_80561808,object);
}
void *fn_8002A998(){
 if(!lbl_80561808 || !(reinterpret_cast<unsigned int *>(lbl_80561808)[0x24/4]&4)) fn_8002AAD4();
 return lbl_80561808;
}
void *fn_8002A9D4(){
 UnknownGenObject8002A9D4 object;
 object.unknown00=lbl_8047617C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002AAD4(){
 fn_80066188((int)fn_8002AAFC);
}
void fn_8002AAFC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561808,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002AB74,(int)lbl_804649B4,20,(int)fn_8002A9D4,(int)fn_8002AB94,0,(int)lbl_804649A8);
}
void *fn_8002AB74(){return fn_8002A998();}
}
#pragma pop
