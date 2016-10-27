object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1048#1085#1076#1080#1074#1080#1076#1091#1072#1083#1100#1085#1086#1077' '#1079#1072#1076#1072#1085#1080#1077' 1'
  ClientHeight = 380
  ClientWidth = 577
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object PaintBox1: TPaintBox
    Left = 8
    Top = 8
    Width = 360
    Height = 360
    OnMouseDown = PaintBox1MouseDown
    OnMouseMove = PaintBox1MouseMove
    OnMouseUp = PaintBox1MouseUp
  end
  object Button1: TButton
    Left = 383
    Top = 8
    Width = 186
    Height = 25
    Caption = #1055#1086#1089#1090#1088#1086#1080#1090#1100' '#1089#1077#1090#1082#1091
    TabOrder = 0
    OnClick = Button1Click
  end
end
