#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065BDC(void *,void *);
void fn_801DB310(void *,void *);
void fn_801DFB08(int,int);
void fn_801E005C(int);
void fn_801E0148(int,int);
void *fn_801E07B8(int);
void *fn_801E07C8(int);
void *fn_801E07D8(int);
void *fn_801E07E8(int);
void *fn_801E07F8(int);
void *fn_801E0808(int);
void *fn_801E0818(int);
void *fn_801E0828(int,int);
void fn_801E0880(int,int);
void fn_801E0980(int,int);
void fn_801E0ABC(int,int);
int fn_801E0B34();
int fn_801E0B3C();
void fn_8020B1A4(void *,void *,void *);
void igCommonTraversal_virtual28();
extern void *igTransform_meta;
extern void *igShader_meta;
extern void *igSegment_meta;
extern void *igProjectiveShadowShader_meta;
extern void *igPlanarShadowShader_meta;
extern void *igMultiTextureShader_meta;
extern void *igModelViewMatrixBoneSelect_meta;
extern void *igJoint_meta;
extern void *igGeometry_meta;
extern void *igEnvironmentMapShader2_meta;
extern void *igDOFShader_meta;
extern void *igCompiledGraph_meta;
extern void *igCartoonShader_meta;
extern void *igBumpMapShader_meta;
extern void *igBlendMatrixSelect_meta;
extern void *igActor_meta;
}
class UnknownGenV801DF5A8_0 {
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
 virtual void s6C();
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
};
extern "C" {
void fn_801DF5A8(int p0){
 igCommonTraversal_virtual28();
 reinterpret_cast<UnknownGenV801DF5A8_0 *>((void *)p0)->s7C();
}
void fn_801DF5E8(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 void *value14;
 void *value15;
 fn_801DB310((void *)p0,(void *)p1);
 value0=fn_80065BDC((void *)p1,igProjectiveShadowShader_meta);
 if((unsigned char)(int)value0){
  fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E07B8);
 } else {
  value1=fn_80065BDC((void *)p1,igDOFShader_meta);
  if((unsigned char)(int)value1){
   fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E07C8);
   return;
  } else {
   value2=fn_80065BDC((void *)p1,igEnvironmentMapShader2_meta);
   if((unsigned char)(int)value2){
    fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0828);
   } else {
    value3=fn_80065BDC((void *)p1,igMultiTextureShader_meta);
    if((unsigned char)(int)value3){
     fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E07D8);
     return;
    } else {
     value4=fn_80065BDC((void *)p1,igCartoonShader_meta);
     if((unsigned char)(int)value4){
      fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E07E8);
     } else {
      value5=fn_80065BDC((void *)p1,igBumpMapShader_meta);
      if((unsigned char)(int)value5){
       fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E07F8);
       return;
      } else {
       value6=fn_80065BDC((void *)p1,igPlanarShadowShader_meta);
       if((unsigned char)(int)value6){
        fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0808);
       } else {
        value7=fn_80065BDC((void *)p1,igShader_meta);
        if((unsigned char)(int)value7){
         fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0818);
         return;
        } else {
         value8=fn_80065BDC((void *)p1,igGeometry_meta);
         if((unsigned char)(int)value8){
          fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0148);
         } else {
          value9=fn_80065BDC((void *)p1,igJoint_meta);
          if((unsigned char)(int)value9){
           fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E005C);
           return;
          } else {
           value10=fn_80065BDC((void *)p1,igTransform_meta);
           if((unsigned char)(int)value10){
            fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801DFB08);
           } else {
            value11=fn_80065BDC((void *)p1,igCompiledGraph_meta);
            if((unsigned char)(int)value11){
             fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0ABC);
             return;
            } else {
             value12=fn_80065BDC((void *)p1,igModelViewMatrixBoneSelect_meta);
             if((unsigned char)(int)value12){
              fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0880);
             } else {
              value13=fn_80065BDC((void *)p1,igBlendMatrixSelect_meta);
              if((unsigned char)(int)value13){
               fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0980);
               return;
              } else {
               value14=fn_80065BDC((void *)p1,igActor_meta);
               if((unsigned char)(int)value14){
                fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0B34);
               } else {
                value15=fn_80065BDC((void *)p1,igSegment_meta);
                if((unsigned char)(int)value15){
                 fn_8020B1A4((void *)p0,(void *)p1,(void *)fn_801E0B3C);
                 return;
                } else {
                 return;
                }
               }
               return;
              }
             }
             return;
            }
           }
           return;
          }
         }
         return;
        }
       }
       return;
      }
     }
     return;
    }
   }
   return;
  }
 }
}
}
#pragma pop
