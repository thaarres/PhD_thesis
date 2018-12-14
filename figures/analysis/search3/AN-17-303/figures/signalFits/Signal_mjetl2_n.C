void Signal_mjetl2_n()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:03 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-0.742268,5728.857,4.412371);
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
   
   Double_t _fx1179[13] = {
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
   Double_t _fy1179[13] = {
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85};
   Double_t _fex1179[13] = {
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
   Double_t _fey1179[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1179,_fy1179,_fex1179,_fey1179);
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
   
   TH1F *Graph_Graph1179 = new TH1F("Graph_Graph1179","",100,550,5950);
   Graph_Graph1179->SetMinimum(0);
   Graph_Graph1179->SetMaximum(4);
   Graph_Graph1179->SetDirectory(0);
   Graph_Graph1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1179->SetLineColor(ci);
   Graph_Graph1179->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1179->GetXaxis()->SetRange(11,92);
   Graph_Graph1179->GetXaxis()->SetNdivisions(209);
   Graph_Graph1179->GetXaxis()->SetLabelFont(42);
   Graph_Graph1179->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1179->GetXaxis()->SetTitleFont(42);
   Graph_Graph1179->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph1179->GetYaxis()->SetNdivisions(504);
   Graph_Graph1179->GetYaxis()->SetLabelFont(42);
   Graph_Graph1179->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1179->GetYaxis()->SetTitleFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1179);
   
   
   TF1 *n_func1180 = new TF1("n_func","pol0",1000,5500);
   n_func1180->SetBit(TF1::kNotDraw);
   n_func1180->SetFillColor(19);
   n_func1180->SetFillStyle(0);
   n_func1180->SetLineColor(2);
   n_func1180->SetLineWidth(2);
   n_func1180->SetChisquare(2.307418e-29);
   n_func1180->SetNDF(12);
   n_func1180->GetXaxis()->SetLabelFont(42);
   n_func1180->GetXaxis()->SetLabelOffset(0.007);
   n_func1180->GetXaxis()->SetLabelSize(0.05);
   n_func1180->GetXaxis()->SetTitleSize(0.06);
   n_func1180->GetXaxis()->SetTitleOffset(0.9);
   n_func1180->GetXaxis()->SetTitleFont(42);
   n_func1180->GetYaxis()->SetLabelFont(42);
   n_func1180->GetYaxis()->SetLabelOffset(0.007);
   n_func1180->GetYaxis()->SetLabelSize(0.05);
   n_func1180->GetYaxis()->SetTitleSize(0.06);
   n_func1180->GetYaxis()->SetTitleOffset(1.25);
   n_func1180->GetYaxis()->SetTitleFont(42);
   n_func1180->SetParameter(0,2.85);
   n_func1180->SetParError(0,3.845925e-16);
   n_func1180->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1180);
   gre->Draw("ap");
   
   Double_t _fx1181[13] = {
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
   Double_t _fy1181[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1181[13] = {
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
   Double_t _fey1181[13] = {
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
   gre = new TGraphErrors(13,_fx1181,_fy1181,_fex1181,_fey1181);
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
   
   TH1F *Graph_Graph1181 = new TH1F("Graph_Graph1181","",100,550,5950);
   Graph_Graph1181->SetMinimum(1.9);
   Graph_Graph1181->SetMaximum(3.1);
   Graph_Graph1181->SetDirectory(0);
   Graph_Graph1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1181->SetLineColor(ci);
   Graph_Graph1181->GetXaxis()->SetLabelFont(42);
   Graph_Graph1181->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetXaxis()->SetTitleFont(42);
   Graph_Graph1181->GetYaxis()->SetLabelFont(42);
   Graph_Graph1181->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetYaxis()->SetTitleFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1181);
   
   
   TF1 *n_func1182 = new TF1("n_func","pol0",1000,5500);
   n_func1182->SetBit(TF1::kNotDraw);
   n_func1182->SetFillColor(19);
   n_func1182->SetFillStyle(0);
   n_func1182->SetLineColor(2);
   n_func1182->SetLineWidth(2);
   n_func1182->SetChisquare(2.563798e-30);
   n_func1182->SetNDF(12);
   n_func1182->GetXaxis()->SetLabelFont(42);
   n_func1182->GetXaxis()->SetLabelOffset(0.007);
   n_func1182->GetXaxis()->SetLabelSize(0.05);
   n_func1182->GetXaxis()->SetTitleSize(0.06);
   n_func1182->GetXaxis()->SetTitleOffset(0.9);
   n_func1182->GetXaxis()->SetTitleFont(42);
   n_func1182->GetYaxis()->SetLabelFont(42);
   n_func1182->GetYaxis()->SetLabelOffset(0.007);
   n_func1182->GetYaxis()->SetLabelSize(0.05);
   n_func1182->GetYaxis()->SetTitleSize(0.06);
   n_func1182->GetYaxis()->SetTitleOffset(1.25);
   n_func1182->GetYaxis()->SetTitleFont(42);
   n_func1182->SetParameter(0,2);
   n_func1182->SetParError(0,1.281975e-16);
   n_func1182->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1182);
   gre->Draw("p");
   
   Double_t _fx1183[13] = {
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
   Double_t _fy1183[13] = {
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85,
   2.85};
   Double_t _fex1183[13] = {
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
   Double_t _fey1183[13] = {
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
   gre = new TGraphErrors(13,_fx1183,_fy1183,_fex1183,_fey1183);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11791183 = new TH1F("Graph_Graph_Graph11791183","",100,550,5950);
   Graph_Graph_Graph11791183->SetMinimum(0);
   Graph_Graph_Graph11791183->SetMaximum(4);
   Graph_Graph_Graph11791183->SetDirectory(0);
   Graph_Graph_Graph11791183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11791183->SetLineColor(ci);
   Graph_Graph_Graph11791183->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph11791183->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph11791183->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11791183->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11791183->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11791183->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11791183->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11791183->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11791183->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph_Graph11791183->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11791183->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11791183->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11791183->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11791183->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11791183->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11791183->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11791183->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11791183->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11791183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11791183);
   
   
   TF1 *n_func1184 = new TF1("n_func","pol0",1000,5500);
   n_func1184->SetBit(TF1::kNotDraw);
   n_func1184->SetFillColor(19);
   n_func1184->SetFillStyle(0);
   n_func1184->SetLineColor(2);
   n_func1184->SetLineWidth(2);
   n_func1184->SetChisquare(2.307418e-29);
   n_func1184->SetNDF(12);
   n_func1184->GetXaxis()->SetLabelFont(42);
   n_func1184->GetXaxis()->SetLabelOffset(0.007);
   n_func1184->GetXaxis()->SetLabelSize(0.05);
   n_func1184->GetXaxis()->SetTitleSize(0.06);
   n_func1184->GetXaxis()->SetTitleOffset(0.9);
   n_func1184->GetXaxis()->SetTitleFont(42);
   n_func1184->GetYaxis()->SetLabelFont(42);
   n_func1184->GetYaxis()->SetLabelOffset(0.007);
   n_func1184->GetYaxis()->SetLabelSize(0.05);
   n_func1184->GetYaxis()->SetTitleSize(0.06);
   n_func1184->GetYaxis()->SetTitleOffset(1.25);
   n_func1184->GetYaxis()->SetTitleFont(42);
   n_func1184->SetParameter(0,2.85);
   n_func1184->SetParError(0,3.845925e-16);
   n_func1184->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1184);
   gre->Draw("p");
   
   TF1 *n_func1185 = new TF1("n_func","pol0",0,13000);
   n_func1185->SetFillColor(19);
   n_func1185->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n_func1185->SetMarkerColor(ci);
   n_func1185->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   n_func1185->SetLineColor(ci);
   n_func1185->SetLineWidth(3);
   n_func1185->SetChisquare(2.307418e-29);
   n_func1185->SetNDF(12);
   n_func1185->GetXaxis()->SetLabelFont(42);
   n_func1185->GetXaxis()->SetLabelOffset(0.007);
   n_func1185->GetXaxis()->SetLabelSize(0.05);
   n_func1185->GetXaxis()->SetTitleSize(0.06);
   n_func1185->GetXaxis()->SetTitleOffset(0.9);
   n_func1185->GetXaxis()->SetTitleFont(42);
   n_func1185->GetYaxis()->SetLabelFont(42);
   n_func1185->GetYaxis()->SetLabelOffset(0.007);
   n_func1185->GetYaxis()->SetLabelSize(0.05);
   n_func1185->GetYaxis()->SetTitleSize(0.06);
   n_func1185->GetYaxis()->SetTitleOffset(1.25);
   n_func1185->GetYaxis()->SetTitleFont(42);
   n_func1185->SetParameter(0,2.85);
   n_func1185->SetParError(0,3.845925e-16);
   n_func1185->SetParLimits(0,0,0);
   n_func1185->Draw("Csame");
   
   TF1 *n_func1186 = new TF1("n_func","pol0",0,13000);
   n_func1186->SetFillColor(19);
   n_func1186->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n_func1186->SetMarkerColor(ci);
   n_func1186->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   n_func1186->SetLineColor(ci);
   n_func1186->SetLineWidth(3);
   n_func1186->SetLineStyle(9);
   n_func1186->SetChisquare(2.563798e-30);
   n_func1186->SetNDF(12);
   n_func1186->GetXaxis()->SetLabelFont(42);
   n_func1186->GetXaxis()->SetLabelOffset(0.007);
   n_func1186->GetXaxis()->SetLabelSize(0.05);
   n_func1186->GetXaxis()->SetTitleSize(0.06);
   n_func1186->GetXaxis()->SetTitleOffset(0.9);
   n_func1186->GetXaxis()->SetTitleFont(42);
   n_func1186->GetYaxis()->SetLabelFont(42);
   n_func1186->GetYaxis()->SetLabelOffset(0.007);
   n_func1186->GetYaxis()->SetLabelSize(0.05);
   n_func1186->GetYaxis()->SetTitleSize(0.06);
   n_func1186->GetYaxis()->SetTitleOffset(1.25);
   n_func1186->GetYaxis()->SetTitleFont(42);
   n_func1186->SetParameter(0,2);
   n_func1186->SetParError(0,1.281975e-16);
   n_func1186->SetParLimits(0,0,0);
   n_func1186->Draw("Csame");
   
   Double_t _fx1185[13] = {
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
   Double_t _fy1185[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1185[13] = {
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
   Double_t _fey1185[13] = {
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
   gre = new TGraphErrors(13,_fx1185,_fy1185,_fex1185,_fey1185);
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
   
   TH1F *Graph_Graph1185 = new TH1F("Graph_Graph1185","",100,550,5950);
   Graph_Graph1185->SetMinimum(1.9);
   Graph_Graph1185->SetMaximum(3.1);
   Graph_Graph1185->SetDirectory(0);
   Graph_Graph1185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1185->SetLineColor(ci);
   Graph_Graph1185->GetXaxis()->SetLabelFont(42);
   Graph_Graph1185->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1185->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1185->GetXaxis()->SetTitleFont(42);
   Graph_Graph1185->GetYaxis()->SetLabelFont(42);
   Graph_Graph1185->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1185->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1185->GetYaxis()->SetTitleFont(42);
   Graph_Graph1185->GetZaxis()->SetLabelFont(42);
   Graph_Graph1185->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1185->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1185);
   
   
   TF1 *n_func1186 = new TF1("n_func","pol0",1000,5500);
   n_func1186->SetBit(TF1::kNotDraw);
   n_func1186->SetFillColor(19);
   n_func1186->SetFillStyle(0);
   n_func1186->SetLineColor(2);
   n_func1186->SetLineWidth(2);
   n_func1186->SetChisquare(2.563798e-30);
   n_func1186->SetNDF(12);
   n_func1186->GetXaxis()->SetLabelFont(42);
   n_func1186->GetXaxis()->SetLabelOffset(0.007);
   n_func1186->GetXaxis()->SetLabelSize(0.05);
   n_func1186->GetXaxis()->SetTitleSize(0.06);
   n_func1186->GetXaxis()->SetTitleOffset(0.9);
   n_func1186->GetXaxis()->SetTitleFont(42);
   n_func1186->GetYaxis()->SetLabelFont(42);
   n_func1186->GetYaxis()->SetLabelOffset(0.007);
   n_func1186->GetYaxis()->SetLabelSize(0.05);
   n_func1186->GetYaxis()->SetTitleSize(0.06);
   n_func1186->GetYaxis()->SetTitleOffset(1.25);
   n_func1186->GetYaxis()->SetTitleFont(42);
   n_func1186->SetParameter(0,2);
   n_func1186->SetParError(0,1.281975e-16);
   n_func1186->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1186);
   gre->Draw("p");
   
   Double_t _fx1187[13] = {
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
   Double_t _fy1187[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1187[13] = {
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
   Double_t _fey1187[13] = {
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
   gre = new TGraphErrors(13,_fx1187,_fy1187,_fex1187,_fey1187);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1187 = new TH1F("Graph_Graph1187","",100,550,5950);
   Graph_Graph1187->SetMinimum(1.9);
   Graph_Graph1187->SetMaximum(3.1);
   Graph_Graph1187->SetDirectory(0);
   Graph_Graph1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1187->SetLineColor(ci);
   Graph_Graph1187->GetXaxis()->SetLabelFont(42);
   Graph_Graph1187->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetXaxis()->SetTitleFont(42);
   Graph_Graph1187->GetYaxis()->SetLabelFont(42);
   Graph_Graph1187->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetYaxis()->SetTitleFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1187);
   
   
   TF1 *n_func1188 = new TF1("n_func","pol0",1000,5500);
   n_func1188->SetBit(TF1::kNotDraw);
   n_func1188->SetFillColor(19);
   n_func1188->SetFillStyle(0);
   n_func1188->SetLineColor(2);
   n_func1188->SetLineWidth(2);
   n_func1188->SetChisquare(2.563798e-30);
   n_func1188->SetNDF(12);
   n_func1188->GetXaxis()->SetLabelFont(42);
   n_func1188->GetXaxis()->SetLabelOffset(0.007);
   n_func1188->GetXaxis()->SetLabelSize(0.05);
   n_func1188->GetXaxis()->SetTitleSize(0.06);
   n_func1188->GetXaxis()->SetTitleOffset(0.9);
   n_func1188->GetXaxis()->SetTitleFont(42);
   n_func1188->GetYaxis()->SetLabelFont(42);
   n_func1188->GetYaxis()->SetLabelOffset(0.007);
   n_func1188->GetYaxis()->SetLabelSize(0.05);
   n_func1188->GetYaxis()->SetTitleSize(0.06);
   n_func1188->GetYaxis()->SetTitleOffset(1.25);
   n_func1188->GetYaxis()->SetTitleFont(42);
   n_func1188->SetParameter(0,2);
   n_func1188->SetParError(0,1.281975e-16);
   n_func1188->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1188);
   gre->Draw("p");
   
   TF1 *n_func1189 = new TF1("n_func","pol0",0,13000);
   n_func1189->SetFillColor(19);
   n_func1189->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n_func1189->SetMarkerColor(ci);
   n_func1189->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   n_func1189->SetLineColor(ci);
   n_func1189->SetLineWidth(3);
   n_func1189->SetChisquare(2.563798e-30);
   n_func1189->SetNDF(12);
   n_func1189->GetXaxis()->SetLabelFont(42);
   n_func1189->GetXaxis()->SetLabelOffset(0.007);
   n_func1189->GetXaxis()->SetLabelSize(0.05);
   n_func1189->GetXaxis()->SetTitleSize(0.06);
   n_func1189->GetXaxis()->SetTitleOffset(0.9);
   n_func1189->GetXaxis()->SetTitleFont(42);
   n_func1189->GetYaxis()->SetLabelFont(42);
   n_func1189->GetYaxis()->SetLabelOffset(0.007);
   n_func1189->GetYaxis()->SetLabelSize(0.05);
   n_func1189->GetYaxis()->SetTitleSize(0.06);
   n_func1189->GetYaxis()->SetTitleOffset(1.25);
   n_func1189->GetYaxis()->SetTitleFont(42);
   n_func1189->SetParameter(0,2);
   n_func1189->SetParError(0,1.281975e-16);
   n_func1189->SetParLimits(0,0,0);
   n_func1189->Draw("Csame");
   
   TF1 *n_func1190 = new TF1("n_func","pol0",0,13000);
   n_func1190->SetFillColor(19);
   n_func1190->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n_func1190->SetMarkerColor(ci);
   n_func1190->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   n_func1190->SetLineColor(ci);
   n_func1190->SetLineWidth(3);
   n_func1190->SetLineStyle(9);
   n_func1190->SetChisquare(2.563798e-30);
   n_func1190->SetNDF(12);
   n_func1190->GetXaxis()->SetLabelFont(42);
   n_func1190->GetXaxis()->SetLabelOffset(0.007);
   n_func1190->GetXaxis()->SetLabelSize(0.05);
   n_func1190->GetXaxis()->SetTitleSize(0.06);
   n_func1190->GetXaxis()->SetTitleOffset(0.9);
   n_func1190->GetXaxis()->SetTitleFont(42);
   n_func1190->GetYaxis()->SetLabelFont(42);
   n_func1190->GetYaxis()->SetLabelOffset(0.007);
   n_func1190->GetYaxis()->SetLabelSize(0.05);
   n_func1190->GetYaxis()->SetTitleSize(0.06);
   n_func1190->GetYaxis()->SetTitleOffset(1.25);
   n_func1190->GetYaxis()->SetTitleFont(42);
   n_func1190->SetParameter(0,2);
   n_func1190->SetParError(0,1.281975e-16);
   n_func1190->SetParLimits(0,0,0);
   n_func1190->Draw("Csame");
   
   Double_t _fx1189[13] = {
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
   Double_t _fy1189[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1189[13] = {
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
   Double_t _fey1189[13] = {
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
   gre = new TGraphErrors(13,_fx1189,_fy1189,_fex1189,_fey1189);
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
   
   TH1F *Graph_Graph1189 = new TH1F("Graph_Graph1189","",100,550,5950);
   Graph_Graph1189->SetMinimum(1.9);
   Graph_Graph1189->SetMaximum(3.1);
   Graph_Graph1189->SetDirectory(0);
   Graph_Graph1189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1189->SetLineColor(ci);
   Graph_Graph1189->GetXaxis()->SetLabelFont(42);
   Graph_Graph1189->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetXaxis()->SetTitleFont(42);
   Graph_Graph1189->GetYaxis()->SetLabelFont(42);
   Graph_Graph1189->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetYaxis()->SetTitleFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1189);
   
   
   TF1 *n_func1190 = new TF1("n_func","pol0",1000,5500);
   n_func1190->SetBit(TF1::kNotDraw);
   n_func1190->SetFillColor(19);
   n_func1190->SetFillStyle(0);
   n_func1190->SetLineColor(2);
   n_func1190->SetLineWidth(2);
   n_func1190->SetChisquare(2.563798e-30);
   n_func1190->SetNDF(12);
   n_func1190->GetXaxis()->SetLabelFont(42);
   n_func1190->GetXaxis()->SetLabelOffset(0.007);
   n_func1190->GetXaxis()->SetLabelSize(0.05);
   n_func1190->GetXaxis()->SetTitleSize(0.06);
   n_func1190->GetXaxis()->SetTitleOffset(0.9);
   n_func1190->GetXaxis()->SetTitleFont(42);
   n_func1190->GetYaxis()->SetLabelFont(42);
   n_func1190->GetYaxis()->SetLabelOffset(0.007);
   n_func1190->GetYaxis()->SetLabelSize(0.05);
   n_func1190->GetYaxis()->SetTitleSize(0.06);
   n_func1190->GetYaxis()->SetTitleOffset(1.25);
   n_func1190->GetYaxis()->SetTitleFont(42);
   n_func1190->SetParameter(0,2);
   n_func1190->SetParError(0,1.281975e-16);
   n_func1190->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1190);
   gre->Draw("p");
   
   Double_t _fx1191[13] = {
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
   Double_t _fy1191[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1191[13] = {
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
   Double_t _fey1191[13] = {
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
   gre = new TGraphErrors(13,_fx1191,_fy1191,_fex1191,_fey1191);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1191 = new TH1F("Graph_Graph1191","",100,550,5950);
   Graph_Graph1191->SetMinimum(1.9);
   Graph_Graph1191->SetMaximum(3.1);
   Graph_Graph1191->SetDirectory(0);
   Graph_Graph1191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1191->SetLineColor(ci);
   Graph_Graph1191->GetXaxis()->SetLabelFont(42);
   Graph_Graph1191->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1191->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1191->GetXaxis()->SetTitleFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1191->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1191->GetYaxis()->SetTitleFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1191->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1191);
   
   
   TF1 *n_func1192 = new TF1("n_func","pol0",1000,5500);
   n_func1192->SetBit(TF1::kNotDraw);
   n_func1192->SetFillColor(19);
   n_func1192->SetFillStyle(0);
   n_func1192->SetLineColor(2);
   n_func1192->SetLineWidth(2);
   n_func1192->SetChisquare(2.563798e-30);
   n_func1192->SetNDF(12);
   n_func1192->GetXaxis()->SetLabelFont(42);
   n_func1192->GetXaxis()->SetLabelOffset(0.007);
   n_func1192->GetXaxis()->SetLabelSize(0.05);
   n_func1192->GetXaxis()->SetTitleSize(0.06);
   n_func1192->GetXaxis()->SetTitleOffset(0.9);
   n_func1192->GetXaxis()->SetTitleFont(42);
   n_func1192->GetYaxis()->SetLabelFont(42);
   n_func1192->GetYaxis()->SetLabelOffset(0.007);
   n_func1192->GetYaxis()->SetLabelSize(0.05);
   n_func1192->GetYaxis()->SetTitleSize(0.06);
   n_func1192->GetYaxis()->SetTitleOffset(1.25);
   n_func1192->GetYaxis()->SetTitleFont(42);
   n_func1192->SetParameter(0,2);
   n_func1192->SetParError(0,1.281975e-16);
   n_func1192->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1192);
   gre->Draw("p");
   
   TF1 *n_func1193 = new TF1("n_func","pol0",0,13000);
   n_func1193->SetFillColor(19);
   n_func1193->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n_func1193->SetMarkerColor(ci);
   n_func1193->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   n_func1193->SetLineColor(ci);
   n_func1193->SetLineWidth(3);
   n_func1193->SetChisquare(2.563798e-30);
   n_func1193->SetNDF(12);
   n_func1193->GetXaxis()->SetLabelFont(42);
   n_func1193->GetXaxis()->SetLabelOffset(0.007);
   n_func1193->GetXaxis()->SetLabelSize(0.05);
   n_func1193->GetXaxis()->SetTitleSize(0.06);
   n_func1193->GetXaxis()->SetTitleOffset(0.9);
   n_func1193->GetXaxis()->SetTitleFont(42);
   n_func1193->GetYaxis()->SetLabelFont(42);
   n_func1193->GetYaxis()->SetLabelOffset(0.007);
   n_func1193->GetYaxis()->SetLabelSize(0.05);
   n_func1193->GetYaxis()->SetTitleSize(0.06);
   n_func1193->GetYaxis()->SetTitleOffset(1.25);
   n_func1193->GetYaxis()->SetTitleFont(42);
   n_func1193->SetParameter(0,2);
   n_func1193->SetParError(0,1.281975e-16);
   n_func1193->SetParLimits(0,0,0);
   n_func1193->Draw("Csame");
   
   TF1 *n_func1194 = new TF1("n_func","pol0",0,13000);
   n_func1194->SetFillColor(19);
   n_func1194->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n_func1194->SetMarkerColor(ci);
   n_func1194->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   n_func1194->SetLineColor(ci);
   n_func1194->SetLineWidth(3);
   n_func1194->SetLineStyle(9);
   n_func1194->SetChisquare(2.563798e-30);
   n_func1194->SetNDF(12);
   n_func1194->GetXaxis()->SetLabelFont(42);
   n_func1194->GetXaxis()->SetLabelOffset(0.007);
   n_func1194->GetXaxis()->SetLabelSize(0.05);
   n_func1194->GetXaxis()->SetTitleSize(0.06);
   n_func1194->GetXaxis()->SetTitleOffset(0.9);
   n_func1194->GetXaxis()->SetTitleFont(42);
   n_func1194->GetYaxis()->SetLabelFont(42);
   n_func1194->GetYaxis()->SetLabelOffset(0.007);
   n_func1194->GetYaxis()->SetLabelSize(0.05);
   n_func1194->GetYaxis()->SetTitleSize(0.06);
   n_func1194->GetYaxis()->SetTitleOffset(1.25);
   n_func1194->GetYaxis()->SetTitleFont(42);
   n_func1194->SetParameter(0,2);
   n_func1194->SetParError(0,1.281975e-16);
   n_func1194->SetParLimits(0,0,0);
   n_func1194->Draw("Csame");
   
   Double_t _fx1193[13] = {
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
   Double_t _fy1193[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1193[13] = {
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
   Double_t _fey1193[13] = {
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
   gre = new TGraphErrors(13,_fx1193,_fy1193,_fex1193,_fey1193);
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
   
   TH1F *Graph_Graph1193 = new TH1F("Graph_Graph1193","",100,550,5950);
   Graph_Graph1193->SetMinimum(1.9);
   Graph_Graph1193->SetMaximum(3.1);
   Graph_Graph1193->SetDirectory(0);
   Graph_Graph1193->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1193->SetLineColor(ci);
   Graph_Graph1193->GetXaxis()->SetLabelFont(42);
   Graph_Graph1193->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1193->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1193->GetXaxis()->SetTitleFont(42);
   Graph_Graph1193->GetYaxis()->SetLabelFont(42);
   Graph_Graph1193->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1193->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1193->GetYaxis()->SetTitleFont(42);
   Graph_Graph1193->GetZaxis()->SetLabelFont(42);
   Graph_Graph1193->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1193->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1193);
   
   
   TF1 *n_func1194 = new TF1("n_func","pol0",1000,5500);
   n_func1194->SetBit(TF1::kNotDraw);
   n_func1194->SetFillColor(19);
   n_func1194->SetFillStyle(0);
   n_func1194->SetLineColor(2);
   n_func1194->SetLineWidth(2);
   n_func1194->SetChisquare(2.563798e-30);
   n_func1194->SetNDF(12);
   n_func1194->GetXaxis()->SetLabelFont(42);
   n_func1194->GetXaxis()->SetLabelOffset(0.007);
   n_func1194->GetXaxis()->SetLabelSize(0.05);
   n_func1194->GetXaxis()->SetTitleSize(0.06);
   n_func1194->GetXaxis()->SetTitleOffset(0.9);
   n_func1194->GetXaxis()->SetTitleFont(42);
   n_func1194->GetYaxis()->SetLabelFont(42);
   n_func1194->GetYaxis()->SetLabelOffset(0.007);
   n_func1194->GetYaxis()->SetLabelSize(0.05);
   n_func1194->GetYaxis()->SetTitleSize(0.06);
   n_func1194->GetYaxis()->SetTitleOffset(1.25);
   n_func1194->GetYaxis()->SetTitleFont(42);
   n_func1194->SetParameter(0,2);
   n_func1194->SetParError(0,1.281975e-16);
   n_func1194->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1194);
   gre->Draw("p");
   
   Double_t _fx1195[13] = {
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
   Double_t _fy1195[13] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fex1195[13] = {
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
   Double_t _fey1195[13] = {
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
   gre = new TGraphErrors(13,_fx1195,_fy1195,_fex1195,_fey1195);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1195 = new TH1F("Graph_Graph1195","",100,550,5950);
   Graph_Graph1195->SetMinimum(1.9);
   Graph_Graph1195->SetMaximum(3.1);
   Graph_Graph1195->SetDirectory(0);
   Graph_Graph1195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1195->SetLineColor(ci);
   Graph_Graph1195->GetXaxis()->SetLabelFont(42);
   Graph_Graph1195->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1195->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1195->GetXaxis()->SetTitleFont(42);
   Graph_Graph1195->GetYaxis()->SetLabelFont(42);
   Graph_Graph1195->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1195->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1195->GetYaxis()->SetTitleFont(42);
   Graph_Graph1195->GetZaxis()->SetLabelFont(42);
   Graph_Graph1195->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1195->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1195);
   
   
   TF1 *n_func1196 = new TF1("n_func","pol0",1000,5500);
   n_func1196->SetBit(TF1::kNotDraw);
   n_func1196->SetFillColor(19);
   n_func1196->SetFillStyle(0);
   n_func1196->SetLineColor(2);
   n_func1196->SetLineWidth(2);
   n_func1196->SetChisquare(2.563798e-30);
   n_func1196->SetNDF(12);
   n_func1196->GetXaxis()->SetLabelFont(42);
   n_func1196->GetXaxis()->SetLabelOffset(0.007);
   n_func1196->GetXaxis()->SetLabelSize(0.05);
   n_func1196->GetXaxis()->SetTitleSize(0.06);
   n_func1196->GetXaxis()->SetTitleOffset(0.9);
   n_func1196->GetXaxis()->SetTitleFont(42);
   n_func1196->GetYaxis()->SetLabelFont(42);
   n_func1196->GetYaxis()->SetLabelOffset(0.007);
   n_func1196->GetYaxis()->SetLabelSize(0.05);
   n_func1196->GetYaxis()->SetTitleSize(0.06);
   n_func1196->GetYaxis()->SetTitleOffset(1.25);
   n_func1196->GetYaxis()->SetTitleFont(42);
   n_func1196->SetParameter(0,2);
   n_func1196->SetParError(0,1.281975e-16);
   n_func1196->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n_func1196);
   gre->Draw("p");
   
   TF1 *n_func1197 = new TF1("n_func","pol0",0,13000);
   n_func1197->SetFillColor(19);
   n_func1197->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n_func1197->SetMarkerColor(ci);
   n_func1197->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   n_func1197->SetLineColor(ci);
   n_func1197->SetLineWidth(3);
   n_func1197->SetChisquare(2.563798e-30);
   n_func1197->SetNDF(12);
   n_func1197->GetXaxis()->SetLabelFont(42);
   n_func1197->GetXaxis()->SetLabelOffset(0.007);
   n_func1197->GetXaxis()->SetLabelSize(0.05);
   n_func1197->GetXaxis()->SetTitleSize(0.06);
   n_func1197->GetXaxis()->SetTitleOffset(0.9);
   n_func1197->GetXaxis()->SetTitleFont(42);
   n_func1197->GetYaxis()->SetLabelFont(42);
   n_func1197->GetYaxis()->SetLabelOffset(0.007);
   n_func1197->GetYaxis()->SetLabelSize(0.05);
   n_func1197->GetYaxis()->SetTitleSize(0.06);
   n_func1197->GetYaxis()->SetTitleOffset(1.25);
   n_func1197->GetYaxis()->SetTitleFont(42);
   n_func1197->SetParameter(0,2);
   n_func1197->SetParError(0,1.281975e-16);
   n_func1197->SetParLimits(0,0,0);
   n_func1197->Draw("Csame");
   
   TF1 *n_func1198 = new TF1("n_func","pol0",0,13000);
   n_func1198->SetFillColor(19);
   n_func1198->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n_func1198->SetMarkerColor(ci);
   n_func1198->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   n_func1198->SetLineColor(ci);
   n_func1198->SetLineWidth(3);
   n_func1198->SetLineStyle(9);
   n_func1198->SetChisquare(2.563798e-30);
   n_func1198->SetNDF(12);
   n_func1198->GetXaxis()->SetLabelFont(42);
   n_func1198->GetXaxis()->SetLabelOffset(0.007);
   n_func1198->GetXaxis()->SetLabelSize(0.05);
   n_func1198->GetXaxis()->SetTitleSize(0.06);
   n_func1198->GetXaxis()->SetTitleOffset(0.9);
   n_func1198->GetXaxis()->SetTitleFont(42);
   n_func1198->GetYaxis()->SetLabelFont(42);
   n_func1198->GetYaxis()->SetLabelOffset(0.007);
   n_func1198->GetYaxis()->SetLabelSize(0.05);
   n_func1198->GetYaxis()->SetTitleSize(0.06);
   n_func1198->GetYaxis()->SetTitleOffset(1.25);
   n_func1198->GetYaxis()->SetTitleFont(42);
   n_func1198->SetParameter(0,2);
   n_func1198->SetParError(0,1.281975e-16);
   n_func1198->SetParLimits(0,0,0);
   n_func1198->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("n_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n_func","G_{B}#rightarrow ZZ","L");

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
