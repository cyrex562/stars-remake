


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl16far FUN_1008_5ba4(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;

  puVar2 = PTR_DAT_10a8_0001_10a8_00c0;
  bVar1 = (byte)_DAT_10a8_0a46;
  uVar4 = _DAT_10a8_0a46 & 2;
  PTR_DAT_10a8_0001_10a8_00c0 = (undefined *)0xffff;
  _DAT_10a8_0a46 = _DAT_10a8_0a46 & 0xff00 | _DAT_10a8_0a46 & 0xfd | 8;
  iVar3 = FUN_1008_5c08();
  _DAT_10a8_0a46 = _DAT_10a8_0a46 ^ (byte)((char)(uVar4 >> 1) * '\x02' ^ DAT_10a8_0a46) & 2;
  _DAT_10a8_0a46 = _DAT_10a8_0a46 ^ (DAT_10a8_0a46 ^ bVar1 & 8) & 8;
  PTR_DAT_10a8_0001_10a8_00c0 = puVar2;
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl16far FUN_1008_5c08(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_a;
  undefined *local_8;
  uint *local_6;
  uint local_4;

  PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)&DAT_10a8_0001;
  DAT_10a8_0a46 = DAT_10a8_0a46 | 2;
  iVar2 = 0;
  local_a = 0;
  local_8 = (undefined *)0x0;
  if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    local_6 = (uint *)0x8fc0;
    iVar3 = (int)&DAT_10a8_8864;
    do {
      if (((*(byte *)(iVar3 + 1) & 2) == 0) && (iVar1 = FUN_1040_1ae4(1,iVar2,0x20), iVar1 == 0)) {
        local_4 = 1;
        local_a = local_a + 1;
      }
      else {
        FUN_1040_1f9c();
        local_4 = 0;
        if ((*(byte *)(iVar3 + 1) & 2) != 0) {
          local_8 = local_8 + 1;
        }
      }
      if ((_PTR_DAT_10a8_0000_10a8_00d4 == 0) || (*local_6 != local_4)) {
        _PTR_DAT_10a8_0000_10a8_00d4 = GETTICKCOUNT();
      }
      *local_6 = (uint)(local_4 != 0);
      iVar3 = iVar3 + 0x76;
      iVar2 = iVar2 + 1;
      local_6 = local_6 + 1;
    } while (iVar2 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  DAT_10a8_0a46 = DAT_10a8_0a46 & 0xfd;
  _DAT_10a8_0a48 =
       _DAT_10a8_0a48 ^ (byte)((local_8 == PTR_DAT_10a8_0002_10a8_0038) << 7 ^ DAT_10a8_0a48) & 0x80
  ;
  PTR_DAT_10a8_0000_10a8_0a30 = (undefined *)0x0;
  return local_a;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong __stdcall16far
HOSTMODEDIALOG(undefined2 param_1_00,undefined2 param_2_00,int param_3,uint param_4,HWND16 param_5)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int16 *piVar5;
  HWND16 HVar6;
  int iVar7;
  bool16 bVar8;
  uint in_DX;
  HINSTANCE16 hInst;
  undefined2 uVar9;
  int iVar10;
  undefined2 unaff_SI;
  int iVar11;
  undefined2 unaff_DI;
  PAINTSTRUCT16 *unaff_SS;
  COLORREF CVar12;
  void *pvVar13;
  undefined2 in_stack_0000ffb0;
  int in_stack_0000ffb2;
  undefined in_stack_0000ffb4;
  undefined in_stack_0000ffb5;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  int *pt;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined2 in_stack_0000ffc0;
  undefined2 in_stack_0000ffc2;
  undefined2 in_stack_0000ffc4;
  uint uVar20;
  undefined2 in_stack_0000ffc6;
  HMENU16 hmenu;
  undefined2 in_stack_0000ffc8;
  void *in_stack_0000ffca;
  undefined2 in_stack_0000ffcc;
  word in_stack_0000ffce;
  dword in_stack_0000ffd0;
  undefined6 in_stack_0000ffd4;
  undefined2 in_stack_0000ffda;
  uint in_stack_0000ffdc;
  undefined2 in_stack_0000ffde;
  unkbyte10 in_stack_0000ffe0;
  HWND16 in_stack_0000ffea;
  RECT16 *in_stack_0000ffec;
  int local_e;
  int local_c;
  HMENU16 local_a;
  int local_8;
  int local_6;
  HINSTANCE16 local_4;

  uVar14 = (undefined)param_5;
  uVar15 = (undefined)(param_5 >> 8);
  uVar16 = (undefined)((uint)unaff_SS >> 8);
  if (param_4 == 0x20) {
LAB_1008_5dca:
    pt = &local_e;
    uVar17 = (char)unaff_SS;
    uVar18 = uVar16;
    GETCURSORPOS((POINT16 *)pt);
    SCREENTOCLIENT((HWND16)&local_e,(POINT16 *)CONCAT13(uVar15,CONCAT12(uVar14,unaff_SS)));
    if ((5 < local_e) && ((local_e < (int)(PTR_DAT_10a8_0000_10a8_5794 + 7) && (0x2f < local_c)))) {
      iVar7 = (local_c + -0x30) / (int)(PTR_DAT_10a8_0000_10a8_5794 + 4);
      in_DX = (local_c + -0x30) % (int)(PTR_DAT_10a8_0000_10a8_5794 + 4);
      if ((iVar7 < (int)PTR_DAT_10a8_0002_10a8_0038) &&
         (in_DX = (local_c + -0x30) % (int)(PTR_DAT_10a8_0000_10a8_5794 + 4),
         (int)in_DX < (int)(PTR_DAT_10a8_0000_10a8_5794 + 1))) {
        if (param_4 == 0x20) {
          SETCURSOR((HCURSOR16)PTR_DAT_10a8_0000_10a8_834a);
          goto LAB_1008_60f0;
        }
        iVar10 = iVar7 * 0x76;
        if ((*(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10) & 2) == 0) {
          local_8 = 0;
        }
        else if ((*(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10) & 0xe0) == 0xe0) {
          local_8 = 2;
        }
        else {
          local_8 = 1;
        }
        local_6 = iVar7;
        local_a = CREATEPOPUPMENU();
        PTR_DAT_10a8_0000_10a8_7c42 = (undefined *)0xffff;
        iVar11 = 0;
        do {
          FUN_1018_50de(iVar11 + 0x169,(char *)&DAT_10a8_86de);
          if (iVar11 == 1) {
            if ((*(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10) & 2) != 0) {
              bVar4 = *(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10);
joined_r0x10085ed4:
              if ((bVar4 & 0xe0) == 0xe0) goto LAB_1008_5eae;
            }
            local_4 = 3;
          }
          else {
            if ((*(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10) & 2) != 0) {
              bVar4 = *(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10);
              goto joined_r0x10085ed4;
            }
LAB_1008_5eae:
            local_4 = 0;
          }
          if (local_8 == iVar11) {
            bVar4 = 8;
          }
          else {
            bVar4 = 0;
          }
          APPENDMENU((HMENU16)&DAT_10a8_86de,
                     (uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111(uVar18,CONCAT110(uVar17
                                                  ,CONCAT19((char)((uint)pt >> 8),
                                                            CONCAT18((char)pt,CONCAT17((char)(
                                                  local_a >> 8),
                                                  CONCAT16((char)local_a,
                                                           (uint6)CONCAT14(bVar4 | (byte)local_4,
                                                                           CONCAT22(iVar11 + 15000,
                                                                                    0x10a8))))))))))
                     ,(uint16)CONCAT214(in_stack_0000ffce,
                                        CONCAT212(in_stack_0000ffcc,
                                                  CONCAT210(in_stack_0000ffca,
                                                            CONCAT28(iVar10,CONCAT26(
                                                  in_stack_0000ffc6,
                                                  CONCAT24(in_stack_0000ffc4,
                                                           CONCAT22(in_stack_0000ffc2,
                                                                    in_stack_0000ffc0))))))),
                     in_stack_0000ffd0);
          hmenu = local_a;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        CLIENTTOSCREEN((HWND16)&local_e,(POINT16 *)CONCAT13(uVar15,CONCAT12(uVar14,unaff_SS)));
        if (param_4 == 0x201) {
          uVar14 = 0;
        }
        else {
          uVar14 = 2;
        }
        TRACKPOPUPMENU(0,(uint16)CONCAT115((char)((uint)pt >> 8),
                                           CONCAT114((char)pt,CONCAT113((char)(hmenu >> 8),
                                                                        CONCAT112((char)hmenu,
                                                                                  ZEXT1112(CONCAT110
                                                  (uVar14,CONCAT28(local_e,CONCAT26(local_c,(uint6)
                                                  param_5 << 0x10))) | (undefined  [11])0x40000)))))
                       ,(int16)CONCAT214(iVar10,CONCAT212(hmenu,CONCAT210(in_stack_0000ffc4,
                                                                          CONCAT28(in_stack_0000ffc2
                                                                                   ,CONCAT26(
                                                  in_stack_0000ffc0,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,CONCAT11(
                                                  uVar18,uVar17)))))))),
                       (int16)CONCAT610(in_stack_0000ffd4,
                                        CONCAT46(in_stack_0000ffd0,
                                                 CONCAT24(in_stack_0000ffce,
                                                          CONCAT22(in_stack_0000ffcc,
                                                                   in_stack_0000ffca)))),
                       (int16)CONCAT106(in_stack_0000ffe0,
                                        CONCAT24(in_stack_0000ffde,
                                                 CONCAT22(in_stack_0000ffdc,in_stack_0000ffda))),
                       in_stack_0000ffea,in_stack_0000ffec);
        DESTROYMENU(hmenu);
        local_4 = -1;
        bVar8 = PEEKMESSAGE((MSG16 *)&DAT_10a8_0002,0x111,
                            (uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT111(uVar18,CONCAT110
                                                  (uVar17,CONCAT19((char)((uint)pt >> 8),
                                                                   CONCAT18((char)pt,CONCAT17(uVar16
                                                  ,CONCAT16((char)unaff_SS,
                                                            CONCAT15((char)((uint)&stack0xffd8 >> 8)
                                                                     ,CONCAT14((char)&stack0xffd8,
                                                                               CONCAT22(param_5,
                                                  0x111))))))))))),
                            (uint16)CONCAT214(in_stack_0000ffce,
                                              CONCAT212(in_stack_0000ffcc,
                                                        CONCAT210(in_stack_0000ffca,
                                                                  CONCAT28(iVar10,CONCAT26(hmenu,
                                                  CONCAT24(in_stack_0000ffc4,
                                                           CONCAT22(in_stack_0000ffc2,
                                                                    in_stack_0000ffc0))))))),
                            (uint16)CONCAT214(in_stack_0000ffde,
                                              CONCAT212(in_stack_0000ffdc,
                                                        CONCAT210(in_stack_0000ffda,
                                                                  CONCAT64(in_stack_0000ffd4,
                                                                           in_stack_0000ffd0)))));
        iVar11 = local_4;
        if (((bVar8 != 0) && (14999 < in_stack_0000ffdc)) && (in_stack_0000ffdc < 0x3afc)) {
          iVar11 = in_stack_0000ffdc + 0xc568;
        }
        if ((iVar11 != -1) && (local_8 != iVar11)) {
          puVar1 = (uint *)((int)&DAT_10a8_8864 + iVar10);
          *puVar1 = *puVar1 ^ ((byte)((byte)(((uint)(0 < iVar11) << 9) >> 8) ^
                                     *(byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10)) & 2) *
                              0x100;
          if (iVar11 == 2) {
            pbVar2 = (byte *)((int)&PTR_DAT_10a8_0000_10a8_8865 + iVar10);
            *pbVar2 = *pbVar2 | 0xe0;
          }
          puVar1 = (uint *)(iVar10 + -0x7796);
          *puVar1 = ~*puVar1;
          puVar1 = (uint *)(iVar10 + -0x7794);
          *puVar1 = ~*puVar1;
          uVar20 = (uint)(iVar11 != 0);
          FUN_1040_3f78(3,iVar7,8,(uint)(iVar11 != 0));
          FUN_1040_3f78(2,iVar7,8,uVar20);
          DAT_10a8_0a47 = DAT_10a8_0a47 & 0xdf;
          PTR_DAT_10a8_0000_10a8_0502 = (undefined *)&DAT_10a8_0001;
          FUN_1008_5c08();
          HVar6 = GETDLGITEM(0x408,(int16)CONCAT214(hmenu,CONCAT212(uVar20,CONCAT210(
                                                  in_stack_0000ffc2,
                                                  CONCAT28(in_stack_0000ffc0,
                                                           CONCAT26(unaff_DI,CONCAT24(unaff_SI,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,param_5)))))))));
          ENABLEWINDOW((uint)((DAT_10a8_0a48 & 0x80) == 0),HVar6);
          FUN_1008_58e4(param_5,(int16 *)0x0,
                        CONCAT24(unaff_DI,CONCAT22(unaff_SI,CONCAT11(uVar18,uVar17))));
          PTR_DAT_10a8_0000_10a8_0502 = (undefined *)0x0;
        }
      }
    }
  }
  else {
    if (param_4 < 0x21) {
      if (param_4 == 0x19) {
        uVar14 = 0xf;
        uVar15 = 0;
        CVar12 = GETSYSCOLOR((int16)CONCAT214(in_stack_0000ffc6,
                                              CONCAT212(in_stack_0000ffc4,
                                                        CONCAT210(in_stack_0000ffc2,
                                                                  CONCAT28(in_stack_0000ffc0,
                                                                           CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT13((char)((uint)param_3 >>
                                                                                   8),CONCAT12((char
                                                  )param_3,0xf)))))))));
        CVar12 = SETBKCOLOR((HDC16)CVar12.value,
                            CONCAT13(uVar15,CONCAT12(uVar14,(int)(CVar12.value >> 0x10))));
        return CVar12.value & 0xffff0000 | ZEXT24(PTR_DAT_10a8_0000_10a8_0010);
      }
      if (param_4 < 0x1a) {
        cVar3 = (char)param_4;
        if (cVar3 == '\x02') {
          KILLTIMER((HWND16)PTR_DAT_10a8_0000_10a8_00d0,
                    (uint16)CONCAT214(in_stack_0000ffc8,
                                      CONCAT212(in_stack_0000ffc6,
                                                CONCAT210(in_stack_0000ffc4,
                                                          CONCAT28(in_stack_0000ffc2,
                                                                   CONCAT26(in_stack_0000ffc0,
                                                                            CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,param_5))))))));
          PTR_DAT_10a8_0000_10a8_00d0 = (undefined *)0x0;
          goto LAB_1008_61ea;
        }
        if (cVar3 == '\x0f') {
          piVar5 = (int16 *)BEGINPAINT((HWND16)&stack0xffca,
                                       (PAINTSTRUCT16 *)CONCAT13(uVar15,CONCAT12(uVar14,unaff_SS)));
          if (_PTR_DAT_10a8_0000_10a8_00d4 == 0) {
            FUN_1008_5c08();
          }
          if ((DAT_10a8_0a49 & 1) == 0) {
            HVar6 = GETDLGITEM(0x408,(int16)CONCAT214(in_stack_0000ffca,
                                                      CONCAT212(in_stack_0000ffc8,
                                                                CONCAT210(in_stack_0000ffc6,
                                                                          CONCAT28(in_stack_0000ffc4
                                                                                   ,CONCAT26(
                                                  in_stack_0000ffc2,
                                                  CONCAT24(in_stack_0000ffc0,
                                                           CONCAT22(unaff_DI,param_5))))))));
            ENABLEWINDOW((uint)((DAT_10a8_0a48 & 0x80) == 0),HVar6);
          }
          FUN_1008_58e4(param_5,piVar5,
                        CONCAT24(in_stack_0000ffc2,CONCAT22(in_stack_0000ffc0,unaff_DI)));
          ENDPAINT((HWND16)&stack0xffca,unaff_SS);
        }
        else {
          if (cVar3 != '\x14') goto LAB_1008_61ea;
          GETCLIENTRECT((HWND16)&stack0xffea,(RECT16 *)CONCAT13(uVar15,CONCAT12(uVar14,unaff_SS)));
          FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xffea,(RECT16 *)unaff_SS,
                   param_3);
        }
        goto LAB_1008_60f0;
      }
      goto LAB_1008_61ea;
    }
    if (param_4 == 0x110) {
      FUN_1018_5a04(param_5,(int *)0x504,1,unaff_SI,
                    (int16)CONCAT214(in_stack_0000ffcc,
                                     CONCAT212(in_stack_0000ffca,
                                               CONCAT210(in_stack_0000ffc8,
                                                         CONCAT28(in_stack_0000ffc6,
                                                                  CONCAT26(in_stack_0000ffc4,
                                                                           CONCAT24(
                                                  in_stack_0000ffc2,
                                                  CONCAT22(in_stack_0000ffc0,unaff_DI))))))),
                    in_stack_0000ffce);
      HVar6 = GETDLGITEM(0x409,(int16)CONCAT214(in_stack_0000ffc8,
                                                CONCAT212(in_stack_0000ffc6,
                                                          CONCAT210(in_stack_0000ffc4,
                                                                    CONCAT28(in_stack_0000ffc2,
                                                                             CONCAT26(
                                                  in_stack_0000ffc0,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                        );
      uVar18 = (undefined)HVar6;
      uVar19 = (undefined)(HVar6 >> 8);
      uVar16 = 0xa8;
      uVar17 = 0x10;
      uVar14 = 0x44;
      uVar15 = 0;
      SETWINDOWTEXT(0x44,CONCAT13(uVar19,CONCAT12(uVar18,0x10a8)));
      HVar6 = GETDLGITEM(0x40a,(int16)CONCAT214(in_stack_0000ffc2,
                                                CONCAT212(in_stack_0000ffc0,
                                                          CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,
                                                  CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12(uVar14,
                                                  param_5)))))))))));
      in_stack_0000ffb4 = (undefined)HVar6;
      in_stack_0000ffb5 = (undefined)(HVar6 >> 8);
      in_stack_0000ffb2 = (int)s_From___s_c_c_10a8_10a2 + 6;
      in_stack_0000ffb0 = SUB42(&DAT_10a8_85dc,0);
      SETWINDOWTEXT((HWND16)&DAT_10a8_85dc,
                    CONCAT13(in_stack_0000ffb5,CONCAT12(in_stack_0000ffb4,0x10a8)));
      HVar6 = GETDLGITEM(0x408,(int16)CONCAT214(unaff_SI,CONCAT113(uVar19,CONCAT112(uVar18,CONCAT111
                                                  (uVar17,CONCAT110(uVar16,CONCAT19(uVar15,CONCAT18(
                                                  uVar14,CONCAT17(in_stack_0000ffb5,
                                                                  CONCAT16(in_stack_0000ffb4,
                                                                           CONCAT24(
                                                  in_stack_0000ffb2,
                                                  CONCAT22(in_stack_0000ffb0,param_5))))))))))));
      ENABLEWINDOW((uint)((DAT_10a8_0a49 & 1) == 0),HVar6);
      HVar6 = GETDLGITEM(0x407,(int16)CONCAT214(unaff_SI,CONCAT113(uVar19,CONCAT112(uVar18,CONCAT111
                                                  (uVar17,CONCAT110(uVar16,CONCAT19(uVar15,CONCAT18(
                                                  uVar14,CONCAT17(in_stack_0000ffb5,
                                                                  CONCAT16(in_stack_0000ffb4,
                                                                           CONCAT24(
                                                  in_stack_0000ffb2,
                                                  CONCAT22(in_stack_0000ffb0,param_5))))))))))));
      ENABLEWINDOW((uint)((DAT_10a8_0a49 & 1) == 0),HVar6);
      HVar6 = GETDLGITEM(0x7df,(int16)CONCAT214(unaff_SI,CONCAT113(uVar19,CONCAT112(uVar18,CONCAT111
                                                  (uVar17,CONCAT110(uVar16,CONCAT19(uVar15,CONCAT18(
                                                  uVar14,CONCAT17(in_stack_0000ffb5,
                                                                  CONCAT16(in_stack_0000ffb4,
                                                                           CONCAT24(
                                                  in_stack_0000ffb2,
                                                  CONCAT22(in_stack_0000ffb0,param_5))))))))))));
      ENABLEWINDOW((uint)((DAT_10a8_0a49 & 1) == 0),HVar6);
      PTR_DAT_10a8_0000_10a8_00d0 =
           (undefined *)
           SETTIMER((uint16 *)0x0,0,
                    (uint16)CONCAT115(uVar17,CONCAT114(uVar16,CONCAT113(uVar15,CONCAT112(uVar14,
                                                  CONCAT111(in_stack_0000ffb5,
                                                            CONCAT110(in_stack_0000ffb4,
                                                                      CONCAT28(in_stack_0000ffb2,
                                                                               CONCAT26(
                                                  in_stack_0000ffb0,CONCAT24(param_5,0xd2710))))))))
                                     ),
                    (uint16)CONCAT214(in_stack_0000ffc8,
                                      CONCAT212(in_stack_0000ffc6,
                                                CONCAT210(in_stack_0000ffc4,
                                                          CONCAT28(in_stack_0000ffc2,
                                                                   CONCAT26(in_stack_0000ffc0,
                                                                            CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,CONCAT11(uVar19,uVar18)))))))),
                    in_stack_0000ffca);
    }
    else {
      if (param_4 == 0x111) {
        if (((param_3 == 0x407) || (param_3 == 2)) || (param_3 == 0x408)) {
          if (((param_3 != 0x407) || (iVar7 = FUN_1008_5c08(), iVar7 == 0)) ||
             (iVar7 = FUN_1018_50b2(0x1cb,0x1024), iVar7 == 6)) {
            FUN_1018_5a04(param_5,(int *)0x504,0,unaff_SI,
                          (int16)CONCAT214(in_stack_0000ffcc,
                                           CONCAT212(in_stack_0000ffca,
                                                     CONCAT210(in_stack_0000ffc8,
                                                               CONCAT28(in_stack_0000ffc6,
                                                                        CONCAT26(in_stack_0000ffc4,
                                                                                 CONCAT24(
                                                  in_stack_0000ffc2,
                                                  CONCAT22(in_stack_0000ffc0,unaff_DI))))))),
                          in_stack_0000ffce);
            if (param_3 == 2) {
              HVar6 = 0;
            }
            else if (param_3 == 0x408) {
              HVar6 = 0xffff;
            }
            else {
              HVar6 = 1;
            }
            ENDDIALOG(HVar6,(int16)CONCAT214(in_stack_0000ffc8,
                                             CONCAT212(in_stack_0000ffc6,
                                                       CONCAT210(in_stack_0000ffc4,
                                                                 CONCAT28(in_stack_0000ffc2,
                                                                          CONCAT26(in_stack_0000ffc0
                                                                                   ,CONCAT24(
                                                  unaff_DI,CONCAT22(unaff_SI,param_5))))))));
            if (param_3 == 0x408) {
              FUN_1008_4db4();
            }
          }
          goto LAB_1008_60f0;
        }
        if (param_3 == 0x7df) {
          piVar5 = FUN_1010_26a0();
          if (piVar5 != (int16 *)0x0) {
            pvVar13 = MAKEPROCINSTANCE((void *)CONCAT13(0x28,CONCAT12(0xee,
                                                  PTR_DAT_10a8_0000_10a8_839a)),0x1010);
            hInst = (HINSTANCE16)((ulong)pvVar13 >> 0x10);
            local_4 = hInst;
            piVar5 = DIALOGBOX((int16 *)pvVar13,hInst,(LPCSTR)(ulong)CONCAT12(0x8d,param_5),0,
                               PTR_DAT_10a8_0000_10a8_839a);
            FREEPROCINSTANCE((void *)CONCAT13((char)(hInst >> 8),CONCAT12((char)hInst,(int)pvVar13))
                            );
            uVar9 = (undefined2)((ulong)pvVar13 >> 0x10);
            SETFOCUS(param_5);
            return CONCAT22(uVar9,piVar5);
          }
        }
        else if (param_3 == 0x76) {
          WINHELP(0xaa,(LPCSTR)0x10000,
                  (uint16)CONCAT214(in_stack_0000ffc4,
                                    CONCAT212(in_stack_0000ffc2,
                                              CONCAT210(in_stack_0000ffc0,
                                                        CONCAT28(unaff_DI,CONCAT26(unaff_SI,CONCAT15
                                                  (uVar15,CONCAT14(uVar14,CONCAT13(0x10,CONCAT12(
                                                  0xa8,PTR_s_stars__hlp_10a8_00b2_10a8_00be)))))))))
                 );
          goto LAB_1008_60f0;
        }
        goto LAB_1008_61ea;
      }
      if (param_4 != 0x113) {
        if ((param_4 != 0x201) && (param_4 != 0x204)) goto LAB_1008_61ea;
        goto LAB_1008_5dca;
      }
    }
    if (PTR_DAT_10a8_0000_10a8_0502 == (undefined *)0x0) {
      PTR_DAT_10a8_0000_10a8_0502 = (undefined *)&DAT_10a8_0001;
      FUN_1008_5c08();
      FUN_1008_58e4(param_5,(int16 *)0x0,
                    CONCAT15(in_stack_0000ffb5,
                             CONCAT14(in_stack_0000ffb4,
                                      CONCAT22(in_stack_0000ffb2,in_stack_0000ffb0))));
      PTR_DAT_10a8_0000_10a8_0502 = (undefined *)0x0;
    }
    if (param_4 != 0x113) {
LAB_1008_60f0:
      return CONCAT22(in_DX,1);
    }
  }
LAB_1008_61ea:
  return (ulong)in_DX << 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void __stdcall16far FUN_1008_61f2(void *param_1)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  HWND16 HVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 unaff_BP;
  VA_LIST16 unaff_SI;
  undefined2 unaff_DI;
  char *pcVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 unaff_SS;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000006;
  void *in_stack_0000000a;
  undefined2 in_stack_0000000c;
  VA_LIST16 in_stack_0000ffea;
  undefined in_stack_0000ffec;
  undefined in_stack_0000ffed;
  undefined *in_stack_0000ffee;
  undefined4 in_stack_0000fff4;
  undefined *puVar13;
  undefined2 in_stack_0000fffa;
  undefined2 in_stack_0000fffc;

  if (PTR_DAT_10a8_0000_10a8_0502 == (undefined *)0x0) {
    PTR_DAT_10a8_0000_10a8_0502 = (undefined *)&DAT_10a8_0001;
    puVar13 = PTR_DAT_10a8_0000_10a8_0a30;
    if (PTR_DAT_10a8_0000_10a8_00d2 == (undefined *)0xe) {
      iVar4 = FUN_1040_1d0a((int)PTR_DAT_10a8_0001_10a8_00c0);
      puVar6 = PTR_DAT_10a8_0001_10a8_00c0;
      if (iVar4 != 0) {
        KILLTIMER((HWND16)PTR_DAT_10a8_0000_10a8_00d0,
                  (uint16)CONCAT214(in_stack_0000fffc,
                                    CONCAT212(in_stack_0000fffa,
                                              CONCAT210(puVar13,CONCAT46(in_stack_0000fff4,
                                                                         CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,in_stack_0000000c)))))));
        _WSPRINTF((int16 *)&stack0xfff4,(LPSTR)CONCAT22(0x508,unaff_SS),
                  (LPCSTR)CONCAT22(PTR_DAT_10a8_0001_10a8_00c0 + 1,0x10a8),unaff_SI);
        FUN_1040_190c();
        iVar4 = FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,&stack0xfff4);
        if (iVar4 == 0) {
          FUN_1018_50b2(0x17,0x10);
        }
        else {
          PTR_DAT_10a8_0001_10a8_00c0 = puVar6;
          window_op_1008_0ede();
          PTR_DAT_10a8_0000_10a8_00d0 =
               (undefined *)
               SETTIMER((uint16 *)_PTR_DAT_10a8_0000_10a8_830a,
                        (HWND16)((ulong)_PTR_DAT_10a8_0000_10a8_830a >> 0x10),
                        (uint16)CONCAT214(puVar13,CONCAT410(in_stack_0000fff4,
                                                            CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  0xf03e8)))),
                        (uint16)CONCAT106(CONCAT46(in_stack_00000006,
                                                   CONCAT24(param_1,in_stack_00000000)),
                                          CONCAT24(unaff_BP,CONCAT22(in_stack_0000fffc,
                                                                     in_stack_0000fffa))),
                        in_stack_0000000a);
          PTR_DAT_10a8_0000_10a8_00d2 = (undefined *)0xf;
          FLASHWINDOW(1,(bool16)PTR_DAT_10a8_0000_10a8_58b4);
          in_stack_0000ffec = 0xa8;
          in_stack_0000ffed = 0x10;
          in_stack_0000ffea = (VA_LIST16)s_New_Turn_Available_10a8_050c;
          in_stack_0000ffee = PTR_DAT_10a8_0000_10a8_58b4;
          SETWINDOWTEXT(0x50c,CONCAT22(PTR_DAT_10a8_0000_10a8_58b4,0x10a8));
          MESSAGEBEEP((uint16)CONCAT412(in_stack_0000fff4,
                                        CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  in_stack_0000ffee,
                                                  CONCAT15(in_stack_0000ffed,
                                                           CONCAT14(in_stack_0000ffec,
                                                                    CONCAT22(in_stack_0000ffea,0x30)
                                                                   )))))));
          iVar4 = 1;
          while( true ) {
            HVar5 = GETWINDOW(3,(WORD)PTR_DAT_10a8_0000_10a8_58b4);
            puVar6 = (undefined *)GETWINDOW(4,HVar5);
            if (puVar6 == PTR_DAT_10a8_0000_10a8_58b4) {
              INVALIDATERECT(1,(RECT16 *)0x0,0);
            }
            if (iVar4 != 0) goto LAB_1008_63cd;
            FUN_1008_4db4();
            FUN_1050_0000();
            if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 8) != 0) {
              POSTQUITMESSAGE((int16)CONCAT412(in_stack_0000fff4,
                                               CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  in_stack_0000ffee,
                                                  CONCAT15(in_stack_0000ffed,
                                                           CONCAT14(in_stack_0000ffec,
                                                                    CONCAT22(in_stack_0000ffea,

                                                  PTR_DAT_10a8_0000_10a8_02ee))))))));
              goto LAB_1008_63cd;
            }
            FUN_1008_4db4();
LAB_1008_639c:
            iVar4 = FUN_1008_5c08();
            if ((DAT_10a8_0a48 & 0x80) != 0) break;
            _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x51f10a8,(LPCSTR)CONCAT22(iVar4,0x10a8),
                      in_stack_0000ffea);
            if (iVar4 != 1) {
              pcVar10 = (char *)&DAT_10a8_0533;
              uVar7 = 0xffff;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pcVar2 = pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (*pcVar2 != '\0');
              uVar7 = ~uVar7;
              puVar11 = (undefined2 *)(pcVar10 + -uVar7);
              pcVar10 = (char *)&DAT_10a8_86de;
              iVar8 = -1;
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                pcVar2 = pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (*pcVar2 != '\0');
              puVar12 = (undefined2 *)(pcVar10 + -1);
              for (uVar9 = uVar7 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
                puVar3 = puVar12;
                puVar12 = puVar12 + 1;
                puVar1 = puVar11;
                puVar11 = puVar11 + 1;
                *puVar3 = *puVar1;
              }
              for (uVar7 = (uint)((uVar7 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
                puVar3 = puVar12;
                puVar12 = (undefined2 *)((int)puVar12 + 1);
                puVar1 = puVar11;
                puVar11 = (undefined2 *)((int)puVar11 + 1);
                *(undefined *)puVar3 = *(undefined *)puVar1;
              }
            }
            pcVar10 = (char *)&DAT_10a8_0535;
            uVar7 = 0xffff;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (*pcVar2 != '\0');
            uVar7 = ~uVar7;
            puVar11 = (undefined2 *)(pcVar10 + -uVar7);
            pcVar10 = (char *)&DAT_10a8_86de;
            iVar8 = -1;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (*pcVar2 != '\0');
            puVar12 = (undefined2 *)(pcVar10 + -1);
            for (uVar9 = uVar7 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              puVar3 = puVar12;
              puVar12 = puVar12 + 1;
              puVar1 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar3 = *puVar1;
            }
            for (uVar7 = (uint)((uVar7 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
              puVar3 = puVar12;
              puVar12 = (undefined2 *)((int)puVar12 + 1);
              puVar1 = puVar11;
              puVar11 = (undefined2 *)((int)puVar11 + 1);
              *(undefined *)puVar3 = *(undefined *)puVar1;
            }
            SETWINDOWTEXT((HWND16)&DAT_10a8_86de,CONCAT22(PTR_DAT_10a8_0000_10a8_58b4,0x10a8));
          }
          FUN_1018_50b2(0x203,0x10);
          HVar5 = GETDLGITEM(0x408,(int16)CONCAT412(in_stack_0000fff4,
                                                    CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  in_stack_0000ffee,
                                                  CONCAT15(in_stack_0000ffed,
                                                           CONCAT14(in_stack_0000ffec,
                                                                    CONCAT22(in_stack_0000ffea,
                                                                             in_stack_0000000c))))))
                                                  ));
          ENABLEWINDOW(0,HVar5);
        }
      }
    }
    else {
      if (PTR_DAT_10a8_0000_10a8_00d2 != (undefined *)0xf) goto LAB_1008_639c;
      FLASHWINDOW(1,(bool16)PTR_DAT_10a8_0000_10a8_58b4);
      puVar13 = PTR_DAT_10a8_0000_10a8_0a30;
    }
LAB_1008_63cd:
    PTR_DAT_10a8_0000_10a8_0a30 = puVar13;
    PTR_DAT_10a8_0000_10a8_0502 = (undefined *)0x0;
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl16far FUN_1008_63e0(undefined2 param_1,int16 *param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int16 *piVar3;
  int iVar4;
  undefined2 unaff_SI;
  char *pcVar5;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  bool bVar6;
  bool bVar7;
  undefined8 in_stack_0000ffd6;
  LPCSTR in_stack_0000ffde;
  undefined4 local_1a;
  undefined4 local_16;
  int local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  int local_a;
  undefined4 local_8;
  int *local_4;

  FUN_1018_50de(param_3,&stack0xffd6);
  piVar3 = GETPRIVATEPROFILESTRING
                     (param_2,(LPCSTR)0x1410a8,&DAT_10a8_86de,(LPCSTR)0x10a8053a,
                      (LPSTR)CONCAT22(unaff_SS,&stack0xffd6),
                      (uint16)CONCAT88(in_stack_0000ffd6,
                                       CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(0x10a8,param_1))
                                               )),in_stack_0000ffde);
  if ((piVar3 == (int16 *)((int)&PTR_DAT_10a8_0000_10a8_0010 + 1)) &&
     (((DAT_10a8_86de == 'M' || (DAT_10a8_86de == 'R')) || (DAT_10a8_86de == 'I')))) {
    local_8 = 0x86df;
    local_4 = &local_12;
    do {
      iVar4 = 0;
      *local_4 = 0;
      pcVar5 = (char *)local_8;
      local_8._2_2_ = 0;
      do {
        if (*pcVar5 == '-') {
          local_8._2_2_ = 1;
        }
        else {
          if ((*pcVar5 < '0') || ('9' < *pcVar5)) goto LAB_1008_64ce;
          *local_4 = (int)*pcVar5 + *local_4 * 10 + -0x30;
        }
        pcVar5 = pcVar5 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      local_8 = CONCAT22(local_8._2_2_,pcVar5);
      if (local_8._2_2_ != 0) {
        piVar1 = local_4;
        *piVar1 = -*piVar1;
      }
      local_4 = local_4 + 1;
    } while (local_4 < &local_a);
    local_1a = CONCAT22(local_10,local_12);
    local_16 = CONCAT22(local_c,local_e);
    bVar6 = DAT_10a8_86de != 'M';
    bVar7 = DAT_10a8_86de == 'I';
    local_8._0_2_ = (char *)0x1;
  }
  else {
LAB_1008_64ce:
    bVar6 = param_3 != 0x68;
    local_16 = 0x8000;
    local_1a = 0x8000;
    local_8._0_2_ = (char *)0x0;
    bVar7 = false;
  }
  *param_4 = local_1a;
  param_4[1] = local_16;
  puVar2 = param_4 + 2;
  *(uint *)puVar2 = *(uint *)puVar2 ^ (*(byte *)(param_4 + 2) ^ !bVar6) & 1;
  puVar2 = param_4 + 2;
  *(uint *)puVar2 = *(uint *)puVar2 ^ (byte)(*(byte *)(param_4 + 2) ^ bVar7 * '\x02') & 2;
  puVar2 = param_4 + 2;
  *(uint *)puVar2 =
       *(uint *)puVar2 ^ (byte)(*(byte *)(param_4 + 2) ^ (byte)((int)(char *)local_8 << 2)) & 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1008_6538(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint16 *puVar4;
  int16 *piVar5;
  uint uVar6;
  uint uVar7;
  undefined2 unaff_SI;
  int iVar8;
  undefined2 unaff_DI;
  char *pcVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint unaff_SS;
  undefined8 in_stack_0000ffcc;
  LPCSTR in_stack_0000ffd4;
  char local_24 [16];
  char local_14 [16];
  int16 *local_4;

  PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xffe3);
  FUN_1018_50de(0x66,local_24);
  FUN_1018_50de(0x67,&stack0xffcc);
  FUN_1008_63e0(local_24,&stack0xffcc,0x68,(undefined4 *)&PTR_DAT_10a8_0000_10a8_56f0);
  FUN_1018_50de(0x7c,local_14);
  puVar4 = GETPRIVATEPROFILEINT
                     ((uint16 *)&stack0xffcc,(LPCSTR)(ulong)unaff_SS,
                      (LPCSTR)CONCAT22(unaff_SS,local_14),
                      (int16)CONCAT88(in_stack_0000ffcc,
                                      CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24
                                                                                  )))),
                      in_stack_0000ffd4);
  if ((puVar4 == (uint16 *)0x0) &&
     (((int)PTR_DAT_10a8_0000_10a8_839c < 5 || ((DAT_10a8_0a48 & 6) == 0)))) {
    FUN_1018_50b2(0x204,0x10);
  }
  FUN_1018_50de(0x74,local_14);
  PTR_DAT_10a8_0000_10a8_573a =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(1,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_573a < 0) {
    PTR_DAT_10a8_0000_10a8_573a = (undefined *)0x0;
  }
  if (2 < (int)PTR_DAT_10a8_0000_10a8_573a) {
    PTR_DAT_10a8_0000_10a8_573a = (undefined *)&DAT_10a8_0002;
  }
  FUN_1018_50de(0x75,local_14);
  PTR_DAT_10a8_0000_10a8_5770 =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x18c,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_5770 < 10) {
    PTR_DAT_10a8_0000_10a8_5770 = (undefined *)0xa;
  }
  if (2000 < (int)PTR_DAT_10a8_0000_10a8_5770) {
    PTR_DAT_10a8_0000_10a8_5770 = (undefined *)((int)s_Fleet_10a8_07cb + 5);
  }
  FUN_1018_50de(0x76,local_14);
  PTR_DAT_10a8_0000_10a8_5772 =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x6e,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_5772 < 10) {
    PTR_DAT_10a8_0000_10a8_5772 = (undefined *)0xa;
  }
  if (2000 < (int)PTR_DAT_10a8_0000_10a8_5772) {
    PTR_DAT_10a8_0000_10a8_5772 = (undefined *)((int)s_Fleet_10a8_07cb + 5);
  }
  FUN_1018_50de(0x77,local_14);
  PTR_DAT_10a8_0000_10a8_5774 =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(0xc0,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_5774 < 10) {
    PTR_DAT_10a8_0000_10a8_5774 = (undefined *)0xa;
  }
  if (2000 < (int)PTR_DAT_10a8_0000_10a8_5774) {
    PTR_DAT_10a8_0000_10a8_5774 = (undefined *)((int)s_Fleet_10a8_07cb + 5);
  }
  FUN_1018_50de(0x78,local_14);
  PTR_DAT_10a8_0000_10a8_5776 =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x18c,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_5776 < 10) {
    PTR_DAT_10a8_0000_10a8_5776 = (undefined *)0xa;
  }
  if (2000 < (int)PTR_DAT_10a8_0000_10a8_5776) {
    PTR_DAT_10a8_0000_10a8_5776 = (undefined *)((int)s_Fleet_10a8_07cb + 5);
  }
  FUN_1018_50de(0x79,local_14);
  PTR_DAT_10a8_0000_10a8_5778 =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x6e,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_5778 < 10) {
    PTR_DAT_10a8_0000_10a8_5778 = (undefined *)0xa;
  }
  if (2000 < (int)PTR_DAT_10a8_0000_10a8_5778) {
    PTR_DAT_10a8_0000_10a8_5778 = (undefined *)((int)s_Fleet_10a8_07cb + 5);
  }
  FUN_1018_50de(0x7a,local_14);
  PTR_DAT_10a8_0000_10a8_577a =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(0xc0,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if ((int)PTR_DAT_10a8_0000_10a8_577a < 10) {
    PTR_DAT_10a8_0000_10a8_577a = (undefined *)0xa;
  }
  if (2000 < (int)PTR_DAT_10a8_0000_10a8_577a) {
    PTR_DAT_10a8_0000_10a8_577a = (undefined *)((int)s_Fleet_10a8_07cb + 5);
  }
  FUN_1018_50de(0x6a,local_14);
  GETPRIVATEPROFILESTRING
            ((int16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x14,unaff_SS),(LPCSTR)&DAT_10a8_86de,
             (LPCSTR)0x10a8053c,(LPSTR)CONCAT22(unaff_SS,local_14),
             (uint16)CONCAT88(in_stack_0000ffcc,
                              CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24)))),
             in_stack_0000ffd4);
  FUN_1008_6a88((char *)&DAT_10a8_86de,(undefined4 *)&PTR_DAT_10a8_0001_10a8_0a4a,5);
  FUN_1018_50de(0x69,local_14);
  GETPRIVATEPROFILESTRING
            ((int16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x14,unaff_SS),(LPCSTR)&DAT_10a8_86de,
             (LPCSTR)0x10a8053e,(LPSTR)CONCAT22(unaff_SS,local_14),
             (uint16)CONCAT88(in_stack_0000ffcc,
                              CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24)))),
             in_stack_0000ffd4);
  FUN_1008_6a88((char *)&DAT_10a8_86de,(undefined4 *)0xd16,7);
  FUN_1018_50de(0x6c,local_14);
  piVar5 = GETPRIVATEPROFILESTRING
                     ((int16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x14,unaff_SS),(LPCSTR)&DAT_10a8_86de,
                      (LPCSTR)0x10a80540,(LPSTR)CONCAT22(unaff_SS,local_14),
                      (uint16)CONCAT88(in_stack_0000ffcc,
                                       CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,
                                                  local_24)))),in_stack_0000ffd4);
  if ((int)piVar5 < 3) {
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff1f);
    goto LAB_1008_686a;
  }
  if (DAT_10a8_86de == 0x53) {
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff5f | 0x40);
  }
  else if (DAT_10a8_86de < 0x54) {
    if (DAT_10a8_86de == 0x45) {
      PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff9f | 0x80)
      ;
    }
    else {
      if (DAT_10a8_86de != 0x50) goto LAB_1008_6811;
      PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff3f | 0x20)
      ;
    }
  }
  else {
LAB_1008_6811:
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff1f);
  }
  if ((DAT_10a8_86df < 'B') || ('Q' < DAT_10a8_86df)) {
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff1f);
  }
  else {
    PTR_DAT_10a8_0000_10a8_5700 = (undefined *)(DAT_10a8_86df + -0x42);
  }
  if (((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xe0) != 0) {
    PTR_DAT_10a8_0000_10a8_56fe = (undefined *)thunk_FUN_10a0_0fdc((byte *)&DAT_10a8_86e0);
  }
LAB_1008_686a:
  FUN_1018_50de(0x7b,local_14);
  piVar5 = GETPRIVATEPROFILESTRING
                     ((int16 *)&stack0xffcc,(LPCSTR)CONCAT22(10,unaff_SS),(LPCSTR)&DAT_10a8_86de,
                      (LPCSTR)0x10a80542,(LPSTR)CONCAT22(unaff_SS,local_14),
                      (uint16)CONCAT88(in_stack_0000ffcc,
                                       CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,
                                                  local_24)))),in_stack_0000ffd4);
  _PTR_DAT_10a8_0000_10a8_5702 = 0;
  iVar8 = 0;
  if (0 < (int)piVar5) {
    do {
      _PTR_DAT_10a8_0000_10a8_5702 = _PTR_DAT_10a8_0000_10a8_5702 << 4;
      if ((*(char *)((int)&DAT_10a8_86de + iVar8) < '0') ||
         ('9' < *(char *)((int)&DAT_10a8_86de + iVar8))) {
        if (('`' < *(char *)((int)&DAT_10a8_86de + iVar8)) &&
           (*(char *)((int)&DAT_10a8_86de + iVar8) < 'g')) {
          uVar6 = (int)*(char *)((int)&DAT_10a8_86de + iVar8) - 0x57;
          goto LAB_1008_68e4;
        }
      }
      else {
        uVar6 = (int)*(char *)((int)&DAT_10a8_86de + iVar8) - 0x30;
LAB_1008_68e4:
        _PTR_DAT_10a8_0000_10a8_5702 =
             CONCAT22((int)((ulong)_PTR_DAT_10a8_0000_10a8_5702 >> 0x10) + ((int)uVar6 >> 0xf) +
                      (uint)CARRY2((uint)PTR_DAT_10a8_0000_10a8_5702,uVar6),
                      PTR_DAT_10a8_0000_10a8_5702 + uVar6);
      }
      iVar8 = iVar8 + 1;
      local_4 = piVar5;
    } while (iVar8 < (int)piVar5);
  }
  FUN_1018_50de(0x6b,local_14);
  puVar4 = GETPRIVATEPROFILEINT
                     ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(4,unaff_SS),
                      (LPCSTR)CONCAT22(unaff_SS,local_14),
                      (int16)CONCAT88(in_stack_0000ffcc,
                                      CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24
                                                                                  )))),
                      in_stack_0000ffd4);
  if ((puVar4 != (uint16 *)0x0) && (puVar4 < (uint16 *)0x9)) {
    PTR_DAT_10a8_0000_10a8_08b2 = (undefined *)((int)puVar4 + -4);
  }
  FUN_1018_50de(0x71,local_14);
  puVar4 = GETPRIVATEPROFILEINT
                     ((uint16 *)&stack0xffcc,(LPCSTR)(ulong)unaff_SS,
                      (LPCSTR)CONCAT22(unaff_SS,local_14),
                      (int16)CONCAT88(in_stack_0000ffcc,
                                      CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24
                                                                                  )))),
                      in_stack_0000ffd4);
  if (puVar4 < (uint16 *)0x8) {
    PTR_DAT_10a8_0000_10a8_07aa = (undefined *)puVar4;
  }
  FUN_1018_50de(0x72,local_14);
  puVar4 = GETPRIVATEPROFILEINT
                     ((uint16 *)&stack0xffcc,(LPCSTR)(ulong)unaff_SS,
                      (LPCSTR)CONCAT22(unaff_SS,local_14),
                      (int16)CONCAT88(in_stack_0000ffcc,
                                      CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24
                                                                                  )))),
                      in_stack_0000ffd4);
  if (puVar4 < (uint16 *)&PTR_DAT_10a8_0000_10a8_0010) {
    PTR_DAT_10a8_0000_10a8_8348 = (undefined *)puVar4;
  }
  FUN_1018_50de(0x73,local_14);
  DAT_10a8_064e =
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(DAT_10a8_064e,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  if (((int)DAT_10a8_064e < 500) || (30000 < (int)DAT_10a8_064e)) {
    DAT_10a8_064e = (uint16 *)((int)s__d_of__d_10a8_1381 + 7);
  }
  FUN_1018_50de(0x6d,local_24);
  FUN_1018_50de(0x6e,local_14);
  puVar4 = GETPRIVATEPROFILEINT
                     ((uint16 *)&stack0xffcc,(LPCSTR)(ulong)unaff_SS,
                      (LPCSTR)CONCAT22(unaff_SS,local_14),
                      (int16)CONCAT88(in_stack_0000ffcc,
                                      CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24
                                                                                  )))),
                      in_stack_0000ffd4);
  PTR_DAT_10a8_0000_10a8_56fa =
       (undefined *)
       ((uint)PTR_DAT_10a8_0000_10a8_56fa ^
       (byte)((char)puVar4 << 2 ^ (byte)PTR_DAT_10a8_0000_10a8_56fa) & 4);
  FUN_1018_50de(0x6f,local_14);
  piVar5 = GETPRIVATEPROFILESTRING
                     ((int16 *)&stack0xffcc,(LPCSTR)CONCAT22(0x100,unaff_SS),(LPCSTR)&DAT_10a8_86de,
                      (LPCSTR)0x10a80544,(LPSTR)CONCAT22(unaff_SS,local_14),
                      (uint16)CONCAT88(in_stack_0000ffcc,
                                       CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,
                                                  local_24)))),in_stack_0000ffd4);
  if ((int)piVar5 < 4) {
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xfffe);
  }
  else {
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa | 1);
    pcVar9 = (char *)&DAT_10a8_86de;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = ~uVar6;
    puVar10 = (undefined2 *)(pcVar9 + -uVar6);
    puVar11 = (undefined2 *)&DAT_10a8_85dc;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      puVar3 = puVar11;
      puVar11 = puVar11 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = *puVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar3 = puVar11;
      puVar11 = (undefined2 *)((int)puVar11 + 1);
      puVar1 = puVar10;
      puVar10 = (undefined2 *)((int)puVar10 + 1);
      *(undefined *)puVar3 = *(undefined *)puVar1;
    }
  }
  FUN_1018_50de(0x70,local_14);
  PTR_DAT_10a8_0000_10a8_56fc =
       (undefined *)
       GETPRIVATEPROFILEINT
                 ((uint16 *)&stack0xffcc,(LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_0042,unaff_SS),
                  (LPCSTR)CONCAT22(unaff_SS,local_14),
                  (int16)CONCAT88(in_stack_0000ffcc,
                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(unaff_SS,local_24))))
                  ,in_stack_0000ffd4);
  return;
}

