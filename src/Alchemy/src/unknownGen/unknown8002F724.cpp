#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_8002F8F8();
void *fn_8005068C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_80465CC8[];
extern char lbl_80472550[];
extern void *lbl_80561B18;
void *fn_8002F77C();
void *fn_8002F7B8();
void fn_8002F840();
void fn_8002F868();
void *fn_8002F8D8();
}
struct UnknownGenRoot8002F7B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002F7B8(){fn_8006665C(this);}
};
struct UnknownGenObject8002F7B8 : UnknownGenRoot8002F7B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8002F7B8(){unknown00=lbl_80472550;}
};
extern "C" {
void *fn_8002F724(){return fn_8005068C();}
void *fn_8002F744(void *object){
 fn_8002F840();
 return fn_8006546C(lbl_80561B18,object);
}
void *fn_8002F77C(){
 if(!lbl_80561B18 || !(reinterpret_cast<unsigned int *>(lbl_80561B18)[0x24/4]&4)) fn_8002F840();
 return lbl_80561B18;
}
void *fn_8002F7B8(){
 UnknownGenObject8002F7B8 object;
 object.unknown00=lbl_80472550;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002F840(){
 fn_80066188((int)fn_8002F868);
}
void fn_8002F868(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B18,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002F8D8,(int)lbl_80465CC8,12,(int)fn_8002F7B8,(int)fn_8002F8F8,0,0);
}
void *fn_8002F8D8(){return fn_8002F77C();}
}
#pragma pop
