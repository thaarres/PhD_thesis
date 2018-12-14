void Signal_mjetl2_sigma()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:18:47 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-3.71134,5728.857,22.06186);
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
   
   Double_t _fx1143[13] = {
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
   Double_t _fy1143[13] = {
   6.81098,
   7.459192,
   6.987688,
   6.712163,
   6.761285,
   6.590792,
   6.970132,
   7.326551,
   7.980404,
   7.909304,
   7.935075,
   8.59607,
   8.363249};
   Double_t _fex1143[13] = {
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
   Double_t _fey1143[13] = {
   0.1706657,
   0.1191619,
   0.1152954,
   0.09614605,
   0.09889923,
   0.09226033,
   0.09764522,
   0.1078604,
   0.1058739,
   0.1485436,
   0.1308514,
   0.1824107,
   0.2323088};
   TGraphErrors *gre = new TGraphErrors(13,_fx1143,_fy1143,_fex1143,_fey1143);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1143 = new TH1F("Graph_Graph1143","",100,550,5950);
   Graph_Graph1143->SetMinimum(0);
   Graph_Graph1143->SetMaximum(20);
   Graph_Graph1143->SetDirectory(0);
   Graph_Graph1143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1143->SetLineColor(ci);
   Graph_Graph1143->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1143->GetXaxis()->SetRange(11,92);
   Graph_Graph1143->GetXaxis()->SetNdivisions(209);
   Graph_Graph1143->GetXaxis()->SetLabelFont(42);
   Graph_Graph1143->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1143->GetXaxis()->SetTitleFont(42);
   Graph_Graph1143->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph1143->GetYaxis()->SetNdivisions(504);
   Graph_Graph1143->GetYaxis()->SetLabelFont(42);
   Graph_Graph1143->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1143->GetYaxis()->SetTitleFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1143);
   
   
   TF1 *sigma_func1144 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1144->SetBit(TF1::kNotDraw);
   sigma_func1144->SetFillColor(19);
   sigma_func1144->SetFillStyle(0);
   sigma_func1144->SetLineColor(2);
   sigma_func1144->SetLineWidth(2);
   sigma_func1144->SetChisquare(44.46152);
   sigma_func1144->SetNDF(9);
   sigma_func1144->GetXaxis()->SetLabelFont(42);
   sigma_func1144->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1144->GetXaxis()->SetLabelSize(0.05);
   sigma_func1144->GetXaxis()->SetTitleSize(0.06);
   sigma_func1144->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1144->GetXaxis()->SetTitleFont(42);
   sigma_func1144->GetYaxis()->SetLabelFont(42);
   sigma_func1144->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1144->GetYaxis()->SetLabelSize(0.05);
   sigma_func1144->GetYaxis()->SetTitleSize(0.06);
   sigma_func1144->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1144->GetYaxis()->SetTitleFont(42);
   sigma_func1144->SetParameter(0,9.385356);
   sigma_func1144->SetParError(0,0.456446);
   sigma_func1144->SetParLimits(0,0,0);
   sigma_func1144->SetParameter(1,-0.003198909);
   sigma_func1144->SetParError(1,0.0005281943);
   sigma_func1144->SetParLimits(1,0,0);
   sigma_func1144->SetParameter(2,1.180348e-06);
   sigma_func1144->SetParError(2,1.83532e-07);
   sigma_func1144->SetParLimits(2,0,0);
   sigma_func1144->SetParameter(3,-1.16049e-10);
   sigma_func1144->SetParError(3,1.951364e-11);
   sigma_func1144->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1144);
   gre->Draw("ap");
   
   Double_t _fx1145[13] = {
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
   Double_t _fy1145[13] = {
   7.224608,
   7.464472,
   7.518694,
   7.225864,
   7.527546,
   7.270789,
   7.603983,
   7.696822,
   7.90928,
   8.933776,
   8.926682,
   8.783475,
   9.053308};
   Double_t _fex1145[13] = {
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
   Double_t _fey1145[13] = {
   0.1604664,
   0.1720127,
   0.1725225,
   0.1570546,
   0.1686665,
   0.1583158,
   0.182717,
   0.179986,
   0.246814,
   0.1910663,
   0.3284587,
   0.2285066,
   0.3789287};
   gre = new TGraphErrors(13,_fx1145,_fy1145,_fex1145,_fey1145);
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
   
   TH1F *Graph_Graph1145 = new TH1F("Graph_Graph1145","",100,550,5950);
   Graph_Graph1145->SetMinimum(6.827332);
   Graph_Graph1145->SetMaximum(9.669046);
   Graph_Graph1145->SetDirectory(0);
   Graph_Graph1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1145->SetLineColor(ci);
   Graph_Graph1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph1145->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph1145->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1145);
   
   
   TF1 *sigma_func1146 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1146->SetBit(TF1::kNotDraw);
   sigma_func1146->SetFillColor(19);
   sigma_func1146->SetFillStyle(0);
   sigma_func1146->SetLineColor(2);
   sigma_func1146->SetLineWidth(2);
   sigma_func1146->SetChisquare(13.09019);
   sigma_func1146->SetNDF(9);
   sigma_func1146->GetXaxis()->SetLabelFont(42);
   sigma_func1146->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1146->GetXaxis()->SetLabelSize(0.05);
   sigma_func1146->GetXaxis()->SetTitleSize(0.06);
   sigma_func1146->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1146->GetXaxis()->SetTitleFont(42);
   sigma_func1146->GetYaxis()->SetLabelFont(42);
   sigma_func1146->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1146->GetYaxis()->SetLabelSize(0.05);
   sigma_func1146->GetYaxis()->SetTitleSize(0.06);
   sigma_func1146->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1146->GetYaxis()->SetTitleFont(42);
   sigma_func1146->SetParameter(0,8.388262);
   sigma_func1146->SetParError(0,0.6137075);
   sigma_func1146->SetParLimits(0,0,0);
   sigma_func1146->SetParameter(1,-0.001573249);
   sigma_func1146->SetParError(1,0.000752006);
   sigma_func1146->SetParLimits(1,0,0);
   sigma_func1146->SetParameter(2,6.657207e-07);
   sigma_func1146->SetParError(2,2.711087e-07);
   sigma_func1146->SetParLimits(2,0,0);
   sigma_func1146->SetParameter(3,-6.54897e-11);
   sigma_func1146->SetParError(3,2.946846e-11);
   sigma_func1146->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1146);
   gre->Draw("p");
   
   Double_t _fx1147[13] = {
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
   Double_t _fy1147[13] = {
   6.81098,
   7.459192,
   6.987688,
   6.712163,
   6.761285,
   6.590792,
   6.970132,
   7.326551,
   7.980404,
   7.909304,
   7.935075,
   8.59607,
   8.363249};
   Double_t _fex1147[13] = {
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
   Double_t _fey1147[13] = {
   0.1706657,
   0.1191619,
   0.1152954,
   0.09614605,
   0.09889923,
   0.09226033,
   0.09764522,
   0.1078604,
   0.1058739,
   0.1485436,
   0.1308514,
   0.1824107,
   0.2323088};
   gre = new TGraphErrors(13,_fx1147,_fy1147,_fex1147,_fey1147);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11431147 = new TH1F("Graph_Graph_Graph11431147","",100,550,5950);
   Graph_Graph_Graph11431147->SetMinimum(0);
   Graph_Graph_Graph11431147->SetMaximum(20);
   Graph_Graph_Graph11431147->SetDirectory(0);
   Graph_Graph_Graph11431147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11431147->SetLineColor(ci);
   Graph_Graph_Graph11431147->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph11431147->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph11431147->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11431147->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11431147->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11431147->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11431147->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11431147->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11431147->GetYaxis()->SetTitle("sigma (GeV)");
   Graph_Graph_Graph11431147->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11431147->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11431147->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11431147->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11431147->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11431147->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11431147->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11431147->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11431147->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11431147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11431147);
   
   
   TF1 *sigma_func1148 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1148->SetBit(TF1::kNotDraw);
   sigma_func1148->SetFillColor(19);
   sigma_func1148->SetFillStyle(0);
   sigma_func1148->SetLineColor(2);
   sigma_func1148->SetLineWidth(2);
   sigma_func1148->SetChisquare(44.46152);
   sigma_func1148->SetNDF(9);
   sigma_func1148->GetXaxis()->SetLabelFont(42);
   sigma_func1148->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1148->GetXaxis()->SetLabelSize(0.05);
   sigma_func1148->GetXaxis()->SetTitleSize(0.06);
   sigma_func1148->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1148->GetXaxis()->SetTitleFont(42);
   sigma_func1148->GetYaxis()->SetLabelFont(42);
   sigma_func1148->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1148->GetYaxis()->SetLabelSize(0.05);
   sigma_func1148->GetYaxis()->SetTitleSize(0.06);
   sigma_func1148->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1148->GetYaxis()->SetTitleFont(42);
   sigma_func1148->SetParameter(0,9.385356);
   sigma_func1148->SetParError(0,0.456446);
   sigma_func1148->SetParLimits(0,0,0);
   sigma_func1148->SetParameter(1,-0.003198909);
   sigma_func1148->SetParError(1,0.0005281943);
   sigma_func1148->SetParLimits(1,0,0);
   sigma_func1148->SetParameter(2,1.180348e-06);
   sigma_func1148->SetParError(2,1.83532e-07);
   sigma_func1148->SetParLimits(2,0,0);
   sigma_func1148->SetParameter(3,-1.16049e-10);
   sigma_func1148->SetParError(3,1.951364e-11);
   sigma_func1148->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1148);
   gre->Draw("p");
   
   TF1 *sigma_func1149 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1149->SetFillColor(19);
   sigma_func1149->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   sigma_func1149->SetMarkerColor(ci);
   sigma_func1149->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   sigma_func1149->SetLineColor(ci);
   sigma_func1149->SetLineWidth(3);
   sigma_func1149->SetChisquare(44.46152);
   sigma_func1149->SetNDF(9);
   sigma_func1149->GetXaxis()->SetLabelFont(42);
   sigma_func1149->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1149->GetXaxis()->SetLabelSize(0.05);
   sigma_func1149->GetXaxis()->SetTitleSize(0.06);
   sigma_func1149->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1149->GetXaxis()->SetTitleFont(42);
   sigma_func1149->GetYaxis()->SetLabelFont(42);
   sigma_func1149->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1149->GetYaxis()->SetLabelSize(0.05);
   sigma_func1149->GetYaxis()->SetTitleSize(0.06);
   sigma_func1149->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1149->GetYaxis()->SetTitleFont(42);
   sigma_func1149->SetParameter(0,9.385356);
   sigma_func1149->SetParError(0,0.456446);
   sigma_func1149->SetParLimits(0,0,0);
   sigma_func1149->SetParameter(1,-0.003198909);
   sigma_func1149->SetParError(1,0.0005281943);
   sigma_func1149->SetParLimits(1,0,0);
   sigma_func1149->SetParameter(2,1.180348e-06);
   sigma_func1149->SetParError(2,1.83532e-07);
   sigma_func1149->SetParLimits(2,0,0);
   sigma_func1149->SetParameter(3,-1.16049e-10);
   sigma_func1149->SetParError(3,1.951364e-11);
   sigma_func1149->SetParLimits(3,0,0);
   sigma_func1149->Draw("Csame");
   
   TF1 *sigma_func1150 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1150->SetFillColor(19);
   sigma_func1150->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   sigma_func1150->SetMarkerColor(ci);
   sigma_func1150->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   sigma_func1150->SetLineColor(ci);
   sigma_func1150->SetLineWidth(3);
   sigma_func1150->SetLineStyle(9);
   sigma_func1150->SetChisquare(13.09019);
   sigma_func1150->SetNDF(9);
   sigma_func1150->GetXaxis()->SetLabelFont(42);
   sigma_func1150->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1150->GetXaxis()->SetLabelSize(0.05);
   sigma_func1150->GetXaxis()->SetTitleSize(0.06);
   sigma_func1150->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1150->GetXaxis()->SetTitleFont(42);
   sigma_func1150->GetYaxis()->SetLabelFont(42);
   sigma_func1150->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1150->GetYaxis()->SetLabelSize(0.05);
   sigma_func1150->GetYaxis()->SetTitleSize(0.06);
   sigma_func1150->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1150->GetYaxis()->SetTitleFont(42);
   sigma_func1150->SetParameter(0,8.388262);
   sigma_func1150->SetParError(0,0.6137075);
   sigma_func1150->SetParLimits(0,0,0);
   sigma_func1150->SetParameter(1,-0.001573249);
   sigma_func1150->SetParError(1,0.000752006);
   sigma_func1150->SetParLimits(1,0,0);
   sigma_func1150->SetParameter(2,6.657207e-07);
   sigma_func1150->SetParError(2,2.711087e-07);
   sigma_func1150->SetParLimits(2,0,0);
   sigma_func1150->SetParameter(3,-6.54897e-11);
   sigma_func1150->SetParError(3,2.946846e-11);
   sigma_func1150->SetParLimits(3,0,0);
   sigma_func1150->Draw("Csame");
   
   Double_t _fx1149[13] = {
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
   Double_t _fy1149[13] = {
   7.323049,
   7.391361,
   7.287172,
   7.246444,
   7.26126,
   7.202233,
   7.429507,
   7.639368,
   7.913001,
   8.191892,
   9.065233,
   8.71608,
   9.545066};
   Double_t _fex1149[13] = {
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
   Double_t _fey1149[13] = {
   0.04501184,
   0.041616,
   0.04122416,
   0.04004096,
   0.03884917,
   0.03805722,
   0.04075372,
   0.04400073,
   0.05040126,
   0.06245672,
   0.04954622,
   0.1804239,
   0.1577988};
   gre = new TGraphErrors(13,_fx1149,_fy1149,_fex1149,_fey1149);
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
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","",100,550,5950);
   Graph_Graph1149->SetMinimum(6.910307);
   Graph_Graph1149->SetMaximum(9.956734);
   Graph_Graph1149->SetDirectory(0);
   Graph_Graph1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1149->SetLineColor(ci);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1149->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1149);
   
   
   TF1 *sigma_func1150 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1150->SetBit(TF1::kNotDraw);
   sigma_func1150->SetFillColor(19);
   sigma_func1150->SetFillStyle(0);
   sigma_func1150->SetLineColor(2);
   sigma_func1150->SetLineWidth(2);
   sigma_func1150->SetChisquare(55.11982);
   sigma_func1150->SetNDF(9);
   sigma_func1150->GetXaxis()->SetLabelFont(42);
   sigma_func1150->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1150->GetXaxis()->SetLabelSize(0.05);
   sigma_func1150->GetXaxis()->SetTitleSize(0.06);
   sigma_func1150->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1150->GetXaxis()->SetTitleFont(42);
   sigma_func1150->GetYaxis()->SetLabelFont(42);
   sigma_func1150->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1150->GetYaxis()->SetLabelSize(0.05);
   sigma_func1150->GetYaxis()->SetTitleSize(0.06);
   sigma_func1150->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1150->GetYaxis()->SetTitleFont(42);
   sigma_func1150->SetParameter(0,8.291829);
   sigma_func1150->SetParError(0,0.1669817);
   sigma_func1150->SetParLimits(0,0,0);
   sigma_func1150->SetParameter(1,-0.001309617);
   sigma_func1150->SetParError(1,0.0002078606);
   sigma_func1150->SetParLimits(1,0,0);
   sigma_func1150->SetParameter(2,4.563518e-07);
   sigma_func1150->SetParError(2,7.76562e-08);
   sigma_func1150->SetParLimits(2,0,0);
   sigma_func1150->SetParameter(3,-3.067339e-11);
   sigma_func1150->SetParError(3,8.880914e-12);
   sigma_func1150->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1150);
   gre->Draw("p");
   
   Double_t _fx1151[13] = {
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
   Double_t _fy1151[13] = {
   6.728885,
   6.740456,
   6.717755,
   6.769714,
   6.782931,
   6.383623,
   6.726811,
   7.034975,
   7.444671,
   7.7041,
   7.899516,
   8.239848,
   8.239935};
   Double_t _fex1151[13] = {
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
   Double_t _fey1151[13] = {
   0.04398013,
   0.03916887,
   0.03801699,
   0.03829244,
   0.02710782,
   0.04567009,
   0.03263152,
   0.03377182,
   0.02733381,
   0.0279514,
   0.0278754,
   0.09154165,
   0.08238885};
   gre = new TGraphErrors(13,_fx1151,_fy1151,_fex1151,_fey1151);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1151 = new TH1F("Graph_Graph1151","",100,550,5950);
   Graph_Graph1151->SetMinimum(6.138609);
   Graph_Graph1151->SetMaximum(8.530733);
   Graph_Graph1151->SetDirectory(0);
   Graph_Graph1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1151->SetLineColor(ci);
   Graph_Graph1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph1151->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1151->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph1151->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1151->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph1151->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1151->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1151);
   
   
   TF1 *sigma_func1152 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1152->SetBit(TF1::kNotDraw);
   sigma_func1152->SetFillColor(19);
   sigma_func1152->SetFillStyle(0);
   sigma_func1152->SetLineColor(2);
   sigma_func1152->SetLineWidth(2);
   sigma_func1152->SetChisquare(102.9214);
   sigma_func1152->SetNDF(9);
   sigma_func1152->GetXaxis()->SetLabelFont(42);
   sigma_func1152->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1152->GetXaxis()->SetLabelSize(0.05);
   sigma_func1152->GetXaxis()->SetTitleSize(0.06);
   sigma_func1152->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1152->GetXaxis()->SetTitleFont(42);
   sigma_func1152->GetYaxis()->SetLabelFont(42);
   sigma_func1152->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1152->GetYaxis()->SetLabelSize(0.05);
   sigma_func1152->GetYaxis()->SetTitleSize(0.06);
   sigma_func1152->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1152->GetYaxis()->SetTitleFont(42);
   sigma_func1152->SetParameter(0,7.856354);
   sigma_func1152->SetParError(0,0.1352484);
   sigma_func1152->SetParLimits(0,0,0);
   sigma_func1152->SetParameter(1,-0.001568228);
   sigma_func1152->SetParError(1,0.0001578338);
   sigma_func1152->SetParLimits(1,0,0);
   sigma_func1152->SetParameter(2,6.024814e-07);
   sigma_func1152->SetParError(2,5.487991e-08);
   sigma_func1152->SetParLimits(2,0,0);
   sigma_func1152->SetParameter(3,-5.543818e-11);
   sigma_func1152->SetParError(3,5.906543e-12);
   sigma_func1152->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1152);
   gre->Draw("p");
   
   TF1 *sigma_func1153 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1153->SetFillColor(19);
   sigma_func1153->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1153->SetMarkerColor(ci);
   sigma_func1153->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1153->SetLineColor(ci);
   sigma_func1153->SetLineWidth(3);
   sigma_func1153->SetChisquare(102.9214);
   sigma_func1153->SetNDF(9);
   sigma_func1153->GetXaxis()->SetLabelFont(42);
   sigma_func1153->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1153->GetXaxis()->SetLabelSize(0.05);
   sigma_func1153->GetXaxis()->SetTitleSize(0.06);
   sigma_func1153->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1153->GetXaxis()->SetTitleFont(42);
   sigma_func1153->GetYaxis()->SetLabelFont(42);
   sigma_func1153->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1153->GetYaxis()->SetLabelSize(0.05);
   sigma_func1153->GetYaxis()->SetTitleSize(0.06);
   sigma_func1153->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1153->GetYaxis()->SetTitleFont(42);
   sigma_func1153->SetParameter(0,7.856354);
   sigma_func1153->SetParError(0,0.1352484);
   sigma_func1153->SetParLimits(0,0,0);
   sigma_func1153->SetParameter(1,-0.001568228);
   sigma_func1153->SetParError(1,0.0001578338);
   sigma_func1153->SetParLimits(1,0,0);
   sigma_func1153->SetParameter(2,6.024814e-07);
   sigma_func1153->SetParError(2,5.487991e-08);
   sigma_func1153->SetParLimits(2,0,0);
   sigma_func1153->SetParameter(3,-5.543818e-11);
   sigma_func1153->SetParError(3,5.906543e-12);
   sigma_func1153->SetParLimits(3,0,0);
   sigma_func1153->Draw("Csame");
   
   TF1 *sigma_func1154 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1154->SetFillColor(19);
   sigma_func1154->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1154->SetMarkerColor(ci);
   sigma_func1154->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   sigma_func1154->SetLineColor(ci);
   sigma_func1154->SetLineWidth(3);
   sigma_func1154->SetLineStyle(9);
   sigma_func1154->SetChisquare(55.11982);
   sigma_func1154->SetNDF(9);
   sigma_func1154->GetXaxis()->SetLabelFont(42);
   sigma_func1154->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1154->GetXaxis()->SetLabelSize(0.05);
   sigma_func1154->GetXaxis()->SetTitleSize(0.06);
   sigma_func1154->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1154->GetXaxis()->SetTitleFont(42);
   sigma_func1154->GetYaxis()->SetLabelFont(42);
   sigma_func1154->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1154->GetYaxis()->SetLabelSize(0.05);
   sigma_func1154->GetYaxis()->SetTitleSize(0.06);
   sigma_func1154->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1154->GetYaxis()->SetTitleFont(42);
   sigma_func1154->SetParameter(0,8.291829);
   sigma_func1154->SetParError(0,0.1669817);
   sigma_func1154->SetParLimits(0,0,0);
   sigma_func1154->SetParameter(1,-0.001309617);
   sigma_func1154->SetParError(1,0.0002078606);
   sigma_func1154->SetParLimits(1,0,0);
   sigma_func1154->SetParameter(2,4.563518e-07);
   sigma_func1154->SetParError(2,7.76562e-08);
   sigma_func1154->SetParLimits(2,0,0);
   sigma_func1154->SetParameter(3,-3.067339e-11);
   sigma_func1154->SetParError(3,8.880914e-12);
   sigma_func1154->SetParLimits(3,0,0);
   sigma_func1154->Draw("Csame");
   
   Double_t _fx1153[13] = {
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
   Double_t _fy1153[13] = {
   10.96246,
   11.2555,
   11.32922,
   11.27186,
   11.12389,
   10.89284,
   10.87455,
   11.30625,
   11.42709,
   12.13627,
   12.60034,
   12.93354,
   13.96953};
   Double_t _fex1153[13] = {
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
   Double_t _fey1153[13] = {
   0.1482554,
   0.1535421,
   0.1561978,
   0.1333885,
   0.1726445,
   0.1465642,
   0.1324535,
   0.1465198,
   0.2428953,
   0.177901,
   0.1995439,
   0.2230129,
   0.200998};
   gre = new TGraphErrors(13,_fx1153,_fy1153,_fex1153,_fey1153);
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
   
   TH1F *Graph_Graph1153 = new TH1F("Graph_Graph1153","",100,550,5950);
   Graph_Graph1153->SetMinimum(10.39926);
   Graph_Graph1153->SetMaximum(14.51337);
   Graph_Graph1153->SetDirectory(0);
   Graph_Graph1153->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1153->SetLineColor(ci);
   Graph_Graph1153->GetXaxis()->SetLabelFont(42);
   Graph_Graph1153->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1153->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1153->GetXaxis()->SetTitleFont(42);
   Graph_Graph1153->GetYaxis()->SetLabelFont(42);
   Graph_Graph1153->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1153->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1153->GetYaxis()->SetTitleFont(42);
   Graph_Graph1153->GetZaxis()->SetLabelFont(42);
   Graph_Graph1153->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1153->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1153);
   
   
   TF1 *sigma_func1154 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1154->SetBit(TF1::kNotDraw);
   sigma_func1154->SetFillColor(19);
   sigma_func1154->SetFillStyle(0);
   sigma_func1154->SetLineColor(2);
   sigma_func1154->SetLineWidth(2);
   sigma_func1154->SetChisquare(14.68781);
   sigma_func1154->SetNDF(9);
   sigma_func1154->GetXaxis()->SetLabelFont(42);
   sigma_func1154->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1154->GetXaxis()->SetLabelSize(0.05);
   sigma_func1154->GetXaxis()->SetTitleSize(0.06);
   sigma_func1154->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1154->GetXaxis()->SetTitleFont(42);
   sigma_func1154->GetYaxis()->SetLabelFont(42);
   sigma_func1154->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1154->GetYaxis()->SetLabelSize(0.05);
   sigma_func1154->GetYaxis()->SetTitleSize(0.06);
   sigma_func1154->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1154->GetYaxis()->SetTitleFont(42);
   sigma_func1154->SetParameter(0,11.77129);
   sigma_func1154->SetParError(0,0.5187454);
   sigma_func1154->SetParLimits(0,0,0);
   sigma_func1154->SetParameter(1,-0.0006979189);
   sigma_func1154->SetParError(1,0.0006217545);
   sigma_func1154->SetParLimits(1,0,0);
   sigma_func1154->SetParameter(2,1.485101e-07);
   sigma_func1154->SetParError(2,2.185774e-07);
   sigma_func1154->SetParLimits(2,0,0);
   sigma_func1154->SetParameter(3,9.195215e-12);
   sigma_func1154->SetParError(3,2.305991e-11);
   sigma_func1154->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1154);
   gre->Draw("p");
   
   Double_t _fx1155[13] = {
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
   Double_t _fy1155[13] = {
   10.38539,
   10.81904,
   10.57489,
   10.79555,
   10.45457,
   10.46199,
   10.24433,
   10.70126,
   11.28727,
   11.84063,
   12.24354,
   12.45561,
   12.83137};
   Double_t _fex1155[13] = {
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
   Double_t _fey1155[13] = {
   0.1290283,
   0.1062336,
   0.104801,
   0.126255,
   0.09843502,
   0.1039724,
   0.09601107,
   0.102811,
   0.1052479,
   0.1197717,
   0.1296806,
   0.1294477,
   0.1349791};
   gre = new TGraphErrors(13,_fx1155,_fy1155,_fex1155,_fey1155);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1155 = new TH1F("Graph_Graph1155","",100,550,5950);
   Graph_Graph1155->SetMinimum(9.866516);
   Graph_Graph1155->SetMaximum(13.24815);
   Graph_Graph1155->SetDirectory(0);
   Graph_Graph1155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1155->SetLineColor(ci);
   Graph_Graph1155->GetXaxis()->SetLabelFont(42);
   Graph_Graph1155->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1155->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1155->GetXaxis()->SetTitleFont(42);
   Graph_Graph1155->GetYaxis()->SetLabelFont(42);
   Graph_Graph1155->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1155->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1155->GetYaxis()->SetTitleFont(42);
   Graph_Graph1155->GetZaxis()->SetLabelFont(42);
   Graph_Graph1155->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1155->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1155);
   
   
   TF1 *sigma_func1156 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1156->SetBit(TF1::kNotDraw);
   sigma_func1156->SetFillColor(19);
   sigma_func1156->SetFillStyle(0);
   sigma_func1156->SetLineColor(2);
   sigma_func1156->SetLineWidth(2);
   sigma_func1156->SetChisquare(36.42361);
   sigma_func1156->SetNDF(9);
   sigma_func1156->GetXaxis()->SetLabelFont(42);
   sigma_func1156->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1156->GetXaxis()->SetLabelSize(0.05);
   sigma_func1156->GetXaxis()->SetTitleSize(0.06);
   sigma_func1156->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1156->GetXaxis()->SetTitleFont(42);
   sigma_func1156->GetYaxis()->SetLabelFont(42);
   sigma_func1156->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1156->GetYaxis()->SetLabelSize(0.05);
   sigma_func1156->GetYaxis()->SetTitleSize(0.06);
   sigma_func1156->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1156->GetYaxis()->SetTitleFont(42);
   sigma_func1156->SetParameter(0,12.50976);
   sigma_func1156->SetParError(0,0.3862083);
   sigma_func1156->SetParLimits(0,0,0);
   sigma_func1156->SetParameter(1,-0.002458075);
   sigma_func1156->SetParError(1,0.0004504009);
   sigma_func1156->SetParLimits(1,0,0);
   sigma_func1156->SetParameter(2,8.404129e-07);
   sigma_func1156->SetParError(2,1.544874e-07);
   sigma_func1156->SetParLimits(2,0,0);
   sigma_func1156->SetParameter(3,-6.945634e-11);
   sigma_func1156->SetParError(3,1.601516e-11);
   sigma_func1156->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1156);
   gre->Draw("p");
   
   TF1 *sigma_func1157 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1157->SetFillColor(19);
   sigma_func1157->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1157->SetMarkerColor(ci);
   sigma_func1157->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1157->SetLineColor(ci);
   sigma_func1157->SetLineWidth(3);
   sigma_func1157->SetChisquare(36.42361);
   sigma_func1157->SetNDF(9);
   sigma_func1157->GetXaxis()->SetLabelFont(42);
   sigma_func1157->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1157->GetXaxis()->SetLabelSize(0.05);
   sigma_func1157->GetXaxis()->SetTitleSize(0.06);
   sigma_func1157->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1157->GetXaxis()->SetTitleFont(42);
   sigma_func1157->GetYaxis()->SetLabelFont(42);
   sigma_func1157->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1157->GetYaxis()->SetLabelSize(0.05);
   sigma_func1157->GetYaxis()->SetTitleSize(0.06);
   sigma_func1157->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1157->GetYaxis()->SetTitleFont(42);
   sigma_func1157->SetParameter(0,12.50976);
   sigma_func1157->SetParError(0,0.3862083);
   sigma_func1157->SetParLimits(0,0,0);
   sigma_func1157->SetParameter(1,-0.002458075);
   sigma_func1157->SetParError(1,0.0004504009);
   sigma_func1157->SetParLimits(1,0,0);
   sigma_func1157->SetParameter(2,8.404129e-07);
   sigma_func1157->SetParError(2,1.544874e-07);
   sigma_func1157->SetParLimits(2,0,0);
   sigma_func1157->SetParameter(3,-6.945634e-11);
   sigma_func1157->SetParError(3,1.601516e-11);
   sigma_func1157->SetParLimits(3,0,0);
   sigma_func1157->Draw("Csame");
   
   TF1 *sigma_func1158 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1158->SetFillColor(19);
   sigma_func1158->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1158->SetMarkerColor(ci);
   sigma_func1158->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   sigma_func1158->SetLineColor(ci);
   sigma_func1158->SetLineWidth(3);
   sigma_func1158->SetLineStyle(9);
   sigma_func1158->SetChisquare(14.68781);
   sigma_func1158->SetNDF(9);
   sigma_func1158->GetXaxis()->SetLabelFont(42);
   sigma_func1158->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1158->GetXaxis()->SetLabelSize(0.05);
   sigma_func1158->GetXaxis()->SetTitleSize(0.06);
   sigma_func1158->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1158->GetXaxis()->SetTitleFont(42);
   sigma_func1158->GetYaxis()->SetLabelFont(42);
   sigma_func1158->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1158->GetYaxis()->SetLabelSize(0.05);
   sigma_func1158->GetYaxis()->SetTitleSize(0.06);
   sigma_func1158->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1158->GetYaxis()->SetTitleFont(42);
   sigma_func1158->SetParameter(0,11.77129);
   sigma_func1158->SetParError(0,0.5187454);
   sigma_func1158->SetParLimits(0,0,0);
   sigma_func1158->SetParameter(1,-0.0006979189);
   sigma_func1158->SetParError(1,0.0006217545);
   sigma_func1158->SetParLimits(1,0,0);
   sigma_func1158->SetParameter(2,1.485101e-07);
   sigma_func1158->SetParError(2,2.185774e-07);
   sigma_func1158->SetParLimits(2,0,0);
   sigma_func1158->SetParameter(3,9.195215e-12);
   sigma_func1158->SetParError(3,2.305991e-11);
   sigma_func1158->SetParLimits(3,0,0);
   sigma_func1158->Draw("Csame");
   
   Double_t _fx1157[13] = {
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
   Double_t _fy1157[13] = {
   8.464511,
   8.749011,
   8.645215,
   8.643305,
   8.598626,
   8.536834,
   8.75202,
   9.117796,
   9.650346,
   10.13099,
   10.71687,
   11.41137,
   12.08819};
   Double_t _fex1157[13] = {
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
   Double_t _fey1157[13] = {
   0.04646661,
   0.03880316,
   0.03744789,
   0.03883726,
   0.04144902,
   0.04297013,
   0.03605781,
   0.04487417,
   0.04236536,
   0.05159043,
   0.1630351,
   0.1953475,
   0.2552186};
   gre = new TGraphErrors(13,_fx1157,_fy1157,_fex1157,_fey1157);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1157 = new TH1F("Graph_Graph1157","",100,550,5950);
   Graph_Graph1157->SetMinimum(8.025508);
   Graph_Graph1157->SetMaximum(12.73594);
   Graph_Graph1157->SetDirectory(0);
   Graph_Graph1157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1157->SetLineColor(ci);
   Graph_Graph1157->GetXaxis()->SetLabelFont(42);
   Graph_Graph1157->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1157->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1157->GetXaxis()->SetTitleFont(42);
   Graph_Graph1157->GetYaxis()->SetLabelFont(42);
   Graph_Graph1157->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1157->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1157->GetYaxis()->SetTitleFont(42);
   Graph_Graph1157->GetZaxis()->SetLabelFont(42);
   Graph_Graph1157->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1157->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1157);
   
   
   TF1 *sigma_func1158 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1158->SetBit(TF1::kNotDraw);
   sigma_func1158->SetFillColor(19);
   sigma_func1158->SetFillStyle(0);
   sigma_func1158->SetLineColor(2);
   sigma_func1158->SetLineWidth(2);
   sigma_func1158->SetChisquare(50.03222);
   sigma_func1158->SetNDF(9);
   sigma_func1158->GetXaxis()->SetLabelFont(42);
   sigma_func1158->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1158->GetXaxis()->SetLabelSize(0.05);
   sigma_func1158->GetXaxis()->SetTitleSize(0.06);
   sigma_func1158->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1158->GetXaxis()->SetTitleFont(42);
   sigma_func1158->GetYaxis()->SetLabelFont(42);
   sigma_func1158->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1158->GetYaxis()->SetLabelSize(0.05);
   sigma_func1158->GetYaxis()->SetTitleSize(0.06);
   sigma_func1158->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1158->GetYaxis()->SetTitleFont(42);
   sigma_func1158->SetParameter(0,9.378587);
   sigma_func1158->SetParError(0,0.1783256);
   sigma_func1158->SetParLimits(0,0,0);
   sigma_func1158->SetParameter(1,-0.001054339);
   sigma_func1158->SetParError(1,0.0002268794);
   sigma_func1158->SetParLimits(1,0,0);
   sigma_func1158->SetParameter(2,3.699799e-07);
   sigma_func1158->SetParError(2,8.693621e-08);
   sigma_func1158->SetParLimits(2,0,0);
   sigma_func1158->SetParameter(3,-1.500908e-11);
   sigma_func1158->SetParError(3,1.031887e-11);
   sigma_func1158->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1158);
   gre->Draw("p");
   
   Double_t _fx1159[13] = {
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
   Double_t _fy1159[13] = {
   8.129676,
   8.089867,
   8.16853,
   8.019483,
   8.043332,
   7.905615,
   7.927384,
   8.295048,
   8.742076,
   9.150326,
   9.702219,
   10.29587,
   10.286};
   Double_t _fex1159[13] = {
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
   Double_t _fey1159[13] = {
   0.03374386,
   0.03157555,
   0.03190628,
   0.03006517,
   0.03096526,
   0.02913378,
   0.02927713,
   0.03312506,
   0.03563984,
   0.04261588,
   0.1443187,
   0.1101418,
   0.1447456};
   gre = new TGraphErrors(13,_fx1159,_fy1159,_fex1159,_fey1159);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1159 = new TH1F("Graph_Graph1159","",100,550,5950);
   Graph_Graph1159->SetMinimum(7.621054);
   Graph_Graph1159->SetMaximum(10.68617);
   Graph_Graph1159->SetDirectory(0);
   Graph_Graph1159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1159->SetLineColor(ci);
   Graph_Graph1159->GetXaxis()->SetLabelFont(42);
   Graph_Graph1159->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1159->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1159->GetXaxis()->SetTitleFont(42);
   Graph_Graph1159->GetYaxis()->SetLabelFont(42);
   Graph_Graph1159->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1159->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1159->GetYaxis()->SetTitleFont(42);
   Graph_Graph1159->GetZaxis()->SetLabelFont(42);
   Graph_Graph1159->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1159->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1159);
   
   
   TF1 *sigma_func1160 = new TF1("sigma_func","pol3",1000,5500);
   sigma_func1160->SetBit(TF1::kNotDraw);
   sigma_func1160->SetFillColor(19);
   sigma_func1160->SetFillStyle(0);
   sigma_func1160->SetLineColor(2);
   sigma_func1160->SetLineWidth(2);
   sigma_func1160->SetChisquare(79.41546);
   sigma_func1160->SetNDF(9);
   sigma_func1160->GetXaxis()->SetLabelFont(42);
   sigma_func1160->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1160->GetXaxis()->SetLabelSize(0.05);
   sigma_func1160->GetXaxis()->SetTitleSize(0.06);
   sigma_func1160->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1160->GetXaxis()->SetTitleFont(42);
   sigma_func1160->GetYaxis()->SetLabelFont(42);
   sigma_func1160->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1160->GetYaxis()->SetLabelSize(0.05);
   sigma_func1160->GetYaxis()->SetTitleSize(0.06);
   sigma_func1160->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1160->GetYaxis()->SetTitleFont(42);
   sigma_func1160->SetParameter(0,9.399829);
   sigma_func1160->SetParError(0,0.1296077);
   sigma_func1160->SetParLimits(0,0,0);
   sigma_func1160->SetParameter(1,-0.001669745);
   sigma_func1160->SetParError(1,0.0001623492);
   sigma_func1160->SetParLimits(1,0,0);
   sigma_func1160->SetParameter(2,5.448777e-07);
   sigma_func1160->SetParError(2,6.089613e-08);
   sigma_func1160->SetParLimits(2,0,0);
   sigma_func1160->SetParameter(3,-3.627014e-11);
   sigma_func1160->SetParError(3,6.999314e-12);
   sigma_func1160->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(sigma_func1160);
   gre->Draw("p");
   
   TF1 *sigma_func1161 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1161->SetFillColor(19);
   sigma_func1161->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   sigma_func1161->SetMarkerColor(ci);
   sigma_func1161->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   sigma_func1161->SetLineColor(ci);
   sigma_func1161->SetLineWidth(3);
   sigma_func1161->SetChisquare(79.41546);
   sigma_func1161->SetNDF(9);
   sigma_func1161->GetXaxis()->SetLabelFont(42);
   sigma_func1161->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1161->GetXaxis()->SetLabelSize(0.05);
   sigma_func1161->GetXaxis()->SetTitleSize(0.06);
   sigma_func1161->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1161->GetXaxis()->SetTitleFont(42);
   sigma_func1161->GetYaxis()->SetLabelFont(42);
   sigma_func1161->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1161->GetYaxis()->SetLabelSize(0.05);
   sigma_func1161->GetYaxis()->SetTitleSize(0.06);
   sigma_func1161->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1161->GetYaxis()->SetTitleFont(42);
   sigma_func1161->SetParameter(0,9.399829);
   sigma_func1161->SetParError(0,0.1296077);
   sigma_func1161->SetParLimits(0,0,0);
   sigma_func1161->SetParameter(1,-0.001669745);
   sigma_func1161->SetParError(1,0.0001623492);
   sigma_func1161->SetParLimits(1,0,0);
   sigma_func1161->SetParameter(2,5.448777e-07);
   sigma_func1161->SetParError(2,6.089613e-08);
   sigma_func1161->SetParLimits(2,0,0);
   sigma_func1161->SetParameter(3,-3.627014e-11);
   sigma_func1161->SetParError(3,6.999314e-12);
   sigma_func1161->SetParLimits(3,0,0);
   sigma_func1161->Draw("Csame");
   
   TF1 *sigma_func1162 = new TF1("sigma_func","pol3",0,13000);
   sigma_func1162->SetFillColor(19);
   sigma_func1162->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   sigma_func1162->SetMarkerColor(ci);
   sigma_func1162->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   sigma_func1162->SetLineColor(ci);
   sigma_func1162->SetLineWidth(3);
   sigma_func1162->SetLineStyle(9);
   sigma_func1162->SetChisquare(50.03222);
   sigma_func1162->SetNDF(9);
   sigma_func1162->GetXaxis()->SetLabelFont(42);
   sigma_func1162->GetXaxis()->SetLabelOffset(0.007);
   sigma_func1162->GetXaxis()->SetLabelSize(0.05);
   sigma_func1162->GetXaxis()->SetTitleSize(0.06);
   sigma_func1162->GetXaxis()->SetTitleOffset(0.9);
   sigma_func1162->GetXaxis()->SetTitleFont(42);
   sigma_func1162->GetYaxis()->SetLabelFont(42);
   sigma_func1162->GetYaxis()->SetLabelOffset(0.007);
   sigma_func1162->GetYaxis()->SetLabelSize(0.05);
   sigma_func1162->GetYaxis()->SetTitleSize(0.06);
   sigma_func1162->GetYaxis()->SetTitleOffset(1.25);
   sigma_func1162->GetYaxis()->SetTitleFont(42);
   sigma_func1162->SetParameter(0,9.378587);
   sigma_func1162->SetParError(0,0.1783256);
   sigma_func1162->SetParLimits(0,0,0);
   sigma_func1162->SetParameter(1,-0.001054339);
   sigma_func1162->SetParError(1,0.0002268794);
   sigma_func1162->SetParLimits(1,0,0);
   sigma_func1162->SetParameter(2,3.699799e-07);
   sigma_func1162->SetParError(2,8.693621e-08);
   sigma_func1162->SetParLimits(2,0,0);
   sigma_func1162->SetParameter(3,-1.500908e-11);
   sigma_func1162->SetParError(3,1.031887e-11);
   sigma_func1162->SetParLimits(3,0,0);
   sigma_func1162->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("sigma_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("sigma_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("sigma_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("sigma_func","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
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
   entry=leg->AddEntry("","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","HPLP","LP");

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
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
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
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
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
