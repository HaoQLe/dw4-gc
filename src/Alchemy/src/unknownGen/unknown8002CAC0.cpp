#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igMemoryDictionary_fieldInit();
void igObject_register();
extern char lbl_8046513C[];
extern char lbl_80471FCC[];
extern char lbl_8055D32C[8];
extern void *lbl_80561934;
void *igMemoryDictionary_getMeta();
void *igMemoryDictionary_vtableRead();
void fn_8002CBBC();
void igMemoryDictionary_register();
void *igMemoryDictionary_getMetaCall();
}
struct UnknownGenRoot8002CB34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002CB34(){fn_8006665C(this);}
};
struct UnknownGenObject8002CB34 : UnknownGenRoot8002CB34 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8002CB34(){unknown00=lbl_80471FCC;}
};
extern "C" {
void *fn_8002CAC0(void *object){
 fn_8002CBBC();
 return fn_8006546C(lbl_80561934,object);
}
void *igMemoryDictionary_getMeta(){
 if(!lbl_80561934 || !(reinterpret_cast<unsigned int *>(lbl_80561934)[0x24/4]&4)) fn_8002CBBC();
 return lbl_80561934;
}
void *igMemoryDictionary_vtableRead(){
 UnknownGenObject8002CB34 object;
 object.unknown00=lbl_80471FCC;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002CBBC(){
 fn_80066188((int)igMemoryDictionary_register);
}
void igMemoryDictionary_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561934,(int)igObject_register,(int)fn_800237D0,(int)igMemoryDictionary_getMetaCall,(int)lbl_8046513C,24,(int)igMemoryDictionary_vtableRead,(int)igMemoryDictionary_fieldInit,0,(int)lbl_8055D32C);
}
void *igMemoryDictionary_getMetaCall(){return igMemoryDictionary_getMeta();}
}
#pragma pop
