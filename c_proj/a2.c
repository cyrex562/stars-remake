
ulong __stdcall16far
FRAMEWNDPROC(undefined *param_1,undefined *param_2,VA_LIST16 param_3_00,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  HDC16 HVar3;
  undefined *puVar4;
  bool16 bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  int16 *piVar12;
  int16 *piVar13;
  uint16 *__return_storage_ptr__;
  HPALETTE16 hpal;
  uint16 *puVar14;
  int in_DX;
  undefined2 unaff_BP;
  VA_LIST16 unaff_SI;
  HRGN16 unaff_DI;
  TEXTMETRIC16 *unaff_SS;
  ulong uVar15;
  dword dVar16;
  HWND16 in_stack_00000000;
  HMENU16 in_stack_00000002;
  undefined2 uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  HMENU16 in_stack_0000ffda;
  undefined *in_stack_0000ffdc;
  WPARAM16 in_stack_0000ffde;
  int in_stack_0000ffe0;
  int in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  HWND16 in_stack_0000ffe6;
  HMENU16 in_stack_0000ffe8;
  HINSTANCE16 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  undefined2 in_stack_0000ffee;
  HICON16 in_stack_0000fff0;
  undefined2 in_stack_0000fff2;
  undefined2 in_stack_0000fff4;
  undefined *puVar22;
  undefined2 in_stack_0000fff6;
  undefined *puVar23;
  byte in_stack_0000fff8;
  undefined in_stack_0000fff9;
  RECT16 *in_stack_0000fffa;
  int in_stack_0000fffc;

  puVar6 = PTR_DAT_10a8_0000_10a8_00d0;
  if ((uint)param_4 == 0x37) {
    puVar6 = PTR_DAT_10a8_0000_10a8_0248;
    if ((PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0xffff) &&
       (puVar6 = PTR_DAT_10a8_0000_10a8_024a, PTR_DAT_10a8_0000_10a8_00d0 == (undefined *)0x0)) {
      puVar6 = PTR_DAT_10a8_0000_10a8_0246;
    }
    return ZEXT24(puVar6);
  }
  bVar2 = (byte)param_4;
  uVar19 = (undefined)(param_4 >> 0x10);
  uVar20 = (undefined)(param_4 >> 0x18);
  uVar18 = (undefined)(param_4 >> 8);
  if ((uint)param_4 < 0x38) {
    if ((uint)param_4 == 0x24) {
      *(undefined4 *)(param_1 + 0xc) = 0x17c0208;
      return 0;
    }
    if ((uint)param_4 < 0x25) {
      if (bVar2 == 0x1a) {
        FUN_1008_0280(unaff_SI,unaff_DI,in_stack_0000ffda);
        return 0;
      }
      if (bVar2 < 0x1b) {
        switch((uint)param_4 & 0xff00 | (uint)(byte)(bVar2 - 1)) {
        case 0:
          piVar12 = (int16 *)GETDC((HWND16)param_4._2_2_);
          FUN_1000_075a((HDC16)piVar12);
          puVar6 = in_stack_0000ffdc;
          GETTEXTMETRICS((HDC16)&stack0xffdc,unaff_SS);
          PTR_DAT_10a8_0000_10a8_87ec = puVar6;
          PTR_DAT_10a8_0000_10a8_5762 = (undefined *)((int)(PTR_DAT_10a8_0000_10a8_5794 + 0xc) * 2);
          puVar6 = PTR_DAT_10a8_0000_10a8_87ec;
          SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)piVar12,(HRGN16)unaff_SI,
                       unaff_DI,(int16)CONCAT214(in_stack_0000ffe8,
                                                 CONCAT212(in_stack_0000ffe6,
                                                           CONCAT210(in_stack_0000ffe4,
                                                                     CONCAT28(in_stack_0000ffe2,
                                                                              CONCAT26(
                                                  in_stack_0000ffe0,
                                                  CONCAT24(in_stack_0000ffde,
                                                           CONCAT22(PTR_DAT_10a8_0000_10a8_87ec,
                                                                    in_stack_0000ffda))))))));
          dVar16 = GETTEXTEXTENT(6,s_Normal_10a8_02f0,
                                 (int16)CONCAT214(in_stack_0000ffe2,
                                                  CONCAT212(in_stack_0000ffe0,
                                                            CONCAT210(in_stack_0000ffde,
                                                                      CONCAT28(puVar6,CONCAT26(
                                                  in_stack_0000ffda,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,piVar12)))))))
                                );
          PTR_DAT_10a8_0000_10a8_8858 = (undefined *)((int)dVar16 + 0xc);
          RELEASEDC(piVar12,(HWND16)param_4._2_2_,(HDC16)unaff_SI);
          FUN_1000_0940();
          FUN_1020_2dd0((uint)(PTR_DAT_10a8_0000_10a8_573a == (undefined *)&DAT_10a8_0002));
          return 0;
        case 1:
          if (PTR_DAT_10a8_0000_10a8_00d0 != (undefined *)0x0) {
            KILLTIMER((HWND16)PTR_DAT_10a8_0000_10a8_00d0,
                      (uint16)(ZEXT1416(CONCAT212(in_stack_0000ffe2,
                                                  CONCAT210(in_stack_0000ffe0,
                                                            CONCAT28(in_stack_0000ffde,
                                                                     CONCAT26(in_stack_0000ffdc,
                                                                              CONCAT24(
                                                  in_stack_0000ffda,CONCAT22(unaff_DI,unaff_SI))))))
                                       ) << 0x10));
          }
          FUN_1008_6c82();
          PTR_DAT_10a8_0000_10a8_00d0 = (undefined *)0x0;
          if ((DAT_10a8_0a46 & 8) != 0) {
            FUN_1040_3f78(2,-1,1,0);
          }
          FUN_1040_190c();
          goto LAB_1008_1271;
        case 4:
          if ((param_3_00 == (VA_LIST16)&DAT_10a8_0002) || (param_3_00 == (VA_LIST16)0x0)) {
            PTR_DAT_10a8_0000_10a8_5766 = param_1;
            PTR_DAT_10a8_0000_10a8_5768 = param_2;
            goto LAB_1008_1298;
          }
          break;
        case 5:
          return 0;
        case 0xe:
          bVar5 = ISICONIC((HWND16)param_4._2_2_);
          if (bVar5 == 0) {
            HVar3 = BEGINPAINT((HWND16)&stack0xffda,
                               (PAINTSTRUCT16 *)
                               (param_4 & 0xff000000 | (ulong)CONCAT12(uVar19,unaff_SS)));
            piVar12 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0016,HVar3,(HRGN16)unaff_SI,
                                   unaff_DI,(int16)CONCAT214(in_stack_0000ffe8,
                                                             CONCAT212(in_stack_0000ffe6,
                                                                       CONCAT210(in_stack_0000ffe4,
                                                                                 CONCAT28(
                                                  in_stack_0000ffe2,
                                                  CONCAT26(in_stack_0000ffe0,
                                                           CONCAT24(in_stack_0000ffde,
                                                                    CONCAT22(in_stack_0000ffdc,
                                                                             in_stack_0000ffda))))))
                                                  ));
            uVar18 = (undefined)(HVar3 >> 8);
            if ((((int)PTR_DAT_10a8_0000_10a8_573a < 1) ||
                (SBORROW2((int)PTR_DAT_10a8_0000_10a8_573a,1))) ||
               (1 < (int)(PTR_DAT_10a8_0000_10a8_573a + -1))) {
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111(uVar18,CONCAT110((
                                                  char)HVar3,
                                                  CONCAT19((char)((uint)(PTR_DAT_10a8_0000_10a8_576a
                                                                        + 5) >> 8),
                                                           CONCAT18((char)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 5),
                                                  (qword)CONCAT24(2,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768,0xf0)))))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,(unkuint10)
                                                        CONCAT26(PTR_DAT_10a8_0000_10a8_576c + 5,
                                                                 CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576a + 2,0x200f0)))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,(unkuint10)
                                                        CONCAT26(PTR_DAT_10a8_0000_10a8_576e + 5,
                                                                 CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576a + 2,0x200f0)))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0014,HVar3,(HRGN16)unaff_SI,unaff_DI,
                           (int16)CONCAT214(in_stack_0000ffe8,
                                            CONCAT212(in_stack_0000ffe6,
                                                      CONCAT210(in_stack_0000ffe4,
                                                                CONCAT28(in_stack_0000ffe2,
                                                                         CONCAT26(in_stack_0000ffe0,
                                                                                  CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                           ));
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,CONCAT19((char)((uint)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1) >> 8),
                                                  CONCAT18((char)(PTR_DAT_10a8_0000_10a8_576a + 1),
                                                           (qword)CONCAT24(1,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_576c + 2,0xf0)))))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,(unkuint10)
                                                        CONCAT26(PTR_DAT_10a8_0000_10a8_576c + 1,
                                                                 CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1,0x100f0)))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,CONCAT19((char)((uint)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1) >> 8),
                                                  CONCAT18((char)(PTR_DAT_10a8_0000_10a8_576a + 1),
                                                           CONCAT26(PTR_DAT_10a8_0000_10a8_576c + 6,
                                                                    CONCAT24(1,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_576e +
                                                  (-4 - (int)PTR_DAT_10a8_0000_10a8_576c),0xf0))))))
                                                  ))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,(unkuint10)
                                                        CONCAT26(PTR_DAT_10a8_0000_10a8_576e + 1,
                                                                 CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1,0x100f0)))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              uVar18 = (undefined)HVar3;
              uVar19 = (undefined)(HVar3 >> 8);
              puVar6 = PTR_DAT_10a8_0000_10a8_576a + 1;
              puVar4 = PTR_DAT_10a8_0000_10a8_576e + 6;
              puVar11 = (undefined *)0x1;
              puVar10 = PTR_DAT_10a8_0000_10a8_5768 + (-6 - (int)PTR_DAT_10a8_0000_10a8_576e);
            }
            else {
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111(uVar18,CONCAT110((
                                                  char)HVar3,
                                                  CONCAT19((char)((uint)(PTR_DAT_10a8_0000_10a8_576a
                                                                        + 5) >> 8),
                                                           CONCAT18((char)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 5),
                                                  (qword)CONCAT24(2,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_576e + 2,0xf0)))))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,(unkuint10)
                                                        CONCAT26(PTR_DAT_10a8_0000_10a8_576c + 5,
                                                                 CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576a + 2,0x200f0)))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,CONCAT19((char)((uint)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 5) >> 8),
                                                  CONCAT18((char)(PTR_DAT_10a8_0000_10a8_576a + 5),
                                                           CONCAT26(PTR_DAT_10a8_0000_10a8_576e + 5,
                                                                    CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_5766 +
                                                  (-5 - (int)PTR_DAT_10a8_0000_10a8_576a),0x200f0)))
                                                  ))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,CONCAT19((char)((uint)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 5) >> 8),
                                                  CONCAT18((char)(PTR_DAT_10a8_0000_10a8_576a + 5),
                                                           CONCAT26(PTR_DAT_10a8_0000_10a8_576e + 6,
                                                                    CONCAT24(2,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768 +
                                                  (-5 - (int)PTR_DAT_10a8_0000_10a8_576e),0xf0))))))
                                                  ))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0014,HVar3,(HRGN16)unaff_SI,unaff_DI,
                           (int16)CONCAT214(in_stack_0000ffe8,
                                            CONCAT212(in_stack_0000ffe6,
                                                      CONCAT210(in_stack_0000ffe4,
                                                                CONCAT28(in_stack_0000ffe2,
                                                                         CONCAT26(in_stack_0000ffe0,
                                                                                  CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                           ));
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,CONCAT19((char)((uint)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1) >> 8),
                                                  CONCAT18((char)(PTR_DAT_10a8_0000_10a8_576a + 1),
                                                           (qword)CONCAT24(1,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_576c + 2,0xf0)))))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,(unkuint10)
                                                        CONCAT26(PTR_DAT_10a8_0000_10a8_576c + 1,
                                                                 CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1,0x100f0)))))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111((char)(HVar3 >> 8),
                                                                                 CONCAT110((char)
                                                  HVar3,CONCAT19((char)((uint)(
                                                  PTR_DAT_10a8_0000_10a8_576a + 1) >> 8),
                                                  CONCAT18((char)(PTR_DAT_10a8_0000_10a8_576a + 1),
                                                           CONCAT26(PTR_DAT_10a8_0000_10a8_576c + 6,
                                                                    CONCAT24(1,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768 +
                                                  (-6 - (int)PTR_DAT_10a8_0000_10a8_576c),0xf0))))))
                                                  ))),
                     (int16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(in_stack_0000ffe4,
                                                          CONCAT28(in_stack_0000ffe2,
                                                                   CONCAT26(in_stack_0000ffe0,
                                                                            CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                     ),
                     (int16)CONCAT115(in_stack_0000fff9,
                                      CONCAT114(in_stack_0000fff8,
                                                CONCAT212(in_stack_0000fff6,
                                                          CONCAT210(in_stack_0000fff4,
                                                                    CONCAT28(in_stack_0000fff2,
                                                                             CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                     (int16)CONCAT106(CONCAT28(param_3_00,
                                               CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                      CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
              uVar18 = (undefined)HVar3;
              uVar19 = (undefined)(HVar3 >> 8);
              puVar6 = PTR_DAT_10a8_0000_10a8_576a + 6;
              puVar4 = PTR_DAT_10a8_0000_10a8_576e + 1;
              puVar11 = PTR_DAT_10a8_0000_10a8_5766 + (-6 - (int)PTR_DAT_10a8_0000_10a8_576a);
              puVar10 = (undefined *)0x1;
            }
            PATBLT(0x21,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111(uVar19,CONCAT110(
                                                  uVar18,CONCAT19((char)((uint)puVar6 >> 8),
                                                                  CONCAT18((char)puVar6,
                                                                           CONCAT26(puVar4,CONCAT24(
                                                  puVar11,CONCAT22(puVar10,0xf0))))))))),
                   (int16)CONCAT214(in_stack_0000ffe8,
                                    CONCAT212(in_stack_0000ffe6,
                                              CONCAT210(in_stack_0000ffe4,
                                                        CONCAT28(in_stack_0000ffe2,
                                                                 CONCAT26(in_stack_0000ffe0,
                                                                          CONCAT24(in_stack_0000ffde
                                                                                   ,CONCAT22(
                                                  in_stack_0000ffdc,in_stack_0000ffda))))))),
                   (int16)CONCAT115(in_stack_0000fff9,
                                    CONCAT114(in_stack_0000fff8,
                                              CONCAT212(in_stack_0000fff6,
                                                        CONCAT210(in_stack_0000fff4,
                                                                  CONCAT28(in_stack_0000fff2,
                                                                           CONCAT26(
                                                  in_stack_0000fff0,
                                                  CONCAT24(in_stack_0000ffee,
                                                           CONCAT22(in_stack_0000ffec,
                                                                    in_stack_0000ffea)))))))),
                   (int16)CONCAT106(CONCAT28(param_3_00,
                                             CONCAT26(param_2,CONCAT24(param_1,CONCAT22(
                                                  in_stack_00000002,in_stack_00000000)))),
                                    CONCAT24(unaff_BP,CONCAT22(HVar3,piVar12))),param_4);
            SELECTOBJECT(piVar12,HVar3,(HRGN16)unaff_SI,unaff_DI,
                         (int16)CONCAT214(in_stack_0000ffe8,
                                          CONCAT212(in_stack_0000ffe6,
                                                    CONCAT210(in_stack_0000ffe4,
                                                              CONCAT28(in_stack_0000ffe2,
                                                                       CONCAT26(in_stack_0000ffe0,
                                                                                CONCAT24(
                                                  in_stack_0000ffde,
                                                  CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))))))
                                         ));
            puVar6 = &stack0xffda;
          }
          else {
            HVar3 = BEGINPAINT((HWND16)&stack0xffdc,
                               (PAINTSTRUCT16 *)
                               (param_4 & 0xff000000 | (ulong)CONCAT12(uVar19,unaff_SS)));
            if (((PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0xffff) ||
                (puVar6 = PTR_DAT_10a8_0000_10a8_0248, _PTR_DAT_10a8_0000_10a8_0030 == 0)) &&
               (puVar6 = PTR_DAT_10a8_0000_10a8_024a,
               PTR_DAT_10a8_0000_10a8_00d0 == (undefined *)0x0)) {
              puVar6 = PTR_DAT_10a8_0000_10a8_0246;
            }
            DRAWICON((HDC16)puVar6,
                     (int16)CONCAT214(in_stack_0000ffde,
                                      CONCAT212(in_stack_0000ffdc,
                                                CONCAT210(in_stack_0000ffda,
                                                          CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT15((char)(HVar3 >> 8),
                                                           CONCAT14((char)HVar3,0x20002))))))),
                     (int16)CONCAT214(in_stack_0000ffee,
                                      CONCAT212(in_stack_0000ffec,
                                                CONCAT210(in_stack_0000ffea,
                                                          CONCAT28(in_stack_0000ffe8,
                                                                   CONCAT26(in_stack_0000ffe6,
                                                                            CONCAT24(
                                                  in_stack_0000ffe4,
                                                  CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0))))))
                                     ),in_stack_0000fff0);
            puVar6 = &stack0xffdc;
          }
          ENDPAINT((HWND16)puVar6,(PAINTSTRUCT16 *)unaff_SS);
          return 0;
        case 0xf:
          DESTROYWINDOW((HWND16)param_4._2_2_);
          return 0;
        case 0x13:
          bVar5 = ISICONIC((HWND16)param_4._2_2_);
          if (bVar5 == 0) {
            GETCLIENTRECT((HWND16)&stack0xfff6,
                          (RECT16 *)(param_4 & 0xff000000 | (ulong)CONCAT12(uVar19,unaff_SS)));
            FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xfff6,(RECT16 *)unaff_SS,
                     (HBRUSH16)param_3_00);
            return 1;
          }
          GETCLIENTRECT((HWND16)&stack0xfff6,
                        (RECT16 *)(param_4 & 0xff000000 | (ulong)CONCAT12(uVar19,unaff_SS)));
          FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_001e,(HDC16)&stack0xfff6,(RECT16 *)unaff_SS,
                   (HBRUSH16)param_3_00);
          return 0;
        }
      }
      else if ((bVar2 == 0x20) && (bVar5 = ISICONIC((HWND16)param_4._2_2_), bVar5 == 0)) {
        GETCURSORPOS((POINT16 *)&stack0xfffa);
        SCREENTOCLIENT((HWND16)&stack0xfffa,
                       (POINT16 *)CONCAT22(PTR_DAT_10a8_0000_10a8_58b4,unaff_SS));
        GETCLIENTRECT((HWND16)&stack0xfff2,(RECT16 *)(param_4 & 0xffff0000 | ZEXT24(unaff_SS)));
        bVar5 = PTINRECT(in_stack_0000fffa,SUB21(in_stack_0000fffc,0));
        if ((bVar5 != 0) &&
           (puVar6 = FUN_1008_210e((int)in_stack_0000fffa,in_stack_0000fffc,(int *)0x0),
           puVar6 != (undefined *)0x0)) {
          SETCURSOR((HCURSOR16)puVar6);
          return 1;
        }
      }
    }
    goto switchD_1008_1131_caseD_2;
  }
  if ((uint)param_4 == 0x201) {
    puVar6 = FUN_1008_210e((int)param_1,(int)param_2,(int *)&stack0xfff8);
    if (puVar6 == (undefined *)0x0) {
      return 0;
    }
    piVar13 = (int16 *)GETDC((HWND16)param_4._2_2_);
    piVar12 = SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_7d4e,(HRGN16)piVar13,(HRGN16)unaff_SI,
                           unaff_DI,(int16)CONCAT214(in_stack_0000ffe8,
                                                     CONCAT212(in_stack_0000ffe6,
                                                               CONCAT210(in_stack_0000ffe4,
                                                                         CONCAT28(in_stack_0000ffe2,
                                                                                  CONCAT26(
                                                  in_stack_0000ffe0,
                                                  CONCAT24(in_stack_0000ffde,
                                                           CONCAT22(in_stack_0000ffdc,
                                                                    in_stack_0000ffda))))))));
    puVar10 = (undefined *)0x0;
    iVar7 = 0;
    FUN_1008_1cc4((undefined *)piVar13,(undefined *)CONCAT11(in_stack_0000fff9,in_stack_0000fff8),
                  (undefined *)0x0,0,(int *)0x0,
                  CONCAT24(in_stack_0000ffda,CONCAT22(unaff_DI,unaff_SI)),in_stack_0000ffdc,
                  in_stack_0000ffde,in_stack_0000ffe0,in_stack_0000ffe2);
    puVar6 = param_1;
    puVar4 = param_2;
    SETCAPTURE((HWND16)param_4._2_2_);
    puVar11 = (undefined *)0x0;
    iVar8 = 0;
    puVar22 = puVar6;
    puVar23 = puVar4;
    iVar9 = FUN_1018_6506((undefined2 *)&stack0xfff4,
                          CONCAT210(in_stack_0000ffe0,
                                    CONCAT28(in_stack_0000ffde,
                                             CONCAT26(in_stack_0000ffdc,
                                                      CONCAT24(in_stack_0000ffda,
                                                               CONCAT22(unaff_DI,unaff_SI))))));
    while (iVar9 != 0) {
      if ((puVar6 != puVar22) || (puVar4 != puVar23)) {
        puVar10 = puVar22 + -(int)param_1;
        iVar7 = (int)puVar23 - (int)param_2;
        in_stack_0000ffe0 = (int)puVar22 - (int)puVar6;
        in_stack_0000ffe2 = (int)puVar23 - (int)puVar4;
        puVar6 = puVar22;
        puVar4 = puVar23;
        puVar11 = FUN_1008_1cc4((undefined *)piVar13,
                                (undefined *)CONCAT11(in_stack_0000fff9,in_stack_0000fff8),puVar10,
                                iVar7,(int *)&stack0xffe0,
                                CONCAT24(in_stack_0000ffda,CONCAT22(unaff_DI,unaff_SI)),
                                in_stack_0000ffdc,in_stack_0000ffde,in_stack_0000ffe0,
                                in_stack_0000ffe2);
        iVar8 = in_DX;
        puVar22 = puVar6;
        puVar23 = puVar4;
      }
      iVar9 = FUN_1018_6506((undefined2 *)&stack0xfff4,
                            CONCAT210(in_stack_0000ffe0,
                                      CONCAT28(in_stack_0000ffde,
                                               CONCAT26(in_stack_0000ffdc,
                                                        CONCAT24(in_stack_0000ffda,
                                                                 CONCAT22(unaff_DI,unaff_SI))))));
    }
    FUN_1008_1cc4((undefined *)piVar13,(undefined *)CONCAT11(in_stack_0000fff9,in_stack_0000fff8),
                  puVar10,iVar7,(int *)0x0,CONCAT24(in_stack_0000ffda,CONCAT22(unaff_DI,unaff_SI)),
                  in_stack_0000ffdc,in_stack_0000ffde,in_stack_0000ffe0,in_stack_0000ffe2);
    RELEASECAPTURE();
    SELECTOBJECT(piVar12,(HRGN16)piVar13,(HRGN16)unaff_SI,unaff_DI,
                 (int16)CONCAT214(puVar6,CONCAT212(param_2,CONCAT210(param_1,CONCAT28(
                                                  in_stack_0000ffe2,
                                                  CONCAT26(in_stack_0000ffe0,
                                                           CONCAT24(in_stack_0000ffde,
                                                                    CONCAT22(in_stack_0000ffdc,
                                                                             in_stack_0000ffda))))))
                                 ));
    RELEASEDC(piVar13,(HWND16)param_4._2_2_,(HDC16)unaff_SI);
    if ((puVar11 == (undefined *)0x0) && (iVar8 == 0)) {
      return 0;
    }
    if ((in_stack_0000fff8 & 1) != 0) {
      if (PTR_DAT_10a8_0000_10a8_573a == (undefined *)0x0) {
        PTR_DAT_10a8_0000_10a8_5770 = puVar11 + (int)PTR_DAT_10a8_0000_10a8_576a;
      }
      else {
        PTR_DAT_10a8_0000_10a8_5776 = puVar11 + (int)PTR_DAT_10a8_0000_10a8_576a;
      }
    }
    if ((in_stack_0000fff8 & 2) != 0) {
      if (PTR_DAT_10a8_0000_10a8_573a == (undefined *)0x0) {
        PTR_DAT_10a8_0000_10a8_5772 =
             PTR_DAT_10a8_0000_10a8_576e + (-(int)PTR_DAT_10a8_0000_10a8_576c - iVar8) + -8;
      }
      else {
        PTR_DAT_10a8_0000_10a8_5778 =
             PTR_DAT_10a8_0000_10a8_5768 + (-(int)PTR_DAT_10a8_0000_10a8_576c - iVar8) + -8;
      }
    }
    if ((in_stack_0000fff8 & 4) != 0) {
      if (PTR_DAT_10a8_0000_10a8_573a == (undefined *)0x0) {
        PTR_DAT_10a8_0000_10a8_5772 =
             PTR_DAT_10a8_0000_10a8_576e + (iVar8 - (int)PTR_DAT_10a8_0000_10a8_576c) + -8;
        PTR_DAT_10a8_0000_10a8_5774 =
             PTR_DAT_10a8_0000_10a8_5768 + (-(int)PTR_DAT_10a8_0000_10a8_576e - iVar8) + -8;
      }
      else {
        PTR_DAT_10a8_0000_10a8_577a =
             PTR_DAT_10a8_0000_10a8_5768 + (-(int)PTR_DAT_10a8_0000_10a8_576e - iVar8) + -8;
      }
    }
    INVALIDATERECT(1,(RECT16 *)0x0,0);
LAB_1008_1298:
    FUN_1008_71ca();
    return 0;
  }
  if (0x201 < (uint)param_4) {
    if ((uint)param_4 == 0x30f) {
LAB_1008_1a72:
      if (PTR_DAT_10a8_0000_10a8_0242 != (undefined *)0x0) {
        uVar15 = SENDMESSAGE((HWND16)param_1,
                             (uint16)CONCAT214(in_stack_0000ffdc,
                                               CONCAT212(in_stack_0000ffda,
                                                         CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT17((char)((uint)PTR_DAT_10a8_0000_10a8_0242
                                                                 >> 8),
                                                           CONCAT16((char)
                                                  PTR_DAT_10a8_0000_10a8_0242,
                                                  CONCAT15(uVar18,CONCAT14(bVar2,CONCAT22(param_3_00
                                                                                          ,param_2))
                                                          ))))))),in_stack_0000ffde,
                             CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
        return uVar15;
      }
      __return_storage_ptr__ = (uint16 *)GETDC((HWND16)param_4._2_2_);
      hpal = SELECTPALETTE(0,(HPALETTE16)PTR_DAT_10a8_0000_10a8_839e,(bool16)__return_storage_ptr__)
      ;
      puVar14 = REALIZEPALETTE(__return_storage_ptr__,(HDC16)unaff_SI);
      SELECTPALETTE(0,hpal,(bool16)__return_storage_ptr__);
      RELEASEDC((int16 *)__return_storage_ptr__,(HWND16)param_4._2_2_,(HDC16)unaff_SI);
      if (puVar14 == (uint16 *)0x0) {
        return 0;
      }
      INVALIDATERECT(1,(RECT16 *)0x0,0);
      return 1;
    }
    if ((uint)param_4 == 0x311) {
      if (param_3_00 == param_4._2_2_) {
        return 0;
      }
      goto LAB_1008_1a72;
    }
    if ((uint)param_4 != 0x464) {
      if ((uint)param_4 == 0x465) {
        FUN_1008_57b8(unaff_SI,CONCAT212(in_stack_0000ffe4,
                                         CONCAT210(in_stack_0000ffe2,
                                                   CONCAT28(in_stack_0000ffe0,
                                                            CONCAT26(in_stack_0000ffde,
                                                                     CONCAT24(in_stack_0000ffdc,
                                                                              CONCAT22(
                                                  in_stack_0000ffda,unaff_DI)))))),in_stack_0000ffe6
                      ,in_stack_0000ffe8,in_stack_0000ffea,
                      (LPVOID)CONCAT22(in_stack_0000ffee,in_stack_0000ffec));
        return 1;
      }
      if ((uint)param_4 != 0x466) goto switchD_1008_1131_caseD_2;
      FUN_1090_84c2(0,unaff_SI);
      PTR_DAT_10a8_0000_10a8_003e = (undefined *)0x0;
      FUN_1040_190c();
      puVar6 = PTR_DAT_10a8_0000_10a8_0a30;
      PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)&DAT_10a8_0001;
      DAT_10a8_0a48 = DAT_10a8_0a48 | 0x10;
      iVar7 = FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,(byte *)0x2fe);
      if (iVar7 == 0) {
        PTR_DAT_10a8_0000_10a8_0a30 = puVar6;
        DAT_10a8_0a48 = DAT_10a8_0a48 & 0xef;
        return 0;
      }
      DAT_10a8_0a48 = DAT_10a8_0a48 & 0xef;
      PTR_DAT_10a8_0001_10a8_00c0 = (undefined *)0x0;
      PTR_DAT_10a8_0000_10a8_0a30 = puVar6;
      if (param_3_00 == (VA_LIST16)((int)s_UnknownPlanetBmp_10a8_09c3 + 7)) {
        DAT_10a8_0a46 = DAT_10a8_0a46 | 2;
        _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x30110a8,(LPCSTR)0x85dc10a8,
                  (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
        iVar7 = FUN_1020_5848((int)&DAT_10a8_86de);
        if (iVar7 != 0) {
          FUN_1020_48b0();
        }
        DAT_10a8_0a46 = DAT_10a8_0a46 & 0xfd;
      }
      window_op_1008_0ede();
      SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffdc,
                                      CONCAT212(in_stack_0000ffda,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)
                                                  ((uint)PTR_DAT_10a8_0000_10a8_58b4 >> 8),
                                                  CONCAT16((char)PTR_DAT_10a8_0000_10a8_58b4,
                                                           0x1110fa10000)))))),in_stack_0000ffde,
                  CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
      if (param_3_00 == (VA_LIST16)((int)s_UnknownPlanetBmp_10a8_09c3 + 7)) {
        SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffdc,
                                        CONCAT212(in_stack_0000ffda,
                                                  CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((
                                                  char)((uint)PTR_DAT_10a8_0000_10a8_00cc >> 8),
                                                  CONCAT16((char)PTR_DAT_10a8_0000_10a8_00cc,
                                                           0x10000230000)))))),in_stack_0000ffde,
                    CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
      }
      PTR_DAT_10a8_0000_10a8_831a = (undefined *)0x0;
      _DAT_10a8_8318 = _DAT_10a8_8318 & 0xfff7;
      _DAT_10a8_8318 =
           _DAT_10a8_8318 ^
           ((byte)((byte)((ulong)((uint)(param_3_00 ==
                                        (VA_LIST16)((int)s_UnknownPlanetBmp_10a8_09c3 + 7)) << 9) >>
                         8) ^ DAT_10a8_8319) & 2) << 8;
LAB_1008_18a2:
      FUN_1090_88fa();
      return 0;
    }
    PTR_DAT_10a8_0001_10a8_00c0 = (undefined *)0xffff;
    if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 2) != 0) {
      bVar2 = (byte)PTR_DAT_10a8_0000_10a8_56fa & 0xfd;
      if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 8) != 0) {
        bVar1 = (byte)PTR_DAT_10a8_0000_10a8_56fa & 4;
        PTR_DAT_10a8_0000_10a8_56fa._0_1_ = bVar2;
        if ((bVar1 == 0) || (iVar7 = FUN_1008_5ba4(), iVar7 == 0)) {
          FUN_1008_4db4();
          FUN_1050_0000();
          goto LAB_1008_1271;
        }
        bVar2 = (byte)PTR_DAT_10a8_0000_10a8_56fa;
        if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 0x10) != 0) goto LAB_1008_1271;
      }
      PTR_DAT_10a8_0000_10a8_56fa._0_1_ = bVar2;
      FUN_1008_239c(param_4._2_2_,(int16 *)((int)s_Est__Range_10a8_0ed7 + 2),unaff_SI,unaff_DI,
                    in_stack_0000ffda,(HINSTANCE16)in_stack_0000ffdc,
                    (LPVOID)CONCAT22(in_stack_0000ffe0,in_stack_0000ffde));
      if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 0x10) != 0) {
LAB_1008_1271:
        POSTQUITMESSAGE((int16)CONCAT214(in_stack_0000ffe2,
                                         CONCAT212(in_stack_0000ffe0,
                                                   CONCAT210(in_stack_0000ffde,
                                                             CONCAT28(in_stack_0000ffdc,
                                                                      CONCAT26(in_stack_0000ffda,
                                                                               CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,PTR_DAT_10a8_0000_10a8_02ee)))))
                                                  )));
        return 0;
      }
      if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 8) != 0) {
        return 0;
      }
      if (_PTR_DAT_10a8_0000_10a8_0030 != 0) {
        SHOWWINDOW(5,(int16)CONCAT214(in_stack_0000ffe2,
                                      CONCAT212(in_stack_0000ffe0,
                                                CONCAT210(in_stack_0000ffde,
                                                          CONCAT28(in_stack_0000ffdc,
                                                                   CONCAT26(in_stack_0000ffda,
                                                                            CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,PTR_DAT_10a8_0000_10a8_58b4)))))
                                               )));
        FUN_1008_2db8(0,(undefined1  [10])
                        CONCAT28(in_stack_0000ffde,
                                 CONCAT26(in_stack_0000ffdc,
                                          CONCAT24(in_stack_0000ffda,CONCAT22(unaff_DI,unaff_SI)))))
        ;
        POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffdc,
                                        CONCAT212(in_stack_0000ffda,
                                                  CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((
                                                  char)((uint)PTR_DAT_10a8_0000_10a8_58b4 >> 8),
                                                  CONCAT16((char)PTR_DAT_10a8_0000_10a8_58b4,
                                                           0x1110fa10000)))))),in_stack_0000ffde,
                    CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
        if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 4) == 0) {
          return 0;
        }
        PTR_DAT_10a8_0000_10a8_56fa._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_56fa & 0xfb;
        param_3_00 = (VA_LIST16)&PTR_DAT_10a8_0000_10a8_006a;
        goto LAB_1008_170d;
      }
    }
    uVar20 = 0;
    uVar21 = 0;
    piVar12 = GETSYSTEMMETRICS((int16 *)0x0,
                               (int16)CONCAT214(in_stack_0000ffe4,
                                                CONCAT212(in_stack_0000ffe2,
                                                          CONCAT210(in_stack_0000ffe0,
                                                                    CONCAT28(in_stack_0000ffde,
                                                                             CONCAT26(
                                                  in_stack_0000ffdc,
                                                  CONCAT24(in_stack_0000ffda,
                                                           CONCAT22(unaff_DI,unaff_SI))))))));
    uVar18 = 1;
    uVar19 = 0;
    piVar13 = GETSYSTEMMETRICS((int16 *)&DAT_10a8_0001,
                               (int16)CONCAT214(in_stack_0000ffe2,
                                                CONCAT212(in_stack_0000ffe0,
                                                          CONCAT210(in_stack_0000ffde,
                                                                    CONCAT28(in_stack_0000ffdc,
                                                                             CONCAT26(
                                                  in_stack_0000ffda,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,CONCAT11(
                                                  uVar21,uVar20)))))))));
    PTR_DAT_10a8_0000_10a8_0242 =
         (undefined *)
         CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                      CONCAT22(piVar13,param_4._2_2_),
                      (int16)CONCAT214(300,CONCAT212(0x10a8,CONCAT111(2,CONCAT110(0xf7,CONCAT28(
                                                  0x9000,ZEXT28(piVar12)))))),
                      (int16)CONCAT214(in_stack_0000ffde,
                                       CONCAT212(in_stack_0000ffdc,
                                                 CONCAT210(in_stack_0000ffda,
                                                           CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,0x10a8))))))))),
                      (int16)CONCAT214(in_stack_0000ffee,
                                       CONCAT212(in_stack_0000ffec,
                                                 CONCAT210(in_stack_0000ffea,
                                                           CONCAT28(in_stack_0000ffe8,
                                                                    CONCAT26(in_stack_0000ffe6,
                                                                             CONCAT24(
                                                  in_stack_0000ffe4,
                                                  CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0))))))
                                      ),
                      (int16)CONCAT214(unaff_BP,CONCAT212(piVar13,CONCAT210(piVar12,CONCAT19(
                                                  in_stack_0000fff9,
                                                  CONCAT18(in_stack_0000fff8,
                                                           CONCAT26(in_stack_0000fff6,
                                                                    CONCAT24(in_stack_0000fff4,
                                                                             CONCAT22(
                                                  in_stack_0000fff2,in_stack_0000fff0)))))))),
                      in_stack_00000000,in_stack_00000002,(HINSTANCE16)param_1,
                      (LPVOID)CONCAT22(param_3_00,param_2));
    PTR_DAT_10a8_0000_10a8_0244 = (undefined *)0x0;
    PTR_DAT_10a8_0000_10a8_56fa._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_56fa & 0xfe;
    FUN_1040_190c();
    return 0;
  }
  if ((uint)param_4 == 0x102) {
    if ((((PTR_DAT_10a8_0000_10a8_00c4 != (undefined *)0x0) &&
         ((puVar6 = PTR_DAT_10a8_0000_10a8_00c4,
          param_3_00 == (VA_LIST16)((int)&PTR_DAT_10a8_0000_10a8_002c + 1) ||
          (param_3_00 == (VA_LIST16)((int)&PTR_DAT_10a8_0000_10a8_002a + 1))))) ||
        ((PTR_DAT_10a8_0000_10a8_00cc != (undefined *)0x0 &&
         (((puVar6 = PTR_DAT_10a8_0000_10a8_00cc,
           param_3_00 == (VA_LIST16)((int)&PTR_DAT_10a8_0000_10a8_002c + 1) ||
           (param_3_00 == (VA_LIST16)((int)&PTR_DAT_10a8_0000_10a8_002a + 1))) ||
          (param_3_00 == (VA_LIST16)((int)&PTR_DAT_10a8_0000_10a8_000c + 1))))))) ||
       ((PTR_DAT_10a8_0000_10a8_00ca != (undefined *)0x0 &&
        ((puVar6 = PTR_DAT_10a8_0000_10a8_00ca, param_3_00 == (VA_LIST16)&PTR_PTR_10a8_0066 ||
         (param_3_00 == (VA_LIST16)0x46)))))) {
      SENDMESSAGE((HWND16)param_1,
                  (uint16)CONCAT214(in_stack_0000ffdc,
                                    CONCAT212(in_stack_0000ffda,
                                              CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)((
                                                  uint)puVar6 >> 8),
                                                  CONCAT16((char)puVar6,
                                                           CONCAT15(1,CONCAT14(2,CONCAT22(param_3_00
                                                                                          ,param_2))
                                                                   ))))))),in_stack_0000ffde,
                  CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
      return 0;
    }
    if (((uint)PTR_DAT_10a8_0000_10a8_7b4c & 3) == 0) {
      return 0;
    }
    iVar7 = 0;
    if ((param_3_00 == (VA_LIST16)&PTR_DAT_10a8_0000_10a8_006e) || (param_3_00 == (VA_LIST16)0x4e))
    {
      iVar7 = 1;
    }
    else if ((param_3_00 == (VA_LIST16)&PTR_DAT_10a8_0000_10a8_0070) ||
            (param_3_00 == (VA_LIST16)0x50)) {
      iVar7 = -1;
    }
    if (iVar7 == 0) {
      return 0;
    }
    if (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&DAT_10a8_0002) {
      FUN_1028_1c46(iVar7,(undefined *)0x0);
      return 0;
    }
    FUN_1020_24c8(iVar7,(undefined *)0x0);
    return 0;
  }
  if ((uint)param_4 == 0x111) {
LAB_1008_170d:
    FUN_1008_239c(param_4._2_2_,(int16 *)param_3_00,unaff_SI,unaff_DI,in_stack_0000ffda,
                  (HINSTANCE16)in_stack_0000ffdc,
                  (LPVOID)CONCAT22(in_stack_0000ffe0,in_stack_0000ffde));
    return 0;
  }
  if ((uint)param_4 != 0x112) {
    if ((uint)param_4 == 0x116) {
      FUN_1008_2db8((HMENU16)param_3_00,
                    (undefined1  [10])
                    CONCAT28(in_stack_0000ffde,
                             CONCAT26(in_stack_0000ffdc,
                                      CONCAT24(in_stack_0000ffda,CONCAT22(unaff_DI,unaff_SI)))));
      return 0;
    }
    if ((uint)param_4 == 0x121) {
      if ((DAT_10a8_0a47 & 0x40) == 0) {
        return 0;
      }
      if ((_DAT_10a8_8318 & 4) == 0) {
        return 0;
      }
      goto LAB_1008_18a2;
    }
    goto switchD_1008_1131_caseD_2;
  }
  if ((((uint)param_3_00 & 0xfff0) != 0xf030) && (((uint)param_3_00 & 0xfff0) != 0xf120))
  goto switchD_1008_1131_caseD_2;
  if (PTR_DAT_10a8_0000_10a8_00d0 != (undefined *)0x0) {
    KILLTIMER((HWND16)PTR_DAT_10a8_0000_10a8_00d0,
              (uint16)(ZEXT1416(CONCAT212(in_stack_0000ffe2,
                                          CONCAT210(in_stack_0000ffe0,
                                                    CONCAT28(in_stack_0000ffde,
                                                             CONCAT26(in_stack_0000ffdc,
                                                                      CONCAT24(in_stack_0000ffda,
                                                                               CONCAT22(unaff_DI,
                                                  unaff_SI))))))) << 0x10));
    PTR_DAT_10a8_0000_10a8_00d0 = (undefined *)0x0;
    window_op_1008_0ede();
  }
  if ((PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) ||
     (iVar7 = FUN_1040_1d0a((int)PTR_DAT_10a8_0001_10a8_00c0), iVar7 == 0)) {
    if (puVar6 == (undefined *)0x0) goto switchD_1008_1131_caseD_2;
    if (PTR_DAT_10a8_0000_10a8_00d2 == (undefined *)((int)&PTR_DAT_10a8_0000_10a8_000c + 1)) {
      POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffdc,
                                      CONCAT212(in_stack_0000ffda,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(uVar20
                                                  ,CONCAT16(uVar19,0x46500000000)))))),
                  in_stack_0000ffde,CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
      goto switchD_1008_1131_caseD_2;
    }
    if (PTR_DAT_10a8_0000_10a8_00d2 == (undefined *)0xe) {
      iVar7 = FUN_1018_50b2(0xf1,0x2023);
      if ((iVar7 == 6) &&
         (iVar8 = FUN_1040_3f78(1,(int)PTR_DAT_10a8_0001_10a8_00c0,2,0), iVar8 == 0)) {
        FUN_1018_50b2(0xf2,0x10);
        uVar17 = 0x30b;
        goto LAB_1008_1796;
      }
      if (iVar7 == 2) goto LAB_1008_1879;
    }
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      iVar7 = FUN_1018_50b2(0x200,0x2023);
    }
    else {
      FUN_1018_50b2(0x201,0x40);
      iVar7 = 6;
    }
    if (iVar7 == 6) {
      uVar17 = 0x307;
LAB_1008_1796:
      _WSPRINTF((int16 *)&stack0xfffa,(LPSTR)CONCAT22(uVar17,unaff_SS),
                (LPCSTR)CONCAT13((char)((uint)(PTR_DAT_10a8_0001_10a8_00c0 + 1) >> 8),
                                 CONCAT12((char)(PTR_DAT_10a8_0001_10a8_00c0 + 1),0x10a8)),unaff_SI)
      ;
      FUN_1040_190c();
      iVar7 = FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,&stack0xfffa);
      if (iVar7 == 0) {
        FUN_1018_50b2(0x17,0x10);
      }
      else {
        window_op_1008_0ede();
      }
    }
    else if (iVar7 == 2) {
      if (puVar6 == (undefined *)0x0) {
        uVar19 = SUB21(PTR_DAT_10a8_0000_10a8_58b4,0);
        uVar20 = (undefined)((uint)PTR_DAT_10a8_0000_10a8_58b4 >> 8);
        uVar17 = 0xf020;
        uVar18 = 0x12;
        goto LAB_1008_17f9;
      }
LAB_1008_1879:
      uVar19 = SUB21(PTR_DAT_10a8_0000_10a8_58b4,0);
      uVar20 = (undefined)((uint)PTR_DAT_10a8_0000_10a8_58b4 >> 8);
      uVar17 = 0x6a;
      uVar18 = 0x11;
LAB_1008_17f9:
      POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffdc,
                                      CONCAT212(in_stack_0000ffda,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(uVar20
                                                  ,CONCAT16(uVar19,CONCAT15(1,(uint5)CONCAT12(uVar18
                                                  ,uVar17) << 0x10))))))),in_stack_0000ffde,
                  CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
      return 1;
    }
  }
  SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffdc,
                                  CONCAT212(in_stack_0000ffda,
                                            CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17((char)((
                                                  uint)PTR_DAT_10a8_0000_10a8_58b4 >> 8),
                                                  CONCAT16((char)PTR_DAT_10a8_0000_10a8_58b4,
                                                           0x1110fa10000)))))),in_stack_0000ffde,
              CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
switchD_1008_1131_caseD_2:
  uVar15 = DEFWINDOWPROC((HWND16)param_1,
                         (uint16)CONCAT214(in_stack_0000ffdc,
                                           CONCAT212(in_stack_0000ffda,
                                                     CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT17(
                                                  uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(
                                                  bVar2,CONCAT22(param_3_00,param_2))))))))),
                         in_stack_0000ffde,CONCAT22(in_stack_0000ffe2,in_stack_0000ffe0));
  return uVar15;
}

