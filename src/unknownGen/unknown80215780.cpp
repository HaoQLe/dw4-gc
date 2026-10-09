#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80564B74;
extern void *lbl_80564B98;
extern void *lbl_80564BD4;
extern void *lbl_80564C88;
extern void *lbl_80564D20;
extern void *lbl_80564D8C;
}
class UnknownGenV802157C0_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
};
extern "C" {
void igAttrSet_virtual98(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+36)=value;}
void *igPlanarShadowProcessor_virtual58(){return lbl_80564B74;}
void *igNodeRefResolver_virtual58(){return lbl_80564B98;}
int igNode_virtual64(){return 0;}
void *igMultiTextureShader_virtual58(){return lbl_80564BD4;}
void *igMultiResolutionMeshCore_virtual58(){return lbl_80564C88;}
void *igMorphInstance_virtual58(){return lbl_80564D20;}
int igGeometry_virtual90(){return 1;}
void igMorphBase_virtual60(int p0){
 reinterpret_cast<UnknownGenV802157C0_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))->s68();
}
void *igLod_virtual58(){return lbl_80564D8C;}
int igLod_virtual90(){return 1;}
}
#pragma pop
