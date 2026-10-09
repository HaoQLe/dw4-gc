#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80047080();
void *fn_800470A0();
void *fn_8006546C(void *,void *);
void fn_80065D94(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igObject_register();
extern char lbl_80466C34[];
extern char lbl_804759D8[];
extern void *lbl_80561C2C;
void *igErrorHandler_getMeta();
void *igErrorHandler_vtableRead();
void fn_80031250();
void igErrorHandler_register();
void *igErrorHandler_getMetaCall();
void fn_80031310();
void *fn_80031338();
void *fn_80031358();
}
struct UnknownGenObject80031210_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_8003119C(void *object){
 fn_80031250();
 return fn_8006546C(lbl_80561C2C,object);
}
void *igErrorHandler_getMeta(){
 if(!lbl_80561C2C || !(reinterpret_cast<unsigned int *>(lbl_80561C2C)[0x24/4]&4)) fn_80031250();
 return lbl_80561C2C;
}
void *igErrorHandler_vtableRead(){
 UnknownGenObject80031210_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804759D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80031250(){
 fn_80066188((int)igErrorHandler_register);
}
void igErrorHandler_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C2C,(int)igObject_register,(int)fn_800237D0,(int)igErrorHandler_getMetaCall,(int)lbl_80466C34,8,(int)igErrorHandler_vtableRead,(int)fn_80031310,(int)fn_80031338,0);
}
void *igErrorHandler_getMetaCall(){return igErrorHandler_getMeta();}
void fn_80031310(){
 fn_80065D94((int)fn_80031358);
}
void *fn_80031338(){return fn_80047080();}
void *fn_80031358(){return fn_800470A0();}
}
#pragma pop
