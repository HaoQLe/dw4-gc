#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igGenericNodeStatistics_fieldInit();
void igObject_register();
extern char lbl_8049BFA8[];
extern char lbl_8049BFB4[];
extern char lbl_804AA954[];
extern void *lbl_80563B2C;
void *igGenericNodeStatistics_getMeta();
void *igGenericNodeStatistics_vtableRead();
void fn_80131DDC();
void igGenericNodeStatistics_register();
void *igGenericNodeStatistics_getMetaCall();
}
struct UnknownGenRoot80131D14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131D14(){fn_8006665C(this);}
};
struct UnknownGenObject80131D14 : UnknownGenRoot80131D14 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131D14(){unknown00=lbl_804AA954;}
};
extern "C" {
void *fn_80131CA0(void *object){
 fn_80131DDC();
 return fn_8006546C(lbl_80563B2C,object);
}
void *igGenericNodeStatistics_getMeta(){
 if(!lbl_80563B2C || !(reinterpret_cast<unsigned int *>(lbl_80563B2C)[0x24/4]&4)) fn_80131DDC();
 return lbl_80563B2C;
}
void *igGenericNodeStatistics_vtableRead(){
 UnknownGenObject80131D14 object;
 object.unknown00=lbl_804AA954;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131DDC(){
 fn_80066188((int)igGenericNodeStatistics_register);
}
void igGenericNodeStatistics_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B2C,(int)igObject_register,(int)fn_800237D0,(int)igGenericNodeStatistics_getMetaCall,(int)lbl_8049BFB4,24,(int)igGenericNodeStatistics_vtableRead,(int)igGenericNodeStatistics_fieldInit,0,(int)lbl_8049BFA8);
}
void *igGenericNodeStatistics_getMetaCall(){return igGenericNodeStatistics_getMeta();}
}
#pragma pop
