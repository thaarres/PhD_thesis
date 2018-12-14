void Signal_mjetl2_alpha()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:18:55 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-0.927835,5728.857,5.515464);
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
   
   Double_t _fx1161[13] = {
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
   Double_t _fy1161[13] = {
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083};
   Double_t _fex1161[13] = {
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
   Double_t _fey1161[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1161,_fy1161,_fex1161,_fey1161);
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
   
   TH1F *Graph_Graph1161 = new TH1F("Graph_Graph1161","",100,550,5950);
   Graph_Graph1161->SetMinimum(0);
   Graph_Graph1161->SetMaximum(5);
   Graph_Graph1161->SetDirectory(0);
   Graph_Graph1161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1161->SetLineColor(ci);
   Graph_Graph1161->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1161->GetXaxis()->SetRange(11,92);
   Graph_Graph1161->GetXaxis()->SetNdivisions(209);
   Graph_Graph1161->GetXaxis()->SetLabelFont(42);
   Graph_Graph1161->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1161->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1161->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1161->GetXaxis()->SetTitleFont(42);
   Graph_Graph1161->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph1161->GetYaxis()->SetNdivisions(504);
   Graph_Graph1161->GetYaxis()->SetLabelFont(42);
   Graph_Graph1161->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1161->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1161->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1161->GetYaxis()->SetTitleFont(42);
   Graph_Graph1161->GetZaxis()->SetLabelFont(42);
   Graph_Graph1161->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1161->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1161);
   
   
   TF1 *alpha_func1162 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1162->SetBit(TF1::kNotDraw);
   alpha_func1162->SetFillColor(19);
   alpha_func1162->SetFillStyle(0);
   alpha_func1162->SetLineColor(2);
   alpha_func1162->SetLineWidth(2);
   alpha_func1162->SetChisquare(6.409495e-31);
   alpha_func1162->SetNDF(12);
   alpha_func1162->GetXaxis()->SetLabelFont(42);
   alpha_func1162->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1162->GetXaxis()->SetLabelSize(0.05);
   alpha_func1162->GetXaxis()->SetTitleSize(0.06);
   alpha_func1162->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1162->GetXaxis()->SetTitleFont(42);
   alpha_func1162->GetYaxis()->SetLabelFont(42);
   alpha_func1162->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1162->GetYaxis()->SetLabelSize(0.05);
   alpha_func1162->GetYaxis()->SetTitleSize(0.06);
   alpha_func1162->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1162->GetYaxis()->SetTitleFont(42);
   alpha_func1162->SetParameter(0,1.083);
   alpha_func1162->SetParError(0,6.409876e-17);
   alpha_func1162->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1162);
   gre->Draw("ap");
   
   Double_t _fx1163[13] = {
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
   Double_t _fy1163[13] = {
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125};
   Double_t _fex1163[13] = {
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
   Double_t _fey1163[13] = {
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
   gre = new TGraphErrors(13,_fx1163,_fy1163,_fex1163,_fey1163);
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
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","",100,550,5950);
   Graph_Graph1163->SetMinimum(1.025);
   Graph_Graph1163->SetMaximum(2.225);
   Graph_Graph1163->SetDirectory(0);
   Graph_Graph1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1163->SetLineColor(ci);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1163->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1163);
   
   
   TF1 *alpha_func1164 = new TF1("alpha_func","pol4",1000,5500);
   alpha_func1164->SetBit(TF1::kNotDraw);
   alpha_func1164->SetFillColor(19);
   alpha_func1164->SetFillStyle(0);
   alpha_func1164->SetLineColor(2);
   alpha_func1164->SetLineWidth(2);
   alpha_func1164->SetChisquare(1.467281e-27);
   alpha_func1164->SetNDF(8);
   alpha_func1164->GetXaxis()->SetLabelFont(42);
   alpha_func1164->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1164->GetXaxis()->SetLabelSize(0.05);
   alpha_func1164->GetXaxis()->SetTitleSize(0.06);
   alpha_func1164->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1164->GetXaxis()->SetTitleFont(42);
   alpha_func1164->GetYaxis()->SetLabelFont(42);
   alpha_func1164->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1164->GetYaxis()->SetLabelSize(0.05);
   alpha_func1164->GetYaxis()->SetTitleSize(0.06);
   alpha_func1164->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1164->GetYaxis()->SetTitleFont(42);
   alpha_func1164->SetParameter(0,1.125);
   alpha_func1164->SetParError(0,1.010526e-13);
   alpha_func1164->SetParLimits(0,0,0);
   alpha_func1164->SetParameter(1,-4.077273e-16);
   alpha_func1164->SetParError(1,1.631386e-16);
   alpha_func1164->SetParLimits(1,0,0);
   alpha_func1164->SetParameter(2,2.057548e-19);
   alpha_func1164->SetParError(2,8.923675e-20);
   alpha_func1164->SetParLimits(2,0,0);
   alpha_func1164->SetParameter(3,-4.192122e-23);
   alpha_func1164->SetParError(3,1.985292e-23);
   alpha_func1164->SetParLimits(3,0,0);
   alpha_func1164->SetParameter(4,2.979754e-27);
   alpha_func1164->SetParError(4,1.538285e-27);
   alpha_func1164->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1164);
   gre->Draw("p");
   
   Double_t _fx1165[13] = {
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
   Double_t _fy1165[13] = {
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083,
   1.083};
   Double_t _fex1165[13] = {
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
   Double_t _fey1165[13] = {
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
   gre = new TGraphErrors(13,_fx1165,_fy1165,_fex1165,_fey1165);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11611165 = new TH1F("Graph_Graph_Graph11611165","",100,550,5950);
   Graph_Graph_Graph11611165->SetMinimum(0);
   Graph_Graph_Graph11611165->SetMaximum(5);
   Graph_Graph_Graph11611165->SetDirectory(0);
   Graph_Graph_Graph11611165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11611165->SetLineColor(ci);
   Graph_Graph_Graph11611165->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph11611165->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph11611165->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11611165->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11611165->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11611165->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11611165->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11611165->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11611165->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph_Graph11611165->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11611165->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11611165->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11611165->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11611165->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11611165->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11611165->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11611165->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11611165->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11611165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11611165);
   
   
   TF1 *alpha_func1166 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1166->SetBit(TF1::kNotDraw);
   alpha_func1166->SetFillColor(19);
   alpha_func1166->SetFillStyle(0);
   alpha_func1166->SetLineColor(2);
   alpha_func1166->SetLineWidth(2);
   alpha_func1166->SetChisquare(6.409495e-31);
   alpha_func1166->SetNDF(12);
   alpha_func1166->GetXaxis()->SetLabelFont(42);
   alpha_func1166->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1166->GetXaxis()->SetLabelSize(0.05);
   alpha_func1166->GetXaxis()->SetTitleSize(0.06);
   alpha_func1166->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1166->GetXaxis()->SetTitleFont(42);
   alpha_func1166->GetYaxis()->SetLabelFont(42);
   alpha_func1166->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1166->GetYaxis()->SetLabelSize(0.05);
   alpha_func1166->GetYaxis()->SetTitleSize(0.06);
   alpha_func1166->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1166->GetYaxis()->SetTitleFont(42);
   alpha_func1166->SetParameter(0,1.083);
   alpha_func1166->SetParError(0,6.409876e-17);
   alpha_func1166->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1166);
   gre->Draw("p");
   
   TF1 *alpha_func1167 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1167->SetFillColor(19);
   alpha_func1167->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha_func1167->SetMarkerColor(ci);
   alpha_func1167->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   alpha_func1167->SetLineColor(ci);
   alpha_func1167->SetLineWidth(3);
   alpha_func1167->SetChisquare(6.409495e-31);
   alpha_func1167->SetNDF(12);
   alpha_func1167->GetXaxis()->SetLabelFont(42);
   alpha_func1167->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1167->GetXaxis()->SetLabelSize(0.05);
   alpha_func1167->GetXaxis()->SetTitleSize(0.06);
   alpha_func1167->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1167->GetXaxis()->SetTitleFont(42);
   alpha_func1167->GetYaxis()->SetLabelFont(42);
   alpha_func1167->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1167->GetYaxis()->SetLabelSize(0.05);
   alpha_func1167->GetYaxis()->SetTitleSize(0.06);
   alpha_func1167->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1167->GetYaxis()->SetTitleFont(42);
   alpha_func1167->SetParameter(0,1.083);
   alpha_func1167->SetParError(0,6.409876e-17);
   alpha_func1167->SetParLimits(0,0,0);
   alpha_func1167->Draw("Csame");
   
   TF1 *alpha_func1168 = new TF1("alpha_func","pol4",0,13000);
   alpha_func1168->SetFillColor(19);
   alpha_func1168->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha_func1168->SetMarkerColor(ci);
   alpha_func1168->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   alpha_func1168->SetLineColor(ci);
   alpha_func1168->SetLineWidth(3);
   alpha_func1168->SetLineStyle(9);
   alpha_func1168->SetChisquare(1.467281e-27);
   alpha_func1168->SetNDF(8);
   alpha_func1168->GetXaxis()->SetLabelFont(42);
   alpha_func1168->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1168->GetXaxis()->SetLabelSize(0.05);
   alpha_func1168->GetXaxis()->SetTitleSize(0.06);
   alpha_func1168->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1168->GetXaxis()->SetTitleFont(42);
   alpha_func1168->GetYaxis()->SetLabelFont(42);
   alpha_func1168->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1168->GetYaxis()->SetLabelSize(0.05);
   alpha_func1168->GetYaxis()->SetTitleSize(0.06);
   alpha_func1168->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1168->GetYaxis()->SetTitleFont(42);
   alpha_func1168->SetParameter(0,1.125);
   alpha_func1168->SetParError(0,1.010526e-13);
   alpha_func1168->SetParLimits(0,0,0);
   alpha_func1168->SetParameter(1,-4.077273e-16);
   alpha_func1168->SetParError(1,1.631386e-16);
   alpha_func1168->SetParLimits(1,0,0);
   alpha_func1168->SetParameter(2,2.057548e-19);
   alpha_func1168->SetParError(2,8.923675e-20);
   alpha_func1168->SetParLimits(2,0,0);
   alpha_func1168->SetParameter(3,-4.192122e-23);
   alpha_func1168->SetParError(3,1.985292e-23);
   alpha_func1168->SetParLimits(3,0,0);
   alpha_func1168->SetParameter(4,2.979754e-27);
   alpha_func1168->SetParError(4,1.538285e-27);
   alpha_func1168->SetParLimits(4,0,0);
   alpha_func1168->Draw("Csame");
   
   Double_t _fx1167[13] = {
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
   Double_t _fy1167[13] = {
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125};
   Double_t _fex1167[13] = {
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
   Double_t _fey1167[13] = {
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
   gre = new TGraphErrors(13,_fx1167,_fy1167,_fex1167,_fey1167);
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
   
   TH1F *Graph_Graph1167 = new TH1F("Graph_Graph1167","",100,550,5950);
   Graph_Graph1167->SetMinimum(1.025);
   Graph_Graph1167->SetMaximum(2.225);
   Graph_Graph1167->SetDirectory(0);
   Graph_Graph1167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1167->SetLineColor(ci);
   Graph_Graph1167->GetXaxis()->SetLabelFont(42);
   Graph_Graph1167->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1167->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1167->GetXaxis()->SetTitleFont(42);
   Graph_Graph1167->GetYaxis()->SetLabelFont(42);
   Graph_Graph1167->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1167->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1167->GetYaxis()->SetTitleFont(42);
   Graph_Graph1167->GetZaxis()->SetLabelFont(42);
   Graph_Graph1167->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1167->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1167);
   
   
   TF1 *alpha_func1168 = new TF1("alpha_func","pol3",1000,5500);
   alpha_func1168->SetBit(TF1::kNotDraw);
   alpha_func1168->SetFillColor(19);
   alpha_func1168->SetFillStyle(0);
   alpha_func1168->SetLineColor(2);
   alpha_func1168->SetLineWidth(2);
   alpha_func1168->SetChisquare(7.956155e-28);
   alpha_func1168->SetNDF(9);
   alpha_func1168->GetXaxis()->SetLabelFont(42);
   alpha_func1168->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1168->GetXaxis()->SetLabelSize(0.05);
   alpha_func1168->GetXaxis()->SetTitleSize(0.06);
   alpha_func1168->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1168->GetXaxis()->SetTitleFont(42);
   alpha_func1168->GetYaxis()->SetLabelFont(42);
   alpha_func1168->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1168->GetYaxis()->SetLabelSize(0.05);
   alpha_func1168->GetYaxis()->SetTitleSize(0.06);
   alpha_func1168->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1168->GetYaxis()->SetTitleFont(42);
   alpha_func1168->SetParameter(0,1.125);
   alpha_func1168->SetParError(0,3.102647e-14);
   alpha_func1168->SetParLimits(0,0,0);
   alpha_func1168->SetParameter(1,-1.083755e-16);
   alpha_func1168->SetParError(1,3.628699e-17);
   alpha_func1168->SetParLimits(1,0,0);
   alpha_func1168->SetParameter(2,3.634859e-20);
   alpha_func1168->SetParError(2,1.231752e-20);
   alpha_func1168->SetParLimits(2,0,0);
   alpha_func1168->SetParameter(3,-3.62645e-24);
   alpha_func1168->SetParError(3,1.262186e-24);
   alpha_func1168->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1168);
   gre->Draw("p");
   
   Double_t _fx1169[13] = {
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
   Double_t _fy1169[13] = {
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08};
   Double_t _fex1169[13] = {
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
   Double_t _fey1169[13] = {
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
   gre = new TGraphErrors(13,_fx1169,_fy1169,_fex1169,_fey1169);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1169 = new TH1F("Graph_Graph1169","",100,550,5950);
   Graph_Graph1169->SetMinimum(0.98);
   Graph_Graph1169->SetMaximum(2.18);
   Graph_Graph1169->SetDirectory(0);
   Graph_Graph1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1169->SetLineColor(ci);
   Graph_Graph1169->GetXaxis()->SetLabelFont(42);
   Graph_Graph1169->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1169->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1169->GetXaxis()->SetTitleFont(42);
   Graph_Graph1169->GetYaxis()->SetLabelFont(42);
   Graph_Graph1169->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1169->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1169->GetYaxis()->SetTitleFont(42);
   Graph_Graph1169->GetZaxis()->SetLabelFont(42);
   Graph_Graph1169->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1169->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1169);
   
   
   TF1 *alpha_func1170 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1170->SetBit(TF1::kNotDraw);
   alpha_func1170->SetFillColor(19);
   alpha_func1170->SetFillStyle(0);
   alpha_func1170->SetLineColor(2);
   alpha_func1170->SetLineWidth(2);
   alpha_func1170->SetChisquare(6.409495e-31);
   alpha_func1170->SetNDF(12);
   alpha_func1170->GetXaxis()->SetLabelFont(42);
   alpha_func1170->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1170->GetXaxis()->SetLabelSize(0.05);
   alpha_func1170->GetXaxis()->SetTitleSize(0.06);
   alpha_func1170->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1170->GetXaxis()->SetTitleFont(42);
   alpha_func1170->GetYaxis()->SetLabelFont(42);
   alpha_func1170->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1170->GetYaxis()->SetLabelSize(0.05);
   alpha_func1170->GetYaxis()->SetTitleSize(0.06);
   alpha_func1170->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1170->GetYaxis()->SetTitleFont(42);
   alpha_func1170->SetParameter(0,1.08);
   alpha_func1170->SetParError(0,6.409876e-17);
   alpha_func1170->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1170);
   gre->Draw("p");
   
   TF1 *alpha_func1171 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1171->SetFillColor(19);
   alpha_func1171->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1171->SetMarkerColor(ci);
   alpha_func1171->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1171->SetLineColor(ci);
   alpha_func1171->SetLineWidth(3);
   alpha_func1171->SetChisquare(6.409495e-31);
   alpha_func1171->SetNDF(12);
   alpha_func1171->GetXaxis()->SetLabelFont(42);
   alpha_func1171->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1171->GetXaxis()->SetLabelSize(0.05);
   alpha_func1171->GetXaxis()->SetTitleSize(0.06);
   alpha_func1171->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1171->GetXaxis()->SetTitleFont(42);
   alpha_func1171->GetYaxis()->SetLabelFont(42);
   alpha_func1171->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1171->GetYaxis()->SetLabelSize(0.05);
   alpha_func1171->GetYaxis()->SetTitleSize(0.06);
   alpha_func1171->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1171->GetYaxis()->SetTitleFont(42);
   alpha_func1171->SetParameter(0,1.08);
   alpha_func1171->SetParError(0,6.409876e-17);
   alpha_func1171->SetParLimits(0,0,0);
   alpha_func1171->Draw("Csame");
   
   TF1 *alpha_func1172 = new TF1("alpha_func","pol3",0,13000);
   alpha_func1172->SetFillColor(19);
   alpha_func1172->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1172->SetMarkerColor(ci);
   alpha_func1172->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1172->SetLineColor(ci);
   alpha_func1172->SetLineWidth(3);
   alpha_func1172->SetLineStyle(9);
   alpha_func1172->SetChisquare(7.956155e-28);
   alpha_func1172->SetNDF(9);
   alpha_func1172->GetXaxis()->SetLabelFont(42);
   alpha_func1172->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1172->GetXaxis()->SetLabelSize(0.05);
   alpha_func1172->GetXaxis()->SetTitleSize(0.06);
   alpha_func1172->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1172->GetXaxis()->SetTitleFont(42);
   alpha_func1172->GetYaxis()->SetLabelFont(42);
   alpha_func1172->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1172->GetYaxis()->SetLabelSize(0.05);
   alpha_func1172->GetYaxis()->SetTitleSize(0.06);
   alpha_func1172->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1172->GetYaxis()->SetTitleFont(42);
   alpha_func1172->SetParameter(0,1.125);
   alpha_func1172->SetParError(0,3.102647e-14);
   alpha_func1172->SetParLimits(0,0,0);
   alpha_func1172->SetParameter(1,-1.083755e-16);
   alpha_func1172->SetParError(1,3.628699e-17);
   alpha_func1172->SetParLimits(1,0,0);
   alpha_func1172->SetParameter(2,3.634859e-20);
   alpha_func1172->SetParError(2,1.231752e-20);
   alpha_func1172->SetParLimits(2,0,0);
   alpha_func1172->SetParameter(3,-3.62645e-24);
   alpha_func1172->SetParError(3,1.262186e-24);
   alpha_func1172->SetParLimits(3,0,0);
   alpha_func1172->Draw("Csame");
   
   Double_t _fx1171[13] = {
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
   Double_t _fy1171[13] = {
   1.576357,
   1.415144,
   1.431172,
   1.630997,
   1.455333,
   1.362069,
   1.30985,
   1.311073,
   1.08738,
   1.273236,
   1.256402,
   1.223008,
   7.902713};
   Double_t _fex1171[13] = {
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
   Double_t _fey1171[13] = {
   0.04650064,
   0.03864653,
   0.04591772,
   0.05316273,
   0.05977591,
   0.04183636,
   0.0404843,
   0.04421934,
   0.06676052,
   0.06155472,
   0.06902,
   0.06949921,
   0.5078668};
   gre = new TGraphErrors(13,_fx1171,_fy1171,_fex1171,_fey1171);
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
   
   TH1F *Graph_Graph1171 = new TH1F("Graph_Graph1171","",100,550,5950);
   Graph_Graph1171->SetMinimum(0.281623);
   Graph_Graph1171->SetMaximum(9.149576);
   Graph_Graph1171->SetDirectory(0);
   Graph_Graph1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1171->SetLineColor(ci);
   Graph_Graph1171->GetXaxis()->SetLabelFont(42);
   Graph_Graph1171->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetXaxis()->SetTitleFont(42);
   Graph_Graph1171->GetYaxis()->SetLabelFont(42);
   Graph_Graph1171->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetYaxis()->SetTitleFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1171);
   
   
   TF1 *alpha_func1172 = new TF1("alpha_func","pol3",1000,5500);
   alpha_func1172->SetBit(TF1::kNotDraw);
   alpha_func1172->SetFillColor(19);
   alpha_func1172->SetFillStyle(0);
   alpha_func1172->SetLineColor(2);
   alpha_func1172->SetLineWidth(2);
   alpha_func1172->SetChisquare(183.0342);
   alpha_func1172->SetNDF(9);
   alpha_func1172->GetXaxis()->SetLabelFont(42);
   alpha_func1172->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1172->GetXaxis()->SetLabelSize(0.05);
   alpha_func1172->GetXaxis()->SetTitleSize(0.06);
   alpha_func1172->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1172->GetXaxis()->SetTitleFont(42);
   alpha_func1172->GetYaxis()->SetLabelFont(42);
   alpha_func1172->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1172->GetYaxis()->SetLabelSize(0.05);
   alpha_func1172->GetYaxis()->SetTitleSize(0.06);
   alpha_func1172->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1172->GetYaxis()->SetTitleFont(42);
   alpha_func1172->SetParameter(0,1.217149);
   alpha_func1172->SetParError(0,0.189268);
   alpha_func1172->SetParLimits(0,0,0);
   alpha_func1172->SetParameter(1,0.0005128377);
   alpha_func1172->SetParError(1,0.0002441419);
   alpha_func1172->SetParLimits(1,0,0);
   alpha_func1172->SetParameter(2,-2.807398e-07);
   alpha_func1172->SetParError(2,9.291381e-08);
   alpha_func1172->SetParLimits(2,0,0);
   alpha_func1172->SetParameter(3,3.741585e-11);
   alpha_func1172->SetParError(3,1.064636e-11);
   alpha_func1172->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1172);
   gre->Draw("p");
   
   Double_t _fx1173[13] = {
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
   Double_t _fy1173[13] = {
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505,
   1.505};
   Double_t _fex1173[13] = {
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
   Double_t _fey1173[13] = {
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
   gre = new TGraphErrors(13,_fx1173,_fy1173,_fex1173,_fey1173);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1173 = new TH1F("Graph_Graph1173","",100,550,5950);
   Graph_Graph1173->SetMinimum(1.405);
   Graph_Graph1173->SetMaximum(2.605);
   Graph_Graph1173->SetDirectory(0);
   Graph_Graph1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1173->SetLineColor(ci);
   Graph_Graph1173->GetXaxis()->SetLabelFont(42);
   Graph_Graph1173->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetXaxis()->SetTitleFont(42);
   Graph_Graph1173->GetYaxis()->SetLabelFont(42);
   Graph_Graph1173->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetYaxis()->SetTitleFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1173);
   
   
   TF1 *alpha_func1174 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1174->SetBit(TF1::kNotDraw);
   alpha_func1174->SetFillColor(19);
   alpha_func1174->SetFillStyle(0);
   alpha_func1174->SetLineColor(2);
   alpha_func1174->SetLineWidth(2);
   alpha_func1174->SetChisquare(6.409495e-31);
   alpha_func1174->SetNDF(12);
   alpha_func1174->GetXaxis()->SetLabelFont(42);
   alpha_func1174->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1174->GetXaxis()->SetLabelSize(0.05);
   alpha_func1174->GetXaxis()->SetTitleSize(0.06);
   alpha_func1174->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1174->GetXaxis()->SetTitleFont(42);
   alpha_func1174->GetYaxis()->SetLabelFont(42);
   alpha_func1174->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1174->GetYaxis()->SetLabelSize(0.05);
   alpha_func1174->GetYaxis()->SetTitleSize(0.06);
   alpha_func1174->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1174->GetYaxis()->SetTitleFont(42);
   alpha_func1174->SetParameter(0,1.505);
   alpha_func1174->SetParError(0,6.409876e-17);
   alpha_func1174->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1174);
   gre->Draw("p");
   
   TF1 *alpha_func1175 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1175->SetFillColor(19);
   alpha_func1175->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1175->SetMarkerColor(ci);
   alpha_func1175->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1175->SetLineColor(ci);
   alpha_func1175->SetLineWidth(3);
   alpha_func1175->SetChisquare(6.409495e-31);
   alpha_func1175->SetNDF(12);
   alpha_func1175->GetXaxis()->SetLabelFont(42);
   alpha_func1175->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1175->GetXaxis()->SetLabelSize(0.05);
   alpha_func1175->GetXaxis()->SetTitleSize(0.06);
   alpha_func1175->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1175->GetXaxis()->SetTitleFont(42);
   alpha_func1175->GetYaxis()->SetLabelFont(42);
   alpha_func1175->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1175->GetYaxis()->SetLabelSize(0.05);
   alpha_func1175->GetYaxis()->SetTitleSize(0.06);
   alpha_func1175->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1175->GetYaxis()->SetTitleFont(42);
   alpha_func1175->SetParameter(0,1.505);
   alpha_func1175->SetParError(0,6.409876e-17);
   alpha_func1175->SetParLimits(0,0,0);
   alpha_func1175->Draw("Csame");
   
   TF1 *alpha_func1176 = new TF1("alpha_func","pol3",0,13000);
   alpha_func1176->SetFillColor(19);
   alpha_func1176->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1176->SetMarkerColor(ci);
   alpha_func1176->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1176->SetLineColor(ci);
   alpha_func1176->SetLineWidth(3);
   alpha_func1176->SetLineStyle(9);
   alpha_func1176->SetChisquare(183.0342);
   alpha_func1176->SetNDF(9);
   alpha_func1176->GetXaxis()->SetLabelFont(42);
   alpha_func1176->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1176->GetXaxis()->SetLabelSize(0.05);
   alpha_func1176->GetXaxis()->SetTitleSize(0.06);
   alpha_func1176->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1176->GetXaxis()->SetTitleFont(42);
   alpha_func1176->GetYaxis()->SetLabelFont(42);
   alpha_func1176->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1176->GetYaxis()->SetLabelSize(0.05);
   alpha_func1176->GetYaxis()->SetTitleSize(0.06);
   alpha_func1176->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1176->GetYaxis()->SetTitleFont(42);
   alpha_func1176->SetParameter(0,1.217149);
   alpha_func1176->SetParError(0,0.189268);
   alpha_func1176->SetParLimits(0,0,0);
   alpha_func1176->SetParameter(1,0.0005128377);
   alpha_func1176->SetParError(1,0.0002441419);
   alpha_func1176->SetParLimits(1,0,0);
   alpha_func1176->SetParameter(2,-2.807398e-07);
   alpha_func1176->SetParError(2,9.291381e-08);
   alpha_func1176->SetParLimits(2,0,0);
   alpha_func1176->SetParameter(3,3.741585e-11);
   alpha_func1176->SetParError(3,1.064636e-11);
   alpha_func1176->SetParLimits(3,0,0);
   alpha_func1176->Draw("Csame");
   
   Double_t _fx1175[13] = {
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
   Double_t _fy1175[13] = {
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125,
   1.125};
   Double_t _fex1175[13] = {
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
   Double_t _fey1175[13] = {
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
   gre = new TGraphErrors(13,_fx1175,_fy1175,_fex1175,_fey1175);
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
   
   TH1F *Graph_Graph1175 = new TH1F("Graph_Graph1175","",100,550,5950);
   Graph_Graph1175->SetMinimum(1.025);
   Graph_Graph1175->SetMaximum(2.225);
   Graph_Graph1175->SetDirectory(0);
   Graph_Graph1175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1175->SetLineColor(ci);
   Graph_Graph1175->GetXaxis()->SetLabelFont(42);
   Graph_Graph1175->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetXaxis()->SetTitleFont(42);
   Graph_Graph1175->GetYaxis()->SetLabelFont(42);
   Graph_Graph1175->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetYaxis()->SetTitleFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1175);
   
   
   TF1 *alpha_func1176 = new TF1("alpha_func","pol4",1000,5500);
   alpha_func1176->SetBit(TF1::kNotDraw);
   alpha_func1176->SetFillColor(19);
   alpha_func1176->SetFillStyle(0);
   alpha_func1176->SetLineColor(2);
   alpha_func1176->SetLineWidth(2);
   alpha_func1176->SetChisquare(1.467281e-27);
   alpha_func1176->SetNDF(8);
   alpha_func1176->GetXaxis()->SetLabelFont(42);
   alpha_func1176->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1176->GetXaxis()->SetLabelSize(0.05);
   alpha_func1176->GetXaxis()->SetTitleSize(0.06);
   alpha_func1176->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1176->GetXaxis()->SetTitleFont(42);
   alpha_func1176->GetYaxis()->SetLabelFont(42);
   alpha_func1176->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1176->GetYaxis()->SetLabelSize(0.05);
   alpha_func1176->GetYaxis()->SetTitleSize(0.06);
   alpha_func1176->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1176->GetYaxis()->SetTitleFont(42);
   alpha_func1176->SetParameter(0,1.125);
   alpha_func1176->SetParError(0,1.010526e-13);
   alpha_func1176->SetParLimits(0,0,0);
   alpha_func1176->SetParameter(1,-4.077273e-16);
   alpha_func1176->SetParError(1,1.631386e-16);
   alpha_func1176->SetParLimits(1,0,0);
   alpha_func1176->SetParameter(2,2.057548e-19);
   alpha_func1176->SetParError(2,8.923675e-20);
   alpha_func1176->SetParLimits(2,0,0);
   alpha_func1176->SetParameter(3,-4.192122e-23);
   alpha_func1176->SetParError(3,1.985292e-23);
   alpha_func1176->SetParLimits(3,0,0);
   alpha_func1176->SetParameter(4,2.979754e-27);
   alpha_func1176->SetParError(4,1.538285e-27);
   alpha_func1176->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1176);
   gre->Draw("p");
   
   Double_t _fx1177[13] = {
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
   Double_t _fy1177[13] = {
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08,
   1.08};
   Double_t _fex1177[13] = {
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
   Double_t _fey1177[13] = {
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
   gre = new TGraphErrors(13,_fx1177,_fy1177,_fex1177,_fey1177);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","",100,550,5950);
   Graph_Graph1177->SetMinimum(0.98);
   Graph_Graph1177->SetMaximum(2.18);
   Graph_Graph1177->SetDirectory(0);
   Graph_Graph1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1177->SetLineColor(ci);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1177);
   
   
   TF1 *alpha_func1178 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1178->SetBit(TF1::kNotDraw);
   alpha_func1178->SetFillColor(19);
   alpha_func1178->SetFillStyle(0);
   alpha_func1178->SetLineColor(2);
   alpha_func1178->SetLineWidth(2);
   alpha_func1178->SetChisquare(6.409495e-31);
   alpha_func1178->SetNDF(12);
   alpha_func1178->GetXaxis()->SetLabelFont(42);
   alpha_func1178->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1178->GetXaxis()->SetLabelSize(0.05);
   alpha_func1178->GetXaxis()->SetTitleSize(0.06);
   alpha_func1178->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1178->GetXaxis()->SetTitleFont(42);
   alpha_func1178->GetYaxis()->SetLabelFont(42);
   alpha_func1178->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1178->GetYaxis()->SetLabelSize(0.05);
   alpha_func1178->GetYaxis()->SetTitleSize(0.06);
   alpha_func1178->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1178->GetYaxis()->SetTitleFont(42);
   alpha_func1178->SetParameter(0,1.08);
   alpha_func1178->SetParError(0,6.409876e-17);
   alpha_func1178->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1178);
   gre->Draw("p");
   
   TF1 *alpha_func1179 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1179->SetFillColor(19);
   alpha_func1179->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha_func1179->SetMarkerColor(ci);
   alpha_func1179->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   alpha_func1179->SetLineColor(ci);
   alpha_func1179->SetLineWidth(3);
   alpha_func1179->SetChisquare(6.409495e-31);
   alpha_func1179->SetNDF(12);
   alpha_func1179->GetXaxis()->SetLabelFont(42);
   alpha_func1179->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1179->GetXaxis()->SetLabelSize(0.05);
   alpha_func1179->GetXaxis()->SetTitleSize(0.06);
   alpha_func1179->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1179->GetXaxis()->SetTitleFont(42);
   alpha_func1179->GetYaxis()->SetLabelFont(42);
   alpha_func1179->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1179->GetYaxis()->SetLabelSize(0.05);
   alpha_func1179->GetYaxis()->SetTitleSize(0.06);
   alpha_func1179->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1179->GetYaxis()->SetTitleFont(42);
   alpha_func1179->SetParameter(0,1.08);
   alpha_func1179->SetParError(0,6.409876e-17);
   alpha_func1179->SetParLimits(0,0,0);
   alpha_func1179->Draw("Csame");
   
   TF1 *alpha_func1180 = new TF1("alpha_func","pol4",0,13000);
   alpha_func1180->SetFillColor(19);
   alpha_func1180->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha_func1180->SetMarkerColor(ci);
   alpha_func1180->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   alpha_func1180->SetLineColor(ci);
   alpha_func1180->SetLineWidth(3);
   alpha_func1180->SetLineStyle(9);
   alpha_func1180->SetChisquare(1.467281e-27);
   alpha_func1180->SetNDF(8);
   alpha_func1180->GetXaxis()->SetLabelFont(42);
   alpha_func1180->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1180->GetXaxis()->SetLabelSize(0.05);
   alpha_func1180->GetXaxis()->SetTitleSize(0.06);
   alpha_func1180->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1180->GetXaxis()->SetTitleFont(42);
   alpha_func1180->GetYaxis()->SetLabelFont(42);
   alpha_func1180->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1180->GetYaxis()->SetLabelSize(0.05);
   alpha_func1180->GetYaxis()->SetTitleSize(0.06);
   alpha_func1180->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1180->GetYaxis()->SetTitleFont(42);
   alpha_func1180->SetParameter(0,1.125);
   alpha_func1180->SetParError(0,1.010526e-13);
   alpha_func1180->SetParLimits(0,0,0);
   alpha_func1180->SetParameter(1,-4.077273e-16);
   alpha_func1180->SetParError(1,1.631386e-16);
   alpha_func1180->SetParLimits(1,0,0);
   alpha_func1180->SetParameter(2,2.057548e-19);
   alpha_func1180->SetParError(2,8.923675e-20);
   alpha_func1180->SetParLimits(2,0,0);
   alpha_func1180->SetParameter(3,-4.192122e-23);
   alpha_func1180->SetParError(3,1.985292e-23);
   alpha_func1180->SetParLimits(3,0,0);
   alpha_func1180->SetParameter(4,2.979754e-27);
   alpha_func1180->SetParError(4,1.538285e-27);
   alpha_func1180->SetParLimits(4,0,0);
   alpha_func1180->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("alpha_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha_func","G_{B}#rightarrow ZZ","L");

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
