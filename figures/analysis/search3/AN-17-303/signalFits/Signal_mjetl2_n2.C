void Signal_mjetl2_n2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:19:18 2018) by ROOT version6.02/05
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
   
   Double_t _fx1215[13] = {
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
   Double_t _fy1215[13] = {
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
   Double_t _fex1215[13] = {
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
   Double_t _fey1215[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1215,_fy1215,_fex1215,_fey1215);
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
   
   TH1F *Graph_Graph1215 = new TH1F("Graph_Graph1215","",100,550,5950);
   Graph_Graph1215->SetMinimum(0);
   Graph_Graph1215->SetMaximum(4);
   Graph_Graph1215->SetDirectory(0);
   Graph_Graph1215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1215->SetLineColor(ci);
   Graph_Graph1215->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1215->GetXaxis()->SetRange(11,92);
   Graph_Graph1215->GetXaxis()->SetNdivisions(209);
   Graph_Graph1215->GetXaxis()->SetLabelFont(42);
   Graph_Graph1215->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1215->GetXaxis()->SetTitleFont(42);
   Graph_Graph1215->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph1215->GetYaxis()->SetNdivisions(504);
   Graph_Graph1215->GetYaxis()->SetLabelFont(42);
   Graph_Graph1215->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1215->GetYaxis()->SetTitleFont(42);
   Graph_Graph1215->GetZaxis()->SetLabelFont(42);
   Graph_Graph1215->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1215);
   
   
   TF1 *n2_func1216 = new TF1("n2_func","pol0",1000,5500);
   n2_func1216->SetBit(TF1::kNotDraw);
   n2_func1216->SetFillColor(19);
   n2_func1216->SetFillStyle(0);
   n2_func1216->SetLineColor(2);
   n2_func1216->SetLineWidth(2);
   n2_func1216->SetChisquare(2.563798e-30);
   n2_func1216->SetNDF(12);
   n2_func1216->GetXaxis()->SetLabelFont(42);
   n2_func1216->GetXaxis()->SetLabelOffset(0.007);
   n2_func1216->GetXaxis()->SetLabelSize(0.05);
   n2_func1216->GetXaxis()->SetTitleSize(0.06);
   n2_func1216->GetXaxis()->SetTitleOffset(0.9);
   n2_func1216->GetXaxis()->SetTitleFont(42);
   n2_func1216->GetYaxis()->SetLabelFont(42);
   n2_func1216->GetYaxis()->SetLabelOffset(0.007);
   n2_func1216->GetYaxis()->SetLabelSize(0.05);
   n2_func1216->GetYaxis()->SetTitleSize(0.06);
   n2_func1216->GetYaxis()->SetTitleOffset(1.25);
   n2_func1216->GetYaxis()->SetTitleFont(42);
   n2_func1216->SetParameter(0,2);
   n2_func1216->SetParError(0,1.281975e-16);
   n2_func1216->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1216);
   gre->Draw("ap");
   
   Double_t _fx1217[13] = {
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
   Double_t _fy1217[13] = {
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
   Double_t _fex1217[13] = {
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
   Double_t _fey1217[13] = {
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
   gre = new TGraphErrors(13,_fx1217,_fy1217,_fex1217,_fey1217);
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
   
   TH1F *Graph_Graph1217 = new TH1F("Graph_Graph1217","",100,550,5950);
   Graph_Graph1217->SetMinimum(1.9);
   Graph_Graph1217->SetMaximum(3.1);
   Graph_Graph1217->SetDirectory(0);
   Graph_Graph1217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1217->SetLineColor(ci);
   Graph_Graph1217->GetXaxis()->SetLabelFont(42);
   Graph_Graph1217->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1217->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1217->GetXaxis()->SetTitleFont(42);
   Graph_Graph1217->GetYaxis()->SetLabelFont(42);
   Graph_Graph1217->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1217->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1217->GetYaxis()->SetTitleFont(42);
   Graph_Graph1217->GetZaxis()->SetLabelFont(42);
   Graph_Graph1217->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1217->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1217);
   
   
   TF1 *n2_func1218 = new TF1("n2_func","pol0",1000,5500);
   n2_func1218->SetBit(TF1::kNotDraw);
   n2_func1218->SetFillColor(19);
   n2_func1218->SetFillStyle(0);
   n2_func1218->SetLineColor(2);
   n2_func1218->SetLineWidth(2);
   n2_func1218->SetChisquare(2.563798e-30);
   n2_func1218->SetNDF(12);
   n2_func1218->GetXaxis()->SetLabelFont(42);
   n2_func1218->GetXaxis()->SetLabelOffset(0.007);
   n2_func1218->GetXaxis()->SetLabelSize(0.05);
   n2_func1218->GetXaxis()->SetTitleSize(0.06);
   n2_func1218->GetXaxis()->SetTitleOffset(0.9);
   n2_func1218->GetXaxis()->SetTitleFont(42);
   n2_func1218->GetYaxis()->SetLabelFont(42);
   n2_func1218->GetYaxis()->SetLabelOffset(0.007);
   n2_func1218->GetYaxis()->SetLabelSize(0.05);
   n2_func1218->GetYaxis()->SetTitleSize(0.06);
   n2_func1218->GetYaxis()->SetTitleOffset(1.25);
   n2_func1218->GetYaxis()->SetTitleFont(42);
   n2_func1218->SetParameter(0,2);
   n2_func1218->SetParError(0,1.281975e-16);
   n2_func1218->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1218);
   gre->Draw("p");
   
   Double_t _fx1219[13] = {
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
   Double_t _fy1219[13] = {
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
   Double_t _fex1219[13] = {
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
   Double_t _fey1219[13] = {
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
   gre = new TGraphErrors(13,_fx1219,_fy1219,_fex1219,_fey1219);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph12151219 = new TH1F("Graph_Graph_Graph12151219","",100,550,5950);
   Graph_Graph_Graph12151219->SetMinimum(0);
   Graph_Graph_Graph12151219->SetMaximum(4);
   Graph_Graph_Graph12151219->SetDirectory(0);
   Graph_Graph_Graph12151219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph12151219->SetLineColor(ci);
   Graph_Graph_Graph12151219->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph12151219->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph12151219->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph12151219->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph12151219->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12151219->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12151219->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph12151219->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph12151219->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph_Graph12151219->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph12151219->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph12151219->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12151219->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12151219->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph12151219->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph12151219->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph12151219->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12151219->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12151219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph12151219);
   
   
   TF1 *n2_func1220 = new TF1("n2_func","pol0",1000,5500);
   n2_func1220->SetBit(TF1::kNotDraw);
   n2_func1220->SetFillColor(19);
   n2_func1220->SetFillStyle(0);
   n2_func1220->SetLineColor(2);
   n2_func1220->SetLineWidth(2);
   n2_func1220->SetChisquare(2.563798e-30);
   n2_func1220->SetNDF(12);
   n2_func1220->GetXaxis()->SetLabelFont(42);
   n2_func1220->GetXaxis()->SetLabelOffset(0.007);
   n2_func1220->GetXaxis()->SetLabelSize(0.05);
   n2_func1220->GetXaxis()->SetTitleSize(0.06);
   n2_func1220->GetXaxis()->SetTitleOffset(0.9);
   n2_func1220->GetXaxis()->SetTitleFont(42);
   n2_func1220->GetYaxis()->SetLabelFont(42);
   n2_func1220->GetYaxis()->SetLabelOffset(0.007);
   n2_func1220->GetYaxis()->SetLabelSize(0.05);
   n2_func1220->GetYaxis()->SetTitleSize(0.06);
   n2_func1220->GetYaxis()->SetTitleOffset(1.25);
   n2_func1220->GetYaxis()->SetTitleFont(42);
   n2_func1220->SetParameter(0,2);
   n2_func1220->SetParError(0,1.281975e-16);
   n2_func1220->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1220);
   gre->Draw("p");
   
   TF1 *n2_func1221 = new TF1("n2_func","pol0",0,13000);
   n2_func1221->SetFillColor(19);
   n2_func1221->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n2_func1221->SetMarkerColor(ci);
   n2_func1221->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   n2_func1221->SetLineColor(ci);
   n2_func1221->SetLineWidth(3);
   n2_func1221->SetChisquare(2.563798e-30);
   n2_func1221->SetNDF(12);
   n2_func1221->GetXaxis()->SetLabelFont(42);
   n2_func1221->GetXaxis()->SetLabelOffset(0.007);
   n2_func1221->GetXaxis()->SetLabelSize(0.05);
   n2_func1221->GetXaxis()->SetTitleSize(0.06);
   n2_func1221->GetXaxis()->SetTitleOffset(0.9);
   n2_func1221->GetXaxis()->SetTitleFont(42);
   n2_func1221->GetYaxis()->SetLabelFont(42);
   n2_func1221->GetYaxis()->SetLabelOffset(0.007);
   n2_func1221->GetYaxis()->SetLabelSize(0.05);
   n2_func1221->GetYaxis()->SetTitleSize(0.06);
   n2_func1221->GetYaxis()->SetTitleOffset(1.25);
   n2_func1221->GetYaxis()->SetTitleFont(42);
   n2_func1221->SetParameter(0,2);
   n2_func1221->SetParError(0,1.281975e-16);
   n2_func1221->SetParLimits(0,0,0);
   n2_func1221->Draw("Csame");
   
   TF1 *n2_func1222 = new TF1("n2_func","pol0",0,13000);
   n2_func1222->SetFillColor(19);
   n2_func1222->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n2_func1222->SetMarkerColor(ci);
   n2_func1222->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   n2_func1222->SetLineColor(ci);
   n2_func1222->SetLineWidth(3);
   n2_func1222->SetLineStyle(9);
   n2_func1222->SetChisquare(2.563798e-30);
   n2_func1222->SetNDF(12);
   n2_func1222->GetXaxis()->SetLabelFont(42);
   n2_func1222->GetXaxis()->SetLabelOffset(0.007);
   n2_func1222->GetXaxis()->SetLabelSize(0.05);
   n2_func1222->GetXaxis()->SetTitleSize(0.06);
   n2_func1222->GetXaxis()->SetTitleOffset(0.9);
   n2_func1222->GetXaxis()->SetTitleFont(42);
   n2_func1222->GetYaxis()->SetLabelFont(42);
   n2_func1222->GetYaxis()->SetLabelOffset(0.007);
   n2_func1222->GetYaxis()->SetLabelSize(0.05);
   n2_func1222->GetYaxis()->SetTitleSize(0.06);
   n2_func1222->GetYaxis()->SetTitleOffset(1.25);
   n2_func1222->GetYaxis()->SetTitleFont(42);
   n2_func1222->SetParameter(0,2);
   n2_func1222->SetParError(0,1.281975e-16);
   n2_func1222->SetParLimits(0,0,0);
   n2_func1222->Draw("Csame");
   
   Double_t _fx1221[13] = {
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
   Double_t _fy1221[13] = {
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
   Double_t _fex1221[13] = {
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
   Double_t _fey1221[13] = {
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
   gre = new TGraphErrors(13,_fx1221,_fy1221,_fex1221,_fey1221);
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
   
   TH1F *Graph_Graph1221 = new TH1F("Graph_Graph1221","",100,550,5950);
   Graph_Graph1221->SetMinimum(1.9);
   Graph_Graph1221->SetMaximum(3.1);
   Graph_Graph1221->SetDirectory(0);
   Graph_Graph1221->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1221->SetLineColor(ci);
   Graph_Graph1221->GetXaxis()->SetLabelFont(42);
   Graph_Graph1221->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1221->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1221->GetXaxis()->SetTitleFont(42);
   Graph_Graph1221->GetYaxis()->SetLabelFont(42);
   Graph_Graph1221->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1221->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1221->GetYaxis()->SetTitleFont(42);
   Graph_Graph1221->GetZaxis()->SetLabelFont(42);
   Graph_Graph1221->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1221->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1221);
   
   
   TF1 *n2_func1222 = new TF1("n2_func","pol0",1000,5500);
   n2_func1222->SetBit(TF1::kNotDraw);
   n2_func1222->SetFillColor(19);
   n2_func1222->SetFillStyle(0);
   n2_func1222->SetLineColor(2);
   n2_func1222->SetLineWidth(2);
   n2_func1222->SetChisquare(2.563798e-30);
   n2_func1222->SetNDF(12);
   n2_func1222->GetXaxis()->SetLabelFont(42);
   n2_func1222->GetXaxis()->SetLabelOffset(0.007);
   n2_func1222->GetXaxis()->SetLabelSize(0.05);
   n2_func1222->GetXaxis()->SetTitleSize(0.06);
   n2_func1222->GetXaxis()->SetTitleOffset(0.9);
   n2_func1222->GetXaxis()->SetTitleFont(42);
   n2_func1222->GetYaxis()->SetLabelFont(42);
   n2_func1222->GetYaxis()->SetLabelOffset(0.007);
   n2_func1222->GetYaxis()->SetLabelSize(0.05);
   n2_func1222->GetYaxis()->SetTitleSize(0.06);
   n2_func1222->GetYaxis()->SetTitleOffset(1.25);
   n2_func1222->GetYaxis()->SetTitleFont(42);
   n2_func1222->SetParameter(0,2);
   n2_func1222->SetParError(0,1.281975e-16);
   n2_func1222->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1222);
   gre->Draw("p");
   
   Double_t _fx1223[13] = {
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
   Double_t _fy1223[13] = {
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
   Double_t _fex1223[13] = {
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
   Double_t _fey1223[13] = {
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
   gre = new TGraphErrors(13,_fx1223,_fy1223,_fex1223,_fey1223);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1223 = new TH1F("Graph_Graph1223","",100,550,5950);
   Graph_Graph1223->SetMinimum(1.9);
   Graph_Graph1223->SetMaximum(3.1);
   Graph_Graph1223->SetDirectory(0);
   Graph_Graph1223->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1223->SetLineColor(ci);
   Graph_Graph1223->GetXaxis()->SetLabelFont(42);
   Graph_Graph1223->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1223->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1223->GetXaxis()->SetTitleFont(42);
   Graph_Graph1223->GetYaxis()->SetLabelFont(42);
   Graph_Graph1223->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1223->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1223->GetYaxis()->SetTitleFont(42);
   Graph_Graph1223->GetZaxis()->SetLabelFont(42);
   Graph_Graph1223->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1223->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1223);
   
   
   TF1 *n2_func1224 = new TF1("n2_func","pol0",1000,5500);
   n2_func1224->SetBit(TF1::kNotDraw);
   n2_func1224->SetFillColor(19);
   n2_func1224->SetFillStyle(0);
   n2_func1224->SetLineColor(2);
   n2_func1224->SetLineWidth(2);
   n2_func1224->SetChisquare(2.563798e-30);
   n2_func1224->SetNDF(12);
   n2_func1224->GetXaxis()->SetLabelFont(42);
   n2_func1224->GetXaxis()->SetLabelOffset(0.007);
   n2_func1224->GetXaxis()->SetLabelSize(0.05);
   n2_func1224->GetXaxis()->SetTitleSize(0.06);
   n2_func1224->GetXaxis()->SetTitleOffset(0.9);
   n2_func1224->GetXaxis()->SetTitleFont(42);
   n2_func1224->GetYaxis()->SetLabelFont(42);
   n2_func1224->GetYaxis()->SetLabelOffset(0.007);
   n2_func1224->GetYaxis()->SetLabelSize(0.05);
   n2_func1224->GetYaxis()->SetTitleSize(0.06);
   n2_func1224->GetYaxis()->SetTitleOffset(1.25);
   n2_func1224->GetYaxis()->SetTitleFont(42);
   n2_func1224->SetParameter(0,2);
   n2_func1224->SetParError(0,1.281975e-16);
   n2_func1224->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1224);
   gre->Draw("p");
   
   TF1 *n2_func1225 = new TF1("n2_func","pol0",0,13000);
   n2_func1225->SetFillColor(19);
   n2_func1225->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n2_func1225->SetMarkerColor(ci);
   n2_func1225->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   n2_func1225->SetLineColor(ci);
   n2_func1225->SetLineWidth(3);
   n2_func1225->SetChisquare(2.563798e-30);
   n2_func1225->SetNDF(12);
   n2_func1225->GetXaxis()->SetLabelFont(42);
   n2_func1225->GetXaxis()->SetLabelOffset(0.007);
   n2_func1225->GetXaxis()->SetLabelSize(0.05);
   n2_func1225->GetXaxis()->SetTitleSize(0.06);
   n2_func1225->GetXaxis()->SetTitleOffset(0.9);
   n2_func1225->GetXaxis()->SetTitleFont(42);
   n2_func1225->GetYaxis()->SetLabelFont(42);
   n2_func1225->GetYaxis()->SetLabelOffset(0.007);
   n2_func1225->GetYaxis()->SetLabelSize(0.05);
   n2_func1225->GetYaxis()->SetTitleSize(0.06);
   n2_func1225->GetYaxis()->SetTitleOffset(1.25);
   n2_func1225->GetYaxis()->SetTitleFont(42);
   n2_func1225->SetParameter(0,2);
   n2_func1225->SetParError(0,1.281975e-16);
   n2_func1225->SetParLimits(0,0,0);
   n2_func1225->Draw("Csame");
   
   TF1 *n2_func1226 = new TF1("n2_func","pol0",0,13000);
   n2_func1226->SetFillColor(19);
   n2_func1226->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n2_func1226->SetMarkerColor(ci);
   n2_func1226->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   n2_func1226->SetLineColor(ci);
   n2_func1226->SetLineWidth(3);
   n2_func1226->SetLineStyle(9);
   n2_func1226->SetChisquare(2.563798e-30);
   n2_func1226->SetNDF(12);
   n2_func1226->GetXaxis()->SetLabelFont(42);
   n2_func1226->GetXaxis()->SetLabelOffset(0.007);
   n2_func1226->GetXaxis()->SetLabelSize(0.05);
   n2_func1226->GetXaxis()->SetTitleSize(0.06);
   n2_func1226->GetXaxis()->SetTitleOffset(0.9);
   n2_func1226->GetXaxis()->SetTitleFont(42);
   n2_func1226->GetYaxis()->SetLabelFont(42);
   n2_func1226->GetYaxis()->SetLabelOffset(0.007);
   n2_func1226->GetYaxis()->SetLabelSize(0.05);
   n2_func1226->GetYaxis()->SetTitleSize(0.06);
   n2_func1226->GetYaxis()->SetTitleOffset(1.25);
   n2_func1226->GetYaxis()->SetTitleFont(42);
   n2_func1226->SetParameter(0,2);
   n2_func1226->SetParError(0,1.281975e-16);
   n2_func1226->SetParLimits(0,0,0);
   n2_func1226->Draw("Csame");
   
   Double_t _fx1225[13] = {
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
   Double_t _fy1225[13] = {
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
   Double_t _fex1225[13] = {
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
   Double_t _fey1225[13] = {
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
   gre = new TGraphErrors(13,_fx1225,_fy1225,_fex1225,_fey1225);
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
   
   TH1F *Graph_Graph1225 = new TH1F("Graph_Graph1225","",100,550,5950);
   Graph_Graph1225->SetMinimum(1.9);
   Graph_Graph1225->SetMaximum(3.1);
   Graph_Graph1225->SetDirectory(0);
   Graph_Graph1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1225->SetLineColor(ci);
   Graph_Graph1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1225);
   
   
   TF1 *n2_func1226 = new TF1("n2_func","pol0",1000,5500);
   n2_func1226->SetBit(TF1::kNotDraw);
   n2_func1226->SetFillColor(19);
   n2_func1226->SetFillStyle(0);
   n2_func1226->SetLineColor(2);
   n2_func1226->SetLineWidth(2);
   n2_func1226->SetChisquare(2.563798e-30);
   n2_func1226->SetNDF(12);
   n2_func1226->GetXaxis()->SetLabelFont(42);
   n2_func1226->GetXaxis()->SetLabelOffset(0.007);
   n2_func1226->GetXaxis()->SetLabelSize(0.05);
   n2_func1226->GetXaxis()->SetTitleSize(0.06);
   n2_func1226->GetXaxis()->SetTitleOffset(0.9);
   n2_func1226->GetXaxis()->SetTitleFont(42);
   n2_func1226->GetYaxis()->SetLabelFont(42);
   n2_func1226->GetYaxis()->SetLabelOffset(0.007);
   n2_func1226->GetYaxis()->SetLabelSize(0.05);
   n2_func1226->GetYaxis()->SetTitleSize(0.06);
   n2_func1226->GetYaxis()->SetTitleOffset(1.25);
   n2_func1226->GetYaxis()->SetTitleFont(42);
   n2_func1226->SetParameter(0,2);
   n2_func1226->SetParError(0,1.281975e-16);
   n2_func1226->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1226);
   gre->Draw("p");
   
   Double_t _fx1227[13] = {
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
   Double_t _fy1227[13] = {
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
   Double_t _fex1227[13] = {
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
   Double_t _fey1227[13] = {
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
   gre = new TGraphErrors(13,_fx1227,_fy1227,_fex1227,_fey1227);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1227 = new TH1F("Graph_Graph1227","",100,550,5950);
   Graph_Graph1227->SetMinimum(1.9);
   Graph_Graph1227->SetMaximum(3.1);
   Graph_Graph1227->SetDirectory(0);
   Graph_Graph1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1227->SetLineColor(ci);
   Graph_Graph1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1227);
   
   
   TF1 *n2_func1228 = new TF1("n2_func","pol0",1000,5500);
   n2_func1228->SetBit(TF1::kNotDraw);
   n2_func1228->SetFillColor(19);
   n2_func1228->SetFillStyle(0);
   n2_func1228->SetLineColor(2);
   n2_func1228->SetLineWidth(2);
   n2_func1228->SetChisquare(2.563798e-30);
   n2_func1228->SetNDF(12);
   n2_func1228->GetXaxis()->SetLabelFont(42);
   n2_func1228->GetXaxis()->SetLabelOffset(0.007);
   n2_func1228->GetXaxis()->SetLabelSize(0.05);
   n2_func1228->GetXaxis()->SetTitleSize(0.06);
   n2_func1228->GetXaxis()->SetTitleOffset(0.9);
   n2_func1228->GetXaxis()->SetTitleFont(42);
   n2_func1228->GetYaxis()->SetLabelFont(42);
   n2_func1228->GetYaxis()->SetLabelOffset(0.007);
   n2_func1228->GetYaxis()->SetLabelSize(0.05);
   n2_func1228->GetYaxis()->SetTitleSize(0.06);
   n2_func1228->GetYaxis()->SetTitleOffset(1.25);
   n2_func1228->GetYaxis()->SetTitleFont(42);
   n2_func1228->SetParameter(0,2);
   n2_func1228->SetParError(0,1.281975e-16);
   n2_func1228->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1228);
   gre->Draw("p");
   
   TF1 *n2_func1229 = new TF1("n2_func","pol0",0,13000);
   n2_func1229->SetFillColor(19);
   n2_func1229->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1229->SetMarkerColor(ci);
   n2_func1229->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1229->SetLineColor(ci);
   n2_func1229->SetLineWidth(3);
   n2_func1229->SetChisquare(2.563798e-30);
   n2_func1229->SetNDF(12);
   n2_func1229->GetXaxis()->SetLabelFont(42);
   n2_func1229->GetXaxis()->SetLabelOffset(0.007);
   n2_func1229->GetXaxis()->SetLabelSize(0.05);
   n2_func1229->GetXaxis()->SetTitleSize(0.06);
   n2_func1229->GetXaxis()->SetTitleOffset(0.9);
   n2_func1229->GetXaxis()->SetTitleFont(42);
   n2_func1229->GetYaxis()->SetLabelFont(42);
   n2_func1229->GetYaxis()->SetLabelOffset(0.007);
   n2_func1229->GetYaxis()->SetLabelSize(0.05);
   n2_func1229->GetYaxis()->SetTitleSize(0.06);
   n2_func1229->GetYaxis()->SetTitleOffset(1.25);
   n2_func1229->GetYaxis()->SetTitleFont(42);
   n2_func1229->SetParameter(0,2);
   n2_func1229->SetParError(0,1.281975e-16);
   n2_func1229->SetParLimits(0,0,0);
   n2_func1229->Draw("Csame");
   
   TF1 *n2_func1230 = new TF1("n2_func","pol0",0,13000);
   n2_func1230->SetFillColor(19);
   n2_func1230->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1230->SetMarkerColor(ci);
   n2_func1230->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1230->SetLineColor(ci);
   n2_func1230->SetLineWidth(3);
   n2_func1230->SetLineStyle(9);
   n2_func1230->SetChisquare(2.563798e-30);
   n2_func1230->SetNDF(12);
   n2_func1230->GetXaxis()->SetLabelFont(42);
   n2_func1230->GetXaxis()->SetLabelOffset(0.007);
   n2_func1230->GetXaxis()->SetLabelSize(0.05);
   n2_func1230->GetXaxis()->SetTitleSize(0.06);
   n2_func1230->GetXaxis()->SetTitleOffset(0.9);
   n2_func1230->GetXaxis()->SetTitleFont(42);
   n2_func1230->GetYaxis()->SetLabelFont(42);
   n2_func1230->GetYaxis()->SetLabelOffset(0.007);
   n2_func1230->GetYaxis()->SetLabelSize(0.05);
   n2_func1230->GetYaxis()->SetTitleSize(0.06);
   n2_func1230->GetYaxis()->SetTitleOffset(1.25);
   n2_func1230->GetYaxis()->SetTitleFont(42);
   n2_func1230->SetParameter(0,2);
   n2_func1230->SetParError(0,1.281975e-16);
   n2_func1230->SetParLimits(0,0,0);
   n2_func1230->Draw("Csame");
   
   Double_t _fx1229[13] = {
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
   Double_t _fy1229[13] = {
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
   Double_t _fex1229[13] = {
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
   Double_t _fey1229[13] = {
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
   gre = new TGraphErrors(13,_fx1229,_fy1229,_fex1229,_fey1229);
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
   
   TH1F *Graph_Graph1229 = new TH1F("Graph_Graph1229","",100,550,5950);
   Graph_Graph1229->SetMinimum(1.9);
   Graph_Graph1229->SetMaximum(3.1);
   Graph_Graph1229->SetDirectory(0);
   Graph_Graph1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1229->SetLineColor(ci);
   Graph_Graph1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph1229->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1229->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph1229->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1229->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph1229->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1229->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1229);
   
   
   TF1 *n2_func1230 = new TF1("n2_func","pol0",1000,5500);
   n2_func1230->SetBit(TF1::kNotDraw);
   n2_func1230->SetFillColor(19);
   n2_func1230->SetFillStyle(0);
   n2_func1230->SetLineColor(2);
   n2_func1230->SetLineWidth(2);
   n2_func1230->SetChisquare(2.563798e-30);
   n2_func1230->SetNDF(12);
   n2_func1230->GetXaxis()->SetLabelFont(42);
   n2_func1230->GetXaxis()->SetLabelOffset(0.007);
   n2_func1230->GetXaxis()->SetLabelSize(0.05);
   n2_func1230->GetXaxis()->SetTitleSize(0.06);
   n2_func1230->GetXaxis()->SetTitleOffset(0.9);
   n2_func1230->GetXaxis()->SetTitleFont(42);
   n2_func1230->GetYaxis()->SetLabelFont(42);
   n2_func1230->GetYaxis()->SetLabelOffset(0.007);
   n2_func1230->GetYaxis()->SetLabelSize(0.05);
   n2_func1230->GetYaxis()->SetTitleSize(0.06);
   n2_func1230->GetYaxis()->SetTitleOffset(1.25);
   n2_func1230->GetYaxis()->SetTitleFont(42);
   n2_func1230->SetParameter(0,2);
   n2_func1230->SetParError(0,1.281975e-16);
   n2_func1230->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1230);
   gre->Draw("p");
   
   Double_t _fx1231[13] = {
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
   Double_t _fy1231[13] = {
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
   Double_t _fex1231[13] = {
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
   Double_t _fey1231[13] = {
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
   gre = new TGraphErrors(13,_fx1231,_fy1231,_fex1231,_fey1231);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1231 = new TH1F("Graph_Graph1231","",100,550,5950);
   Graph_Graph1231->SetMinimum(1.9);
   Graph_Graph1231->SetMaximum(3.1);
   Graph_Graph1231->SetDirectory(0);
   Graph_Graph1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1231->SetLineColor(ci);
   Graph_Graph1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph1231->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1231->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph1231->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1231->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1231);
   
   
   TF1 *n2_func1232 = new TF1("n2_func","pol0",1000,5500);
   n2_func1232->SetBit(TF1::kNotDraw);
   n2_func1232->SetFillColor(19);
   n2_func1232->SetFillStyle(0);
   n2_func1232->SetLineColor(2);
   n2_func1232->SetLineWidth(2);
   n2_func1232->SetChisquare(2.563798e-30);
   n2_func1232->SetNDF(12);
   n2_func1232->GetXaxis()->SetLabelFont(42);
   n2_func1232->GetXaxis()->SetLabelOffset(0.007);
   n2_func1232->GetXaxis()->SetLabelSize(0.05);
   n2_func1232->GetXaxis()->SetTitleSize(0.06);
   n2_func1232->GetXaxis()->SetTitleOffset(0.9);
   n2_func1232->GetXaxis()->SetTitleFont(42);
   n2_func1232->GetYaxis()->SetLabelFont(42);
   n2_func1232->GetYaxis()->SetLabelOffset(0.007);
   n2_func1232->GetYaxis()->SetLabelSize(0.05);
   n2_func1232->GetYaxis()->SetTitleSize(0.06);
   n2_func1232->GetYaxis()->SetTitleOffset(1.25);
   n2_func1232->GetYaxis()->SetTitleFont(42);
   n2_func1232->SetParameter(0,2);
   n2_func1232->SetParError(0,1.281975e-16);
   n2_func1232->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1232);
   gre->Draw("p");
   
   TF1 *n2_func1233 = new TF1("n2_func","pol0",0,13000);
   n2_func1233->SetFillColor(19);
   n2_func1233->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n2_func1233->SetMarkerColor(ci);
   n2_func1233->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   n2_func1233->SetLineColor(ci);
   n2_func1233->SetLineWidth(3);
   n2_func1233->SetChisquare(2.563798e-30);
   n2_func1233->SetNDF(12);
   n2_func1233->GetXaxis()->SetLabelFont(42);
   n2_func1233->GetXaxis()->SetLabelOffset(0.007);
   n2_func1233->GetXaxis()->SetLabelSize(0.05);
   n2_func1233->GetXaxis()->SetTitleSize(0.06);
   n2_func1233->GetXaxis()->SetTitleOffset(0.9);
   n2_func1233->GetXaxis()->SetTitleFont(42);
   n2_func1233->GetYaxis()->SetLabelFont(42);
   n2_func1233->GetYaxis()->SetLabelOffset(0.007);
   n2_func1233->GetYaxis()->SetLabelSize(0.05);
   n2_func1233->GetYaxis()->SetTitleSize(0.06);
   n2_func1233->GetYaxis()->SetTitleOffset(1.25);
   n2_func1233->GetYaxis()->SetTitleFont(42);
   n2_func1233->SetParameter(0,2);
   n2_func1233->SetParError(0,1.281975e-16);
   n2_func1233->SetParLimits(0,0,0);
   n2_func1233->Draw("Csame");
   
   TF1 *n2_func1234 = new TF1("n2_func","pol0",0,13000);
   n2_func1234->SetFillColor(19);
   n2_func1234->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n2_func1234->SetMarkerColor(ci);
   n2_func1234->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   n2_func1234->SetLineColor(ci);
   n2_func1234->SetLineWidth(3);
   n2_func1234->SetLineStyle(9);
   n2_func1234->SetChisquare(2.563798e-30);
   n2_func1234->SetNDF(12);
   n2_func1234->GetXaxis()->SetLabelFont(42);
   n2_func1234->GetXaxis()->SetLabelOffset(0.007);
   n2_func1234->GetXaxis()->SetLabelSize(0.05);
   n2_func1234->GetXaxis()->SetTitleSize(0.06);
   n2_func1234->GetXaxis()->SetTitleOffset(0.9);
   n2_func1234->GetXaxis()->SetTitleFont(42);
   n2_func1234->GetYaxis()->SetLabelFont(42);
   n2_func1234->GetYaxis()->SetLabelOffset(0.007);
   n2_func1234->GetYaxis()->SetLabelSize(0.05);
   n2_func1234->GetYaxis()->SetTitleSize(0.06);
   n2_func1234->GetYaxis()->SetTitleOffset(1.25);
   n2_func1234->GetYaxis()->SetTitleFont(42);
   n2_func1234->SetParameter(0,2);
   n2_func1234->SetParError(0,1.281975e-16);
   n2_func1234->SetParLimits(0,0,0);
   n2_func1234->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("n2_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n2_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n2_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("n2_func","G_{B}#rightarrow ZZ","L");

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
