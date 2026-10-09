#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80023FDC();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igNamedObject_register();
void igNode_fieldInit();
void igNonRefCountedObjectList_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804ADD3C[];
extern char lbl_804ADD50[];
extern char lbl_804ADD68[];
extern char lbl_804ADD78[];
extern char lbl_804ADE50[];
extern char lbl_804B4038[];
extern char lbl_804B82A0[];
extern char lbl_804B8304[];
extern char lbl_804B8368[];
extern char lbl_804B83CC[];
extern char lbl_804B8430[];
extern char lbl_804B8494[];
extern char lbl_804B84F8[];
extern char lbl_80560394[8];
extern char lbl_8056039C[8];
extern char lbl_805603A4[8];
extern char lbl_805603AC[8];
extern char lbl_805603BC[7];
extern void *lbl_805621F4;
extern void *lbl_80564BB0;
extern void *lbl_80564BB4;
extern void *lbl_80564BB8;
extern void *lbl_80564BBC;
extern void *lbl_80564BC0;
void *igIntersectPathList_getMeta();
void *igIntersectPathList_vtableRead();
void fn_801B6EC0();
void igIntersectPathList_register();
void *igIntersectPathList_getMetaCall();
void *igNonRefCountedNodeList_getMeta();
void *igNonRefCountedNodeList_vtableRead();
void fn_801B7094();
void igNonRefCountedNodeList_register();
void *igNonRefCountedNodeList_getMetaCall();
void *igNodeListList_getMeta();
void *igNodeListList_vtableRead();
void fn_801B7268();
void igNodeListList_register();
void *igNodeListList_getMetaCall();
void *igNodeList_getMeta();
void *igNodeList_vtableRead();
void fn_801B743C();
void igNodeList_register();
void *igNodeList_getMetaCall();
void *igNode_getMeta();
void *igNode_vtableRead();
void fn_801B7680();
void igNode_register();
void *igNode_getMetaCall();
}
struct UnknownGenObject801B6E50_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B7024_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B71F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B73CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B7568 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B7568(){fn_8006665C(this);}
};
struct UnknownGenObject801B7568_0 : UnknownGenRoot801B7568 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B7568_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B7568 : UnknownGenObject801B7568_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801B7568(){unknown00=lbl_804B4038;}
};
extern "C" {
void *igIntersectPathList_getMeta(){
 if(!lbl_80564BB0 || !(reinterpret_cast<unsigned int *>(lbl_80564BB0)[0x24/4]&4)) fn_801B6EC0();
 return lbl_80564BB0;
}
void *igIntersectPathList_vtableRead(){
 UnknownGenObject801B6E50_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B84F8;
 object.unknown00=lbl_804B8494;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B6EC0(){
 fn_80066188((int)igIntersectPathList_register);
}
void igIntersectPathList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BB0,(int)igObjectList_register,(int)fn_80024180,(int)igIntersectPathList_getMetaCall,(int)lbl_804ADD3C,20,(int)igIntersectPathList_vtableRead,0,0,(int)lbl_80560394);
}
void *igIntersectPathList_getMetaCall(){return igIntersectPathList_getMeta();}
void *fn_801B6F74(void *object){
 fn_801B7094();
 return fn_8006546C(lbl_80564BB4,object);
}
void *fn_801B6FAC(){
 if(!lbl_80564BB4) lbl_80564BB4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BB4;
}
void *igNonRefCountedNodeList_getMeta(){
 if(!lbl_80564BB4 || !(reinterpret_cast<unsigned int *>(lbl_80564BB4)[0x24/4]&4)) fn_801B7094();
 return lbl_80564BB4;
}
void *igNonRefCountedNodeList_vtableRead(){
 UnknownGenObject801B7024_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B8430;
 object.unknown00=lbl_804B83CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7094(){
 fn_80066188((int)igNonRefCountedNodeList_register);
}
void igNonRefCountedNodeList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BB4,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedNodeList_getMetaCall,(int)lbl_804ADD50,20,(int)igNonRefCountedNodeList_vtableRead,0,0,(int)lbl_8056039C);
}
void *igNonRefCountedNodeList_getMetaCall(){return igNonRefCountedNodeList_getMeta();}
void *fn_801B7148(void *object){
 fn_801B7268();
 return fn_8006546C(lbl_80564BB8,object);
}
void *fn_801B7180(){
 if(!lbl_80564BB8) lbl_80564BB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BB8;
}
void *igNodeListList_getMeta(){
 if(!lbl_80564BB8 || !(reinterpret_cast<unsigned int *>(lbl_80564BB8)[0x24/4]&4)) fn_801B7268();
 return lbl_80564BB8;
}
void *igNodeListList_vtableRead(){
 UnknownGenObject801B71F8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B84F8;
 object.unknown00=lbl_804B8368;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7268(){
 fn_80066188((int)igNodeListList_register);
}
void igNodeListList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BB8,(int)igObjectList_register,(int)fn_80024180,(int)igNodeListList_getMetaCall,(int)lbl_804ADD68,20,(int)igNodeListList_vtableRead,0,0,(int)lbl_805603A4);
}
void *igNodeListList_getMetaCall(){return igNodeListList_getMeta();}
void *fn_801B731C(void *object){
 fn_801B743C();
 return fn_8006546C(lbl_80564BBC,object);
}
void *fn_801B7354(){
 if(!lbl_80564BBC) lbl_80564BBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BBC;
}
void *igNodeList_getMeta(){
 if(!lbl_80564BBC || !(reinterpret_cast<unsigned int *>(lbl_80564BBC)[0x24/4]&4)) fn_801B743C();
 return lbl_80564BBC;
}
void *igNodeList_vtableRead(){
 UnknownGenObject801B73CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B8304;
 object.unknown00=lbl_804B82A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B743C(){
 fn_80066188((int)igNodeList_register);
}
void igNodeList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BBC,(int)igObjectList_register,(int)fn_80024180,(int)igNodeList_getMetaCall,(int)lbl_804ADD78,20,(int)igNodeList_vtableRead,0,0,(int)lbl_805603AC);
}
void *igNodeList_getMetaCall(){return igNodeList_getMeta();}
void *fn_801B74F0(){
 if(!lbl_80564BC0) lbl_80564BC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BC0;
}
void *igNode_getMeta(){
 if(!lbl_80564BC0 || !(reinterpret_cast<unsigned int *>(lbl_80564BC0)[0x24/4]&4)) fn_801B7680();
 return lbl_80564BC0;
}
void *igNode_vtableRead(){
 UnknownGenObject801B7568 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7680(){
 fn_80066188((int)igNode_register);
}
void igNode_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BC0,(int)igNamedObject_register,(int)fn_80023CF4,(int)igNode_getMetaCall,(int)lbl_805603BC,28,(int)igNode_vtableRead,(int)igNode_fieldInit,0,(int)lbl_804ADE50);
}
void *igNode_getMetaCall(){return igNode_getMeta();}
}
#pragma pop
