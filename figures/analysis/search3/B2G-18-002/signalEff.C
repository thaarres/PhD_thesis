void signalEff()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 10 17:09:15 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(501.1429,-0.04639175,5708.286,0.2757732);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TF1 *func1 = new TF1("func","pol7",1126,5500);
   func1->SetBit(TF1::kNotDraw);
   func1->SetFillColor(19);
   func1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   func1->SetMarkerColor(ci);
   func1->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1->SetLineColor(ci);
   func1->SetLineWidth(3);
   func1->SetChisquare(9.220285);
   func1->SetNDF(4);
   func1->GetXaxis()->SetTitle("M_{X} (GeV)");
   func1->GetXaxis()->SetRange(1,100);
   func1->GetXaxis()->SetNdivisions(209);
   func1->GetXaxis()->SetLabelFont(42);
   func1->GetXaxis()->SetLabelOffset(0.007);
   func1->GetXaxis()->SetLabelSize(0.05);
   func1->GetXaxis()->SetTitleSize(0.06);
   func1->GetXaxis()->SetTitleOffset(0.94);
   func1->GetXaxis()->SetTitleFont(42);
   func1->GetYaxis()->SetTitle("Signal efficiency");
   func1->GetYaxis()->SetNdivisions(504);
   func1->GetYaxis()->SetLabelFont(42);
   func1->GetYaxis()->SetLabelOffset(0.007);
   func1->GetYaxis()->SetLabelSize(0.05);
   func1->GetYaxis()->SetTitleSize(0.06);
   func1->GetYaxis()->SetTitleOffset(0.97);
   func1->GetYaxis()->SetTitleFont(42);
   func1->SetParameter(0,0.348323);
   func1->SetParError(0,0.2815662);
   func1->SetParLimits(0,0,0);
   func1->SetParameter(1,-0.001087841);
   func1->SetParError(1,0.0007944361);
   func1->SetParLimits(1,0,0);
   func1->SetParameter(2,1.37814e-06);
   func1->SetParError(2,9.166124e-07);
   func1->SetParLimits(2,0,0);
   func1->SetParameter(3,-8.928728e-10);
   func1->SetParError(3,5.612293e-10);
   func1->SetParLimits(3,0,0);
   func1->SetParameter(4,3.269651e-13);
   func1->SetParError(4,1.972936e-13);
   func1->SetParLimits(4,0,0);
   func1->SetParameter(5,-6.837576e-17);
   func1->SetParError(5,3.991208e-17);
   func1->SetParLimits(5,0,0);
   func1->SetParameter(6,7.619172e-21);
   func1->SetParError(6,4.313671e-21);
   func1->SetParLimits(6,0,0);
   func1->SetParameter(7,-3.510635e-25);
   func1->SetParError(7,1.926929e-25);
   func1->SetParLimits(7,0,0);
   func1->Draw("C");
   
   Double_t _fx1001[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1001[13] = {
   0.00462189,
   0.07606537,
   0.09867822,
   0.1031768,
   0.1042346,
   0.1086448,
   0.1064021,
   0.1061835,
   0.105606,
   0.1045757,
   0.1056063,
   0.1022398,
   0.05503109};
   Double_t _fex1001[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[13] = {
   0.0004079871,
   0.001658978,
   0.001903521,
   0.001941394,
   0.00196756,
   0.00204476,
   0.002069312,
   0.002141125,
   0.002382496,
   0.002495197,
   0.003243628,
   0.004420827,
   0.003729621};
   TGraphErrors *gre = new TGraphErrors(13,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,550,5950);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.1213371);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *func1002 = new TF1("func","pol7",1126,5500);
   func1002->SetBit(TF1::kNotDraw);
   func1002->SetFillColor(19);
   func1002->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1002->SetMarkerColor(ci);
   func1002->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   func1002->SetLineColor(ci);
   func1002->SetLineWidth(3);
   func1002->SetLineStyle(9);
   func1002->SetChisquare(4.3251);
   func1002->SetNDF(4);
   func1002->GetXaxis()->SetLabelFont(42);
   func1002->GetXaxis()->SetLabelOffset(0.007);
   func1002->GetXaxis()->SetLabelSize(0.05);
   func1002->GetXaxis()->SetTitleSize(0.06);
   func1002->GetXaxis()->SetTitleOffset(0.9);
   func1002->GetXaxis()->SetTitleFont(42);
   func1002->GetYaxis()->SetLabelFont(42);
   func1002->GetYaxis()->SetLabelOffset(0.007);
   func1002->GetYaxis()->SetLabelSize(0.05);
   func1002->GetYaxis()->SetTitleSize(0.06);
   func1002->GetYaxis()->SetTitleOffset(1.25);
   func1002->GetYaxis()->SetTitleFont(42);
   func1002->SetParameter(0,-1.429748);
   func1002->SetParError(0,0.5545089);
   func1002->SetParLimits(0,0,0);
   func1002->SetParameter(1,0.003594563);
   func1002->SetParError(1,0.001537716);
   func1002->SetParLimits(1,0,0);
   func1002->SetParameter(2,-3.485395e-06);
   func1002->SetParError(2,1.74245e-06);
   func1002->SetParLimits(2,0,0);
   func1002->SetParameter(3,1.811045e-09);
   func1002->SetParError(3,1.047911e-09);
   func1002->SetParLimits(3,0,0);
   func1002->SetParameter(4,-5.434919e-13);
   func1002->SetParError(4,3.621603e-13);
   func1002->SetParLimits(4,0,0);
   func1002->SetParameter(5,9.401229e-17);
   func1002->SetParError(5,7.213178e-17);
   func1002->SetParLimits(5,0,0);
   func1002->SetParameter(6,-8.659999e-21);
   func1002->SetParError(6,7.688684e-21);
   func1002->SetParLimits(6,0,0);
   func1002->SetParameter(7,3.266448e-25);
   func1002->SetParError(7,3.393303e-25);
   func1002->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1002);
   gre->Draw("p");
   
   Double_t _fx1003[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1003[13] = {
   0.0002530616,
   0.01400562,
   0.017808,
   0.02440935,
   0.02492151,
   0.02862119,
   0.03193476,
   0.03517449,
   0.04342513,
   0.04431164,
   0.05248987,
   0.05431311,
   0.02769084};
   Double_t _fex1003[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[13] = {
   8.814552e-05,
   0.000690411,
   0.000779129,
   0.0009143032,
   0.0009302666,
   0.0010184,
   0.001090559,
   0.001191512,
   0.001627841,
   0.001579268,
   0.002325235,
   0.002790419,
   0.002768775};
   gre = new TGraphErrors(13,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,550,5950);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.06279739);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *func1004 = new TF1("func","pol7",1126,5500);
   func1004->SetBit(TF1::kNotDraw);
   func1004->SetFillColor(19);
   func1004->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1004->SetMarkerColor(ci);
   func1004->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1004->SetLineColor(ci);
   func1004->SetLineWidth(3);
   func1004->SetChisquare(9.220285);
   func1004->SetNDF(4);
   func1004->GetXaxis()->SetTitle("M_{X} (GeV)");
   func1004->GetXaxis()->SetRange(1,100);
   func1004->GetXaxis()->SetNdivisions(209);
   func1004->GetXaxis()->SetLabelFont(42);
   func1004->GetXaxis()->SetLabelOffset(0.007);
   func1004->GetXaxis()->SetLabelSize(0.05);
   func1004->GetXaxis()->SetTitleSize(0.06);
   func1004->GetXaxis()->SetTitleOffset(0.94);
   func1004->GetXaxis()->SetTitleFont(42);
   func1004->GetYaxis()->SetTitle("Signal efficiency");
   func1004->GetYaxis()->SetNdivisions(504);
   func1004->GetYaxis()->SetLabelFont(42);
   func1004->GetYaxis()->SetLabelOffset(0.007);
   func1004->GetYaxis()->SetLabelSize(0.05);
   func1004->GetYaxis()->SetTitleSize(0.06);
   func1004->GetYaxis()->SetTitleOffset(0.97);
   func1004->GetYaxis()->SetTitleFont(42);
   func1004->SetParameter(0,0.348323);
   func1004->SetParError(0,0.2815662);
   func1004->SetParLimits(0,0,0);
   func1004->SetParameter(1,-0.001087841);
   func1004->SetParError(1,0.0007944361);
   func1004->SetParLimits(1,0,0);
   func1004->SetParameter(2,1.37814e-06);
   func1004->SetParError(2,9.166124e-07);
   func1004->SetParLimits(2,0,0);
   func1004->SetParameter(3,-8.928728e-10);
   func1004->SetParError(3,5.612293e-10);
   func1004->SetParLimits(3,0,0);
   func1004->SetParameter(4,3.269651e-13);
   func1004->SetParError(4,1.972936e-13);
   func1004->SetParLimits(4,0,0);
   func1004->SetParameter(5,-6.837576e-17);
   func1004->SetParError(5,3.991208e-17);
   func1004->SetParLimits(5,0,0);
   func1004->SetParameter(6,7.619172e-21);
   func1004->SetParError(6,4.313671e-21);
   func1004->SetParLimits(6,0,0);
   func1004->SetParameter(7,-3.510635e-25);
   func1004->SetParError(7,1.926929e-25);
   func1004->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1004);
   gre->Draw("p");
   
   TF1 *func1005 = new TF1("func","pol7",1126,5500);
   func1005->SetBit(TF1::kNotDraw);
   func1005->SetFillColor(19);
   func1005->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1005->SetMarkerColor(ci);
   func1005->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1005->SetLineColor(ci);
   func1005->SetLineWidth(3);
   func1005->SetChisquare(9.220285);
   func1005->SetNDF(4);
   func1005->GetXaxis()->SetTitle("M_{X} (GeV)");
   func1005->GetXaxis()->SetRange(1,100);
   func1005->GetXaxis()->SetNdivisions(209);
   func1005->GetXaxis()->SetLabelFont(42);
   func1005->GetXaxis()->SetLabelOffset(0.007);
   func1005->GetXaxis()->SetLabelSize(0.05);
   func1005->GetXaxis()->SetTitleSize(0.06);
   func1005->GetXaxis()->SetTitleOffset(0.94);
   func1005->GetXaxis()->SetTitleFont(42);
   func1005->GetYaxis()->SetTitle("Signal efficiency");
   func1005->GetYaxis()->SetNdivisions(504);
   func1005->GetYaxis()->SetLabelFont(42);
   func1005->GetYaxis()->SetLabelOffset(0.007);
   func1005->GetYaxis()->SetLabelSize(0.05);
   func1005->GetYaxis()->SetTitleSize(0.06);
   func1005->GetYaxis()->SetTitleOffset(0.97);
   func1005->GetYaxis()->SetTitleFont(42);
   func1005->SetParameter(0,0.348323);
   func1005->SetParError(0,0.2815662);
   func1005->SetParLimits(0,0,0);
   func1005->SetParameter(1,-0.001087841);
   func1005->SetParError(1,0.0007944361);
   func1005->SetParLimits(1,0,0);
   func1005->SetParameter(2,1.37814e-06);
   func1005->SetParError(2,9.166124e-07);
   func1005->SetParLimits(2,0,0);
   func1005->SetParameter(3,-8.928728e-10);
   func1005->SetParError(3,5.612293e-10);
   func1005->SetParLimits(3,0,0);
   func1005->SetParameter(4,3.269651e-13);
   func1005->SetParError(4,1.972936e-13);
   func1005->SetParLimits(4,0,0);
   func1005->SetParameter(5,-6.837576e-17);
   func1005->SetParError(5,3.991208e-17);
   func1005->SetParLimits(5,0,0);
   func1005->SetParameter(6,7.619172e-21);
   func1005->SetParError(6,4.313671e-21);
   func1005->SetParLimits(6,0,0);
   func1005->SetParameter(7,-3.510635e-25);
   func1005->SetParError(7,1.926929e-25);
   func1005->SetParLimits(7,0,0);
   func1005->Draw("Csame");
   
   TF1 *func1006 = new TF1("func","pol7",1126,5500);
   func1006->SetBit(TF1::kNotDraw);
   func1006->SetFillColor(19);
   func1006->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1006->SetMarkerColor(ci);
   func1006->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   func1006->SetLineColor(ci);
   func1006->SetLineWidth(3);
   func1006->SetLineStyle(9);
   func1006->SetChisquare(4.3251);
   func1006->SetNDF(4);
   func1006->GetXaxis()->SetLabelFont(42);
   func1006->GetXaxis()->SetLabelOffset(0.007);
   func1006->GetXaxis()->SetLabelSize(0.05);
   func1006->GetXaxis()->SetTitleSize(0.06);
   func1006->GetXaxis()->SetTitleOffset(0.9);
   func1006->GetXaxis()->SetTitleFont(42);
   func1006->GetYaxis()->SetLabelFont(42);
   func1006->GetYaxis()->SetLabelOffset(0.007);
   func1006->GetYaxis()->SetLabelSize(0.05);
   func1006->GetYaxis()->SetTitleSize(0.06);
   func1006->GetYaxis()->SetTitleOffset(1.25);
   func1006->GetYaxis()->SetTitleFont(42);
   func1006->SetParameter(0,-1.429748);
   func1006->SetParError(0,0.5545089);
   func1006->SetParLimits(0,0,0);
   func1006->SetParameter(1,0.003594563);
   func1006->SetParError(1,0.001537716);
   func1006->SetParLimits(1,0,0);
   func1006->SetParameter(2,-3.485395e-06);
   func1006->SetParError(2,1.74245e-06);
   func1006->SetParLimits(2,0,0);
   func1006->SetParameter(3,1.811045e-09);
   func1006->SetParError(3,1.047911e-09);
   func1006->SetParLimits(3,0,0);
   func1006->SetParameter(4,-5.434919e-13);
   func1006->SetParError(4,3.621603e-13);
   func1006->SetParLimits(4,0,0);
   func1006->SetParameter(5,9.401229e-17);
   func1006->SetParError(5,7.213178e-17);
   func1006->SetParLimits(5,0,0);
   func1006->SetParameter(6,-8.659999e-21);
   func1006->SetParError(6,7.688684e-21);
   func1006->SetParLimits(6,0,0);
   func1006->SetParameter(7,3.266448e-25);
   func1006->SetParError(7,3.393303e-25);
   func1006->SetParLimits(7,0,0);
   func1006->Draw("Csame");
   
   Double_t _fx1005[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1005[13] = {
   0.007507704,
   0.08419499,
   0.1029111,
   0.1061744,
   0.1095852,
   0.1106354,
   0.1119779,
   0.1129666,
   0.1132634,
   0.1134405,
   0.1141744,
   0.112772,
   0.05877874};
   Double_t _fex1005[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[13] = {
   0.0001828286,
   0.0005636155,
   0.0006505861,
   0.0006789135,
   0.0006464592,
   0.0006431213,
   0.0006577561,
   0.0006533214,
   0.0006718764,
   0.000692792,
   0.0006963538,
   0.002176469,
   0.001580714};
   gre = new TGraphErrors(13,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,550,5950);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.1257109);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *func1006 = new TF1("func","pol7",1126,5500);
   func1006->SetBit(TF1::kNotDraw);
   func1006->SetFillColor(19);
   func1006->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1006->SetMarkerColor(ci);
   func1006->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   func1006->SetLineColor(ci);
   func1006->SetLineWidth(3);
   func1006->SetLineStyle(9);
   func1006->SetChisquare(19.03471);
   func1006->SetNDF(4);
   func1006->GetXaxis()->SetLabelFont(42);
   func1006->GetXaxis()->SetLabelOffset(0.007);
   func1006->GetXaxis()->SetLabelSize(0.05);
   func1006->GetXaxis()->SetTitleSize(0.06);
   func1006->GetXaxis()->SetTitleOffset(0.9);
   func1006->GetXaxis()->SetTitleFont(42);
   func1006->GetYaxis()->SetLabelFont(42);
   func1006->GetYaxis()->SetLabelOffset(0.007);
   func1006->GetYaxis()->SetLabelSize(0.05);
   func1006->GetYaxis()->SetTitleSize(0.06);
   func1006->GetYaxis()->SetTitleOffset(1.25);
   func1006->GetYaxis()->SetTitleFont(42);
   func1006->SetParameter(0,-1.038653);
   func1006->SetParError(0,0.1808537);
   func1006->SetParLimits(0,0,0);
   func1006->SetParameter(1,0.002615447);
   func1006->SetParError(1,0.0005008201);
   func1006->SetParLimits(1,0,0);
   func1006->SetParameter(2,-2.454714e-06);
   func1006->SetParError(2,5.672394e-07);
   func1006->SetParLimits(2,0,0);
   func1006->SetParameter(3,1.224287e-09);
   func1006->SetParError(3,3.414397e-10);
   func1006->SetParLimits(3,0,0);
   func1006->SetParameter(4,-3.483837e-13);
   func1006->SetParError(4,1.182957e-13);
   func1006->SetParLimits(4,0,0);
   func1006->SetParameter(5,5.61815e-17);
   func1006->SetParError(5,2.366009e-17);
   func1006->SetParLimits(5,0,0);
   func1006->SetParameter(6,-4.701604e-21);
   func1006->SetParError(6,2.536797e-21);
   func1006->SetParLimits(6,0,0);
   func1006->SetParameter(7,1.540988e-25);
   func1006->SetParError(7,1.127781e-25);
   func1006->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1006);
   gre->Draw("p");
   
   Double_t _fx1007[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1007[13] = {
   0.0005501966,
   0.01409192,
   0.02039245,
   0.02318408,
   0.02577163,
   0.02794024,
   0.03101722,
   0.03472897,
   0.03862773,
   0.04303504,
   0.04708562,
   0.04613655,
   0.02407343};
   Double_t _fex1007[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[13] = {
   4.792976e-05,
   0.0002214049,
   0.0002788249,
   0.0003049478,
   0.0003004772,
   0.0003094684,
   0.000330672,
   0.0003467259,
   0.0003780267,
   0.0004161173,
   0.0004263676,
   0.001494697,
   0.0009470776};
   gre = new TGraphErrors(13,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,550,5950);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(0.05234414);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *func1008 = new TF1("func","pol7",1126,5500);
   func1008->SetBit(TF1::kNotDraw);
   func1008->SetFillColor(19);
   func1008->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1008->SetMarkerColor(ci);
   func1008->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   func1008->SetLineColor(ci);
   func1008->SetLineWidth(3);
   func1008->SetChisquare(5.259977);
   func1008->SetNDF(4);
   func1008->GetXaxis()->SetLabelFont(42);
   func1008->GetXaxis()->SetLabelOffset(0.007);
   func1008->GetXaxis()->SetLabelSize(0.05);
   func1008->GetXaxis()->SetTitleSize(0.06);
   func1008->GetXaxis()->SetTitleOffset(0.9);
   func1008->GetXaxis()->SetTitleFont(42);
   func1008->GetYaxis()->SetLabelFont(42);
   func1008->GetYaxis()->SetLabelOffset(0.007);
   func1008->GetYaxis()->SetLabelSize(0.05);
   func1008->GetYaxis()->SetTitleSize(0.06);
   func1008->GetYaxis()->SetTitleOffset(1.25);
   func1008->GetYaxis()->SetTitleFont(42);
   func1008->SetParameter(0,-0.2240538);
   func1008->SetParError(0,0.08996382);
   func1008->SetParLimits(0,0,0);
   func1008->SetParameter(1,0.0005183618);
   func1008->SetParError(1,0.0002530321);
   func1008->SetParLimits(1,0,0);
   func1008->SetParameter(2,-4.589928e-07);
   func1008->SetParError(2,2.912604e-07);
   func1008->SetParLimits(2,0,0);
   func1008->SetParameter(3,2.217122e-10);
   func1008->SetParError(3,1.781976e-10);
   func1008->SetParLimits(3,0,0);
   func1008->SetParameter(4,-6.175784e-14);
   func1008->SetParError(4,6.273043e-14);
   func1008->SetParLimits(4,0,0);
   func1008->SetParameter(5,9.784728e-18);
   func1008->SetParError(5,1.273924e-17);
   func1008->SetParLimits(5,0,0);
   func1008->SetParameter(6,-7.950412e-22);
   func1008->SetParError(6,1.385552e-21);
   func1008->SetParLimits(6,0,0);
   func1008->SetParameter(7,2.409854e-26);
   func1008->SetParError(7,6.241569e-26);
   func1008->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1008);
   gre->Draw("p");
   
   TF1 *func1009 = new TF1("func","pol7",1126,5500);
   func1009->SetBit(TF1::kNotDraw);
   func1009->SetFillColor(19);
   func1009->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1009->SetMarkerColor(ci);
   func1009->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   func1009->SetLineColor(ci);
   func1009->SetLineWidth(3);
   func1009->SetChisquare(5.259977);
   func1009->SetNDF(4);
   func1009->GetXaxis()->SetLabelFont(42);
   func1009->GetXaxis()->SetLabelOffset(0.007);
   func1009->GetXaxis()->SetLabelSize(0.05);
   func1009->GetXaxis()->SetTitleSize(0.06);
   func1009->GetXaxis()->SetTitleOffset(0.9);
   func1009->GetXaxis()->SetTitleFont(42);
   func1009->GetYaxis()->SetLabelFont(42);
   func1009->GetYaxis()->SetLabelOffset(0.007);
   func1009->GetYaxis()->SetLabelSize(0.05);
   func1009->GetYaxis()->SetTitleSize(0.06);
   func1009->GetYaxis()->SetTitleOffset(1.25);
   func1009->GetYaxis()->SetTitleFont(42);
   func1009->SetParameter(0,-0.2240538);
   func1009->SetParError(0,0.08996382);
   func1009->SetParLimits(0,0,0);
   func1009->SetParameter(1,0.0005183618);
   func1009->SetParError(1,0.0002530321);
   func1009->SetParLimits(1,0,0);
   func1009->SetParameter(2,-4.589928e-07);
   func1009->SetParError(2,2.912604e-07);
   func1009->SetParLimits(2,0,0);
   func1009->SetParameter(3,2.217122e-10);
   func1009->SetParError(3,1.781976e-10);
   func1009->SetParLimits(3,0,0);
   func1009->SetParameter(4,-6.175784e-14);
   func1009->SetParError(4,6.273043e-14);
   func1009->SetParLimits(4,0,0);
   func1009->SetParameter(5,9.784728e-18);
   func1009->SetParError(5,1.273924e-17);
   func1009->SetParLimits(5,0,0);
   func1009->SetParameter(6,-7.950412e-22);
   func1009->SetParError(6,1.385552e-21);
   func1009->SetParLimits(6,0,0);
   func1009->SetParameter(7,2.409854e-26);
   func1009->SetParError(7,6.241569e-26);
   func1009->SetParLimits(7,0,0);
   func1009->Draw("Csame");
   
   TF1 *func1010 = new TF1("func","pol7",1126,5500);
   func1010->SetBit(TF1::kNotDraw);
   func1010->SetFillColor(19);
   func1010->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1010->SetMarkerColor(ci);
   func1010->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   func1010->SetLineColor(ci);
   func1010->SetLineWidth(3);
   func1010->SetLineStyle(9);
   func1010->SetChisquare(19.03471);
   func1010->SetNDF(4);
   func1010->GetXaxis()->SetLabelFont(42);
   func1010->GetXaxis()->SetLabelOffset(0.007);
   func1010->GetXaxis()->SetLabelSize(0.05);
   func1010->GetXaxis()->SetTitleSize(0.06);
   func1010->GetXaxis()->SetTitleOffset(0.9);
   func1010->GetXaxis()->SetTitleFont(42);
   func1010->GetYaxis()->SetLabelFont(42);
   func1010->GetYaxis()->SetLabelOffset(0.007);
   func1010->GetYaxis()->SetLabelSize(0.05);
   func1010->GetYaxis()->SetTitleSize(0.06);
   func1010->GetYaxis()->SetTitleOffset(1.25);
   func1010->GetYaxis()->SetTitleFont(42);
   func1010->SetParameter(0,-1.038653);
   func1010->SetParError(0,0.1808537);
   func1010->SetParLimits(0,0,0);
   func1010->SetParameter(1,0.002615447);
   func1010->SetParError(1,0.0005008201);
   func1010->SetParLimits(1,0,0);
   func1010->SetParameter(2,-2.454714e-06);
   func1010->SetParError(2,5.672394e-07);
   func1010->SetParLimits(2,0,0);
   func1010->SetParameter(3,1.224287e-09);
   func1010->SetParError(3,3.414397e-10);
   func1010->SetParLimits(3,0,0);
   func1010->SetParameter(4,-3.483837e-13);
   func1010->SetParError(4,1.182957e-13);
   func1010->SetParLimits(4,0,0);
   func1010->SetParameter(5,5.61815e-17);
   func1010->SetParError(5,2.366009e-17);
   func1010->SetParLimits(5,0,0);
   func1010->SetParameter(6,-4.701604e-21);
   func1010->SetParError(6,2.536797e-21);
   func1010->SetParLimits(6,0,0);
   func1010->SetParameter(7,1.540988e-25);
   func1010->SetParError(7,1.127781e-25);
   func1010->SetParLimits(7,0,0);
   func1010->Draw("Csame");
   
   Double_t _fx1009[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1009[13] = {
   0.00324205,
   0.07580801,
   0.09695866,
   0.1051078,
   0.1094583,
   0.1075919,
   0.1133259,
   0.1140146,
   0.1095201,
   0.1125491,
   0.1053866,
   0.1112609,
   0.05885177};
   Double_t _fex1009[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[13] = {
   0.0002400116,
   0.001196481,
   0.001296471,
   0.001375986,
   0.001431868,
   0.001426935,
   0.001555103,
   0.001506971,
   0.001683441,
   0.001748851,
   0.001835213,
   0.002351103,
   0.002339762};
   gre = new TGraphErrors(13,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,550,5950);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(0.1267735);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *func1010 = new TF1("func","pol7",1126,5500);
   func1010->SetBit(TF1::kNotDraw);
   func1010->SetFillColor(19);
   func1010->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1010->SetMarkerColor(ci);
   func1010->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   func1010->SetLineColor(ci);
   func1010->SetLineWidth(3);
   func1010->SetLineStyle(9);
   func1010->SetChisquare(16.93113);
   func1010->SetNDF(4);
   func1010->GetXaxis()->SetLabelFont(42);
   func1010->GetXaxis()->SetLabelOffset(0.007);
   func1010->GetXaxis()->SetLabelSize(0.05);
   func1010->GetXaxis()->SetTitleSize(0.06);
   func1010->GetXaxis()->SetTitleOffset(0.9);
   func1010->GetXaxis()->SetTitleFont(42);
   func1010->GetYaxis()->SetLabelFont(42);
   func1010->GetYaxis()->SetLabelOffset(0.007);
   func1010->GetYaxis()->SetLabelSize(0.05);
   func1010->GetYaxis()->SetTitleSize(0.06);
   func1010->GetYaxis()->SetTitleOffset(1.25);
   func1010->GetYaxis()->SetTitleFont(42);
   func1010->SetParameter(0,-1.027613);
   func1010->SetParError(0,0.3729275);
   func1010->SetParLimits(0,0,0);
   func1010->SetParameter(1,0.002416698);
   func1010->SetParError(1,0.001029732);
   func1010->SetParLimits(1,0,0);
   func1010->SetParameter(2,-2.081504e-06);
   func1010->SetParError(2,1.16137e-06);
   func1010->SetParLimits(2,0,0);
   func1010->SetParameter(3,9.240044e-10);
   func1010->SetParError(3,6.948562e-10);
   func1010->SetParLimits(3,0,0);
   func1010->SetParameter(4,-2.209611e-13);
   func1010->SetParError(4,2.388037e-13);
   func1010->SetParLimits(4,0,0);
   func1010->SetParameter(5,2.646814e-17);
   func1010->SetParError(5,4.728159e-17);
   func1010->SetParLimits(5,0,0);
   func1010->SetParameter(6,-1.112621e-21);
   func1010->SetParError(6,5.009181e-21);
   func1010->SetParLimits(6,0,0);
   func1010->SetParameter(7,-2.095059e-26);
   func1010->SetParError(7,2.197265e-25);
   func1010->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1010);
   gre->Draw("p");
   
   Double_t _fx1011[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1011[13] = {
   0.0001940478,
   0.01265146,
   0.01890704,
   0.02253324,
   0.02579875,
   0.02797173,
   0.03101621,
   0.03540789,
   0.04073793,
   0.04678265,
   0.05400538,
   0.05222836,
   0.026521};
   Double_t _fex1011[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[13] = {
   5.487287e-05,
   0.0004722497,
   0.0005534243,
   0.0006137629,
   0.0006624193,
   0.0007070644,
   0.0007778882,
   0.0008250172,
   0.0009320986,
   0.001374004,
   0.006149874,
   0.001620605,
   0.001338299};
   gre = new TGraphErrors(13,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,550,5950);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(0.06615686);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *func1012 = new TF1("func","pol7",1126,5500);
   func1012->SetBit(TF1::kNotDraw);
   func1012->SetFillColor(19);
   func1012->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1012->SetMarkerColor(ci);
   func1012->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   func1012->SetLineColor(ci);
   func1012->SetLineWidth(3);
   func1012->SetChisquare(0.7817774);
   func1012->SetNDF(4);
   func1012->GetXaxis()->SetLabelFont(42);
   func1012->GetXaxis()->SetLabelOffset(0.007);
   func1012->GetXaxis()->SetLabelSize(0.05);
   func1012->GetXaxis()->SetTitleSize(0.06);
   func1012->GetXaxis()->SetTitleOffset(0.9);
   func1012->GetXaxis()->SetTitleFont(42);
   func1012->GetYaxis()->SetLabelFont(42);
   func1012->GetYaxis()->SetLabelOffset(0.007);
   func1012->GetYaxis()->SetLabelSize(0.05);
   func1012->GetYaxis()->SetTitleSize(0.06);
   func1012->GetYaxis()->SetTitleOffset(1.25);
   func1012->GetYaxis()->SetTitleFont(42);
   func1012->SetParameter(0,-0.06248461);
   func1012->SetParError(0,0.2225994);
   func1012->SetParLimits(0,0,0);
   func1012->SetParameter(1,5.486096e-05);
   func1012->SetParError(1,0.0006346419);
   func1012->SetParLimits(1,0,0);
   func1012->SetParameter(2,7.164675e-08);
   func1012->SetParError(2,7.401692e-07);
   func1012->SetParLimits(2,0,0);
   func1012->SetParameter(3,-9.626915e-11);
   func1012->SetParError(3,4.580717e-10);
   func1012->SetParLimits(3,0,0);
   func1012->SetParameter(4,4.680106e-14);
   func1012->SetParError(4,1.62678e-13);
   func1012->SetParLimits(4,0,0);
   func1012->SetParameter(5,-1.146831e-17);
   func1012->SetParError(5,3.321403e-17);
   func1012->SetParLimits(5,0,0);
   func1012->SetParameter(6,1.429686e-21);
   func1012->SetParError(6,3.61795e-21);
   func1012->SetParLimits(6,0,0);
   func1012->SetParameter(7,-7.255193e-26);
   func1012->SetParError(7,1.626162e-25);
   func1012->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1012);
   gre->Draw("p");
   
   TF1 *func1013 = new TF1("func","pol7",1126,5500);
   func1013->SetBit(TF1::kNotDraw);
   func1013->SetFillColor(19);
   func1013->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1013->SetMarkerColor(ci);
   func1013->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   func1013->SetLineColor(ci);
   func1013->SetLineWidth(3);
   func1013->SetChisquare(0.7817774);
   func1013->SetNDF(4);
   func1013->GetXaxis()->SetLabelFont(42);
   func1013->GetXaxis()->SetLabelOffset(0.007);
   func1013->GetXaxis()->SetLabelSize(0.05);
   func1013->GetXaxis()->SetTitleSize(0.06);
   func1013->GetXaxis()->SetTitleOffset(0.9);
   func1013->GetXaxis()->SetTitleFont(42);
   func1013->GetYaxis()->SetLabelFont(42);
   func1013->GetYaxis()->SetLabelOffset(0.007);
   func1013->GetYaxis()->SetLabelSize(0.05);
   func1013->GetYaxis()->SetTitleSize(0.06);
   func1013->GetYaxis()->SetTitleOffset(1.25);
   func1013->GetYaxis()->SetTitleFont(42);
   func1013->SetParameter(0,-0.06248461);
   func1013->SetParError(0,0.2225994);
   func1013->SetParLimits(0,0,0);
   func1013->SetParameter(1,5.486096e-05);
   func1013->SetParError(1,0.0006346419);
   func1013->SetParLimits(1,0,0);
   func1013->SetParameter(2,7.164675e-08);
   func1013->SetParError(2,7.401692e-07);
   func1013->SetParLimits(2,0,0);
   func1013->SetParameter(3,-9.626915e-11);
   func1013->SetParError(3,4.580717e-10);
   func1013->SetParLimits(3,0,0);
   func1013->SetParameter(4,4.680106e-14);
   func1013->SetParError(4,1.62678e-13);
   func1013->SetParLimits(4,0,0);
   func1013->SetParameter(5,-1.146831e-17);
   func1013->SetParError(5,3.321403e-17);
   func1013->SetParLimits(5,0,0);
   func1013->SetParameter(6,1.429686e-21);
   func1013->SetParError(6,3.61795e-21);
   func1013->SetParLimits(6,0,0);
   func1013->SetParameter(7,-7.255193e-26);
   func1013->SetParError(7,1.626162e-25);
   func1013->SetParLimits(7,0,0);
   func1013->Draw("Csame");
   
   TF1 *func1014 = new TF1("func","pol7",1126,5500);
   func1014->SetBit(TF1::kNotDraw);
   func1014->SetFillColor(19);
   func1014->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1014->SetMarkerColor(ci);
   func1014->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   func1014->SetLineColor(ci);
   func1014->SetLineWidth(3);
   func1014->SetLineStyle(9);
   func1014->SetChisquare(16.93113);
   func1014->SetNDF(4);
   func1014->GetXaxis()->SetLabelFont(42);
   func1014->GetXaxis()->SetLabelOffset(0.007);
   func1014->GetXaxis()->SetLabelSize(0.05);
   func1014->GetXaxis()->SetTitleSize(0.06);
   func1014->GetXaxis()->SetTitleOffset(0.9);
   func1014->GetXaxis()->SetTitleFont(42);
   func1014->GetYaxis()->SetLabelFont(42);
   func1014->GetYaxis()->SetLabelOffset(0.007);
   func1014->GetYaxis()->SetLabelSize(0.05);
   func1014->GetYaxis()->SetTitleSize(0.06);
   func1014->GetYaxis()->SetTitleOffset(1.25);
   func1014->GetYaxis()->SetTitleFont(42);
   func1014->SetParameter(0,-1.027613);
   func1014->SetParError(0,0.3729275);
   func1014->SetParLimits(0,0,0);
   func1014->SetParameter(1,0.002416698);
   func1014->SetParError(1,0.001029732);
   func1014->SetParLimits(1,0,0);
   func1014->SetParameter(2,-2.081504e-06);
   func1014->SetParError(2,1.16137e-06);
   func1014->SetParLimits(2,0,0);
   func1014->SetParameter(3,9.240044e-10);
   func1014->SetParError(3,6.948562e-10);
   func1014->SetParLimits(3,0,0);
   func1014->SetParameter(4,-2.209611e-13);
   func1014->SetParError(4,2.388037e-13);
   func1014->SetParLimits(4,0,0);
   func1014->SetParameter(5,2.646814e-17);
   func1014->SetParError(5,4.728159e-17);
   func1014->SetParLimits(5,0,0);
   func1014->SetParameter(6,-1.112621e-21);
   func1014->SetParError(6,5.009181e-21);
   func1014->SetParLimits(6,0,0);
   func1014->SetParameter(7,-2.095059e-26);
   func1014->SetParError(7,2.197265e-25);
   func1014->SetParLimits(7,0,0);
   func1014->Draw("Csame");
   
   Double_t _fx1013[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1013[13] = {
   0.00528445,
   0.07763552,
   0.1026281,
   0.110746,
   0.1165248,
   0.1185136,
   0.1221205,
   0.123586,
   0.12392,
   0.1244962,
   0.1244501,
   0.1253129,
   0.0706149};
   Double_t _fex1013[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[13] = {
   9.837814e-05,
   0.0003919592,
   0.000497705,
   0.0004518631,
   0.0004710332,
   0.0004743078,
   0.0004871583,
   0.000514299,
   0.0004893197,
   0.0005278574,
   0.0005011494,
   0.001661982,
   0.001218579};
   gre = new TGraphErrors(13,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(91);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,550,5950);
   Graph_Graph1013->SetMinimum(0);
   Graph_Graph1013->SetMaximum(0.1391537);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *func1014 = new TF1("func","pol7",1126,5500);
   func1014->SetBit(TF1::kNotDraw);
   func1014->SetFillColor(19);
   func1014->SetFillStyle(0);
   func1014->SetMarkerColor(91);
   func1014->SetMarkerStyle(24);
   func1014->SetLineColor(91);
   func1014->SetLineWidth(3);
   func1014->SetLineStyle(9);
   func1014->SetChisquare(33.91611);
   func1014->SetNDF(4);
   func1014->GetXaxis()->SetLabelFont(42);
   func1014->GetXaxis()->SetLabelOffset(0.007);
   func1014->GetXaxis()->SetLabelSize(0.05);
   func1014->GetXaxis()->SetTitleSize(0.06);
   func1014->GetXaxis()->SetTitleOffset(0.9);
   func1014->GetXaxis()->SetTitleFont(42);
   func1014->GetYaxis()->SetLabelFont(42);
   func1014->GetYaxis()->SetLabelOffset(0.007);
   func1014->GetYaxis()->SetLabelSize(0.05);
   func1014->GetYaxis()->SetTitleSize(0.06);
   func1014->GetYaxis()->SetTitleOffset(1.25);
   func1014->GetYaxis()->SetTitleFont(42);
   func1014->SetParameter(0,-1.155025);
   func1014->SetParError(0,0.1345477);
   func1014->SetParLimits(0,0,0);
   func1014->SetParameter(1,0.002755809);
   func1014->SetParError(1,0.0003732246);
   func1014->SetParLimits(1,0,0);
   func1014->SetParameter(2,-2.472168e-06);
   func1014->SetParError(2,4.232354e-07);
   func1014->SetParLimits(2,0,0);
   func1014->SetParameter(3,1.180422e-09);
   func1014->SetParError(3,2.549676e-10);
   func1014->SetParLimits(3,0,0);
   func1014->SetParameter(4,-3.203763e-13);
   func1014->SetParError(4,8.838509e-14);
   func1014->SetParLimits(4,0,0);
   func1014->SetParameter(5,4.875687e-17);
   func1014->SetParError(5,1.768512e-17);
   func1014->SetParLimits(5,0,0);
   func1014->SetParameter(6,-3.762665e-21);
   func1014->SetParError(6,1.896906e-21);
   func1014->SetParLimits(6,0,0);
   func1014->SetParameter(7,1.076619e-25);
   func1014->SetParError(7,8.436584e-26);
   func1014->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1014);
   gre->Draw("p");
   
   Double_t _fx1015[13] = {
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1015[13] = {
   0.0003018211,
   0.01107594,
   0.01693146,
   0.02175883,
   0.02482737,
   0.02772256,
   0.03163652,
   0.03531789,
   0.03926303,
   0.04424938,
   0.04900074,
   0.05152758,
   0.03064123};
   Double_t _fex1015[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[13] = {
   2.236886e-05,
   0.0001428402,
   0.0001694993,
   0.0001916224,
   0.0002078154,
   0.0002161332,
   0.0002359972,
   0.0002630362,
   0.000261987,
   0.0002930158,
   0.0003137721,
   0.001017884,
   0.0008042661};
   gre = new TGraphErrors(13,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(91);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(91);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,550,5950);
   Graph_Graph1015->SetMinimum(0);
   Graph_Graph1015->SetMaximum(0.05777207);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *func1016 = new TF1("func","pol7",1126,5500);
   func1016->SetBit(TF1::kNotDraw);
   func1016->SetFillColor(19);
   func1016->SetFillStyle(0);
   func1016->SetMarkerColor(91);
   func1016->SetMarkerStyle(8);
   func1016->SetLineColor(91);
   func1016->SetLineWidth(3);
   func1016->SetChisquare(3.548597);
   func1016->SetNDF(4);
   func1016->GetXaxis()->SetLabelFont(42);
   func1016->GetXaxis()->SetLabelOffset(0.007);
   func1016->GetXaxis()->SetLabelSize(0.05);
   func1016->GetXaxis()->SetTitleSize(0.06);
   func1016->GetXaxis()->SetTitleOffset(0.9);
   func1016->GetXaxis()->SetTitleFont(42);
   func1016->GetYaxis()->SetLabelFont(42);
   func1016->GetYaxis()->SetLabelOffset(0.007);
   func1016->GetYaxis()->SetLabelSize(0.05);
   func1016->GetYaxis()->SetTitleSize(0.06);
   func1016->GetYaxis()->SetTitleOffset(1.25);
   func1016->GetYaxis()->SetTitleFont(42);
   func1016->SetParameter(0,0.02868829);
   func1016->SetParError(0,0.05995573);
   func1016->SetParLimits(0,0,0);
   func1016->SetParameter(1,-0.000190106);
   func1016->SetParError(1,0.0001693588);
   func1016->SetParLimits(1,0,0);
   func1016->SetParameter(2,3.317615e-07);
   func1016->SetParError(2,1.957516e-07);
   func1016->SetParLimits(2,0,0);
   func1016->SetParameter(3,-2.421315e-10);
   func1016->SetParError(3,1.201996e-10);
   func1016->SetParLimits(3,0,0);
   func1016->SetParameter(4,9.437064e-14);
   func1016->SetParError(4,4.244177e-14);
   func1016->SetParLimits(4,0,0);
   func1016->SetParameter(5,-2.057455e-17);
   func1016->SetParError(5,8.640205e-18);
   func1016->SetParLimits(5,0,0);
   func1016->SetParameter(6,2.376842e-21);
   func1016->SetParError(6,9.41582e-22);
   func1016->SetParLimits(6,0,0);
   func1016->SetParameter(7,-1.136511e-25);
   func1016->SetParError(7,4.248336e-26);
   func1016->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1016);
   gre->Draw("p");
   
   TF1 *func1017 = new TF1("func","pol7",1126,5500);
   func1017->SetBit(TF1::kNotDraw);
   func1017->SetFillColor(19);
   func1017->SetFillStyle(0);
   func1017->SetMarkerColor(91);
   func1017->SetMarkerStyle(8);
   func1017->SetLineColor(91);
   func1017->SetLineWidth(3);
   func1017->SetChisquare(3.548597);
   func1017->SetNDF(4);
   func1017->GetXaxis()->SetLabelFont(42);
   func1017->GetXaxis()->SetLabelOffset(0.007);
   func1017->GetXaxis()->SetLabelSize(0.05);
   func1017->GetXaxis()->SetTitleSize(0.06);
   func1017->GetXaxis()->SetTitleOffset(0.9);
   func1017->GetXaxis()->SetTitleFont(42);
   func1017->GetYaxis()->SetLabelFont(42);
   func1017->GetYaxis()->SetLabelOffset(0.007);
   func1017->GetYaxis()->SetLabelSize(0.05);
   func1017->GetYaxis()->SetTitleSize(0.06);
   func1017->GetYaxis()->SetTitleOffset(1.25);
   func1017->GetYaxis()->SetTitleFont(42);
   func1017->SetParameter(0,0.02868829);
   func1017->SetParError(0,0.05995573);
   func1017->SetParLimits(0,0,0);
   func1017->SetParameter(1,-0.000190106);
   func1017->SetParError(1,0.0001693588);
   func1017->SetParLimits(1,0,0);
   func1017->SetParameter(2,3.317615e-07);
   func1017->SetParError(2,1.957516e-07);
   func1017->SetParLimits(2,0,0);
   func1017->SetParameter(3,-2.421315e-10);
   func1017->SetParError(3,1.201996e-10);
   func1017->SetParLimits(3,0,0);
   func1017->SetParameter(4,9.437064e-14);
   func1017->SetParError(4,4.244177e-14);
   func1017->SetParLimits(4,0,0);
   func1017->SetParameter(5,-2.057455e-17);
   func1017->SetParError(5,8.640205e-18);
   func1017->SetParLimits(5,0,0);
   func1017->SetParameter(6,2.376842e-21);
   func1017->SetParError(6,9.41582e-22);
   func1017->SetParLimits(6,0,0);
   func1017->SetParameter(7,-1.136511e-25);
   func1017->SetParError(7,4.248336e-26);
   func1017->SetParLimits(7,0,0);
   func1017->Draw("Csame");
   
   TF1 *func1018 = new TF1("func","pol7",1126,5500);
   func1018->SetBit(TF1::kNotDraw);
   func1018->SetFillColor(19);
   func1018->SetFillStyle(0);
   func1018->SetMarkerColor(91);
   func1018->SetMarkerStyle(24);
   func1018->SetLineColor(91);
   func1018->SetLineWidth(3);
   func1018->SetLineStyle(9);
   func1018->SetChisquare(33.91611);
   func1018->SetNDF(4);
   func1018->GetXaxis()->SetLabelFont(42);
   func1018->GetXaxis()->SetLabelOffset(0.007);
   func1018->GetXaxis()->SetLabelSize(0.05);
   func1018->GetXaxis()->SetTitleSize(0.06);
   func1018->GetXaxis()->SetTitleOffset(0.9);
   func1018->GetXaxis()->SetTitleFont(42);
   func1018->GetYaxis()->SetLabelFont(42);
   func1018->GetYaxis()->SetLabelOffset(0.007);
   func1018->GetYaxis()->SetLabelSize(0.05);
   func1018->GetYaxis()->SetTitleSize(0.06);
   func1018->GetYaxis()->SetTitleOffset(1.25);
   func1018->GetYaxis()->SetTitleFont(42);
   func1018->SetParameter(0,-1.155025);
   func1018->SetParError(0,0.1345477);
   func1018->SetParLimits(0,0,0);
   func1018->SetParameter(1,0.002755809);
   func1018->SetParError(1,0.0003732246);
   func1018->SetParLimits(1,0,0);
   func1018->SetParameter(2,-2.472168e-06);
   func1018->SetParError(2,4.232354e-07);
   func1018->SetParLimits(2,0,0);
   func1018->SetParameter(3,1.180422e-09);
   func1018->SetParError(3,2.549676e-10);
   func1018->SetParLimits(3,0,0);
   func1018->SetParameter(4,-3.203763e-13);
   func1018->SetParError(4,8.838509e-14);
   func1018->SetParLimits(4,0,0);
   func1018->SetParameter(5,4.875687e-17);
   func1018->SetParError(5,1.768512e-17);
   func1018->SetParLimits(5,0,0);
   func1018->SetParameter(6,-3.762665e-21);
   func1018->SetParError(6,1.896906e-21);
   func1018->SetParLimits(6,0,0);
   func1018->SetParameter(7,1.076619e-25);
   func1018->SetParError(7,8.436584e-26);
   func1018->SetParLimits(7,0,0);
   func1018->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","G_{B}#rightarrow ZZ","L");
   entry->SetLineColor(91);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.7788945,0.1783217,0.9974874,0.2482517,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("func","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","HPLP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
