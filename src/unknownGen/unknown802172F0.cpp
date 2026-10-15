#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024D1C();
void *fn_800284F4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_802176F4();
void igDataList_register();
void igNamedObject_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igNonRefCountedObjectStack_vtable[];
extern char lbl_80480B58[];
extern char igObjectRefResolver_vtable[];
extern char lbl_804BA470[];
extern char igObjectRefResolver_className[];
extern char igNonRefCountedObjectStack_className[];
extern char lbl_80560BC0[8];
extern char lbl_80560BC8[8];
extern char lbl_80560BD0[8];
extern char lbl_80560BD8[8];
extern void *igObject_meta;
extern void *igObjectRefResolver_meta;
extern void *igNonRefCountedObjectStack_meta;
void *igObjectRefResolver_getMeta();
void *igObjectRefResolver_vtableRead();
void igObjectRefResolver_registerNow();
void igObjectRefResolver_register();
void *igObjectRefResolver_getMetaCall();
void igObjectRefResolver_fieldInit();
void *igNonRefCountedObjectStack_getMeta();
void *igNonRefCountedObjectStack_vtableRead();
void igNonRefCountedObjectStack_registerNow();
void igNonRefCountedObjectStack_register();
void *igNonRefCountedObjectStack_getMetaCall();
}
struct UnknownGenRoot8021732C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021732C(){fn_8006665C(this);}
};
struct UnknownGenObject8021732C_0 : UnknownGenRoot8021732C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021732C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8021732C : UnknownGenObject8021732C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8021732C(){unknown00=igObjectRefResolver_vtable;}
};
struct UnknownGenObject802175E4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igObjectRefResolver_getMeta(){
 if(!igObjectRefResolver_meta || !(reinterpret_cast<unsigned int *>(igObjectRefResolver_meta)[0x24/4]&4)) igObjectRefResolver_registerNow();
 return igObjectRefResolver_meta;
}
void *igObjectRefResolver_vtableRead(){
 UnknownGenObject8021732C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igObjectRefResolver_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectRefResolver_registerNow(){
 meta_registerNow((int)igObjectRefResolver_register);
}
void igObjectRefResolver_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igObjectRefResolver_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igObjectRefResolver_getMetaCall,(int)igObjectRefResolver_className,20,(int)igObjectRefResolver_vtableRead,(int)igObjectRefResolver_fieldInit,0,(int)lbl_804BA470);
}
void *igObjectRefResolver_getMetaCall(){return igObjectRefResolver_getMeta();}
void igObjectRefResolver_fieldInit(){
 void *value0=igObjectRefResolver_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560BC0,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800284F4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=igObject_meta;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 fn_800659C0(value0,lbl_80560BC8,lbl_80560BD0,lbl_80560BD8,value1);
}
void *igNonRefCountedObjectStack_getMeta(){
 if(!igNonRefCountedObjectStack_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedObjectStack_meta)[0x24/4]&4)) igNonRefCountedObjectStack_registerNow();
 return igNonRefCountedObjectStack_meta;
}
void *igNonRefCountedObjectStack_vtableRead(){
 UnknownGenObject802175E4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80480B58;
 object.unknown00=igNonRefCountedObjectStack_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedObjectStack_registerNow(){
 meta_registerNow((int)igNonRefCountedObjectStack_register);
}
void igNonRefCountedObjectStack_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igNonRefCountedObjectStack_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igNonRefCountedObjectStack_getMetaCall,(int)igNonRefCountedObjectStack_className,20,(int)igNonRefCountedObjectStack_vtableRead,(int)fn_802176F4,0,0);
}
void *igNonRefCountedObjectStack_getMetaCall(){return igNonRefCountedObjectStack_getMeta();}
}
#pragma pop
