void Signal_mjetl1_n2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:10 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,-0.742268,5728.514,4.412371);
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
   
   Double_t _fx1091[12] = {
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
   Double_t _fy1091[12] = {
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
   Double_t _fex1091[12] = {
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
   Double_t _fey1091[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1091,_fy1091,_fex1091,_fey1091);
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
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","",100,770,5930);
   Graph_Graph1091->SetMinimum(0);
   Graph_Graph1091->SetMaximum(4);
   Graph_Graph1091->SetDirectory(0);
   Graph_Graph1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1091->SetLineColor(ci);
   Graph_Graph1091->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1091->GetXaxis()->SetRange(7,92);
   Graph_Graph1091->GetXaxis()->SetNdivisions(209);
   Graph_Graph1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph1091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph1091->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph1091->GetYaxis()->SetNdivisions(504);
   Graph_Graph1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph1091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1091);
   
   
   TF1 *pol01092 = new TF1("pol0","pol0",1200,5500);
   pol01092->SetFillColor(19);
   pol01092->SetFillStyle(0);
   pol01092->SetLineColor(2);
   pol01092->SetLineWidth(2);
   pol01092->SetChisquare(2.366583e-30);
   pol01092->SetNDF(11);
   pol01092->GetXaxis()->SetLabelFont(42);
   pol01092->GetXaxis()->SetLabelOffset(0.007);
   pol01092->GetXaxis()->SetLabelSize(0.05);
   pol01092->GetXaxis()->SetTitleSize(0.06);
   pol01092->GetXaxis()->SetTitleOffset(0.9);
   pol01092->GetXaxis()->SetTitleFont(42);
   pol01092->GetYaxis()->SetLabelFont(42);
   pol01092->GetYaxis()->SetLabelOffset(0.007);
   pol01092->GetYaxis()->SetLabelSize(0.05);
   pol01092->GetYaxis()->SetTitleSize(0.06);
   pol01092->GetYaxis()->SetTitleOffset(1.25);
   pol01092->GetYaxis()->SetTitleFont(42);
   pol01092->SetParameter(0,2);
   pol01092->SetParError(0,1.338979e-16);
   pol01092->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01092);
   gre->Draw("ap");
   
   Double_t _fx1093[12] = {
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
   Double_t _fy1093[12] = {
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
   Double_t _fex1093[12] = {
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
   Double_t _fey1093[12] = {
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
   gre = new TGraphErrors(12,_fx1093,_fy1093,_fex1093,_fey1093);
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
   
   TH1F *Graph_Graph1093 = new TH1F("Graph_Graph1093","",100,770,5930);
   Graph_Graph1093->SetMinimum(1.9);
   Graph_Graph1093->SetMaximum(3.1);
   Graph_Graph1093->SetDirectory(0);
   Graph_Graph1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1093->SetLineColor(ci);
   Graph_Graph1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph1093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph1093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1093);
   
   
   TF1 *pol01094 = new TF1("pol0","pol0",1200,5500);
   pol01094->SetFillColor(19);
   pol01094->SetFillStyle(0);
   pol01094->SetLineColor(2);
   pol01094->SetLineWidth(2);
   pol01094->SetChisquare(2.366583e-30);
   pol01094->SetNDF(11);
   pol01094->GetXaxis()->SetLabelFont(42);
   pol01094->GetXaxis()->SetLabelOffset(0.007);
   pol01094->GetXaxis()->SetLabelSize(0.05);
   pol01094->GetXaxis()->SetTitleSize(0.06);
   pol01094->GetXaxis()->SetTitleOffset(0.9);
   pol01094->GetXaxis()->SetTitleFont(42);
   pol01094->GetYaxis()->SetLabelFont(42);
   pol01094->GetYaxis()->SetLabelOffset(0.007);
   pol01094->GetYaxis()->SetLabelSize(0.05);
   pol01094->GetYaxis()->SetTitleSize(0.06);
   pol01094->GetYaxis()->SetTitleOffset(1.25);
   pol01094->GetYaxis()->SetTitleFont(42);
   pol01094->SetParameter(0,2);
   pol01094->SetParError(0,1.338979e-16);
   pol01094->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01094);
   gre->Draw("p");
   
   Double_t _fx1095[12] = {
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
   Double_t _fy1095[12] = {
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
   Double_t _fex1095[12] = {
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
   Double_t _fey1095[12] = {
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
   gre = new TGraphErrors(12,_fx1095,_fy1095,_fex1095,_fey1095);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10911095 = new TH1F("Graph_Graph_Graph10911095","",100,770,5930);
   Graph_Graph_Graph10911095->SetMinimum(0);
   Graph_Graph_Graph10911095->SetMaximum(4);
   Graph_Graph_Graph10911095->SetDirectory(0);
   Graph_Graph_Graph10911095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10911095->SetLineColor(ci);
   Graph_Graph_Graph10911095->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10911095->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph10911095->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10911095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10911095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10911095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10911095->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10911095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10911095->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph_Graph10911095->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10911095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10911095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10911095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10911095->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10911095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10911095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10911095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10911095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10911095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10911095);
   
   
   TF1 *pol01096 = new TF1("pol0","pol0",1200,5500);
   pol01096->SetFillColor(19);
   pol01096->SetFillStyle(0);
   pol01096->SetLineColor(2);
   pol01096->SetLineWidth(2);
   pol01096->SetChisquare(2.366583e-30);
   pol01096->SetNDF(11);
   pol01096->GetXaxis()->SetLabelFont(42);
   pol01096->GetXaxis()->SetLabelOffset(0.007);
   pol01096->GetXaxis()->SetLabelSize(0.05);
   pol01096->GetXaxis()->SetTitleSize(0.06);
   pol01096->GetXaxis()->SetTitleOffset(0.9);
   pol01096->GetXaxis()->SetTitleFont(42);
   pol01096->GetYaxis()->SetLabelFont(42);
   pol01096->GetYaxis()->SetLabelOffset(0.007);
   pol01096->GetYaxis()->SetLabelSize(0.05);
   pol01096->GetYaxis()->SetTitleSize(0.06);
   pol01096->GetYaxis()->SetTitleOffset(1.25);
   pol01096->GetYaxis()->SetTitleFont(42);
   pol01096->SetParameter(0,2);
   pol01096->SetParError(0,1.338979e-16);
   pol01096->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01096);
   gre->Draw("p");
   
   TF1 *pol01097 = new TF1("pol0","pol0",0,13000);
   pol01097->SetBit(TF1::kNotDraw);
   pol01097->SetFillColor(19);
   pol01097->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01097->SetMarkerColor(ci);
   pol01097->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01097->SetLineColor(ci);
   pol01097->SetLineWidth(3);
   pol01097->SetChisquare(2.366583e-30);
   pol01097->SetNDF(11);
   pol01097->GetXaxis()->SetLabelFont(42);
   pol01097->GetXaxis()->SetLabelOffset(0.007);
   pol01097->GetXaxis()->SetLabelSize(0.05);
   pol01097->GetXaxis()->SetTitleSize(0.06);
   pol01097->GetXaxis()->SetTitleOffset(0.9);
   pol01097->GetXaxis()->SetTitleFont(42);
   pol01097->GetYaxis()->SetLabelFont(42);
   pol01097->GetYaxis()->SetLabelOffset(0.007);
   pol01097->GetYaxis()->SetLabelSize(0.05);
   pol01097->GetYaxis()->SetTitleSize(0.06);
   pol01097->GetYaxis()->SetTitleOffset(1.25);
   pol01097->GetYaxis()->SetTitleFont(42);
   pol01097->SetParameter(0,2);
   pol01097->SetParError(0,1.338979e-16);
   pol01097->SetParLimits(0,0,0);
   pol01097->Draw("Csame");
   
   TF1 *pol01098 = new TF1("pol0","pol0",0,13000);
   pol01098->SetBit(TF1::kNotDraw);
   pol01098->SetFillColor(19);
   pol01098->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01098->SetMarkerColor(ci);
   pol01098->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol01098->SetLineColor(ci);
   pol01098->SetLineWidth(3);
   pol01098->SetLineStyle(9);
   pol01098->SetChisquare(2.366583e-30);
   pol01098->SetNDF(11);
   pol01098->GetXaxis()->SetLabelFont(42);
   pol01098->GetXaxis()->SetLabelOffset(0.007);
   pol01098->GetXaxis()->SetLabelSize(0.05);
   pol01098->GetXaxis()->SetTitleSize(0.06);
   pol01098->GetXaxis()->SetTitleOffset(0.9);
   pol01098->GetXaxis()->SetTitleFont(42);
   pol01098->GetYaxis()->SetLabelFont(42);
   pol01098->GetYaxis()->SetLabelOffset(0.007);
   pol01098->GetYaxis()->SetLabelSize(0.05);
   pol01098->GetYaxis()->SetTitleSize(0.06);
   pol01098->GetYaxis()->SetTitleOffset(1.25);
   pol01098->GetYaxis()->SetTitleFont(42);
   pol01098->SetParameter(0,2);
   pol01098->SetParError(0,1.338979e-16);
   pol01098->SetParLimits(0,0,0);
   pol01098->Draw("Csame");
   
   Double_t _fx1097[12] = {
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
   Double_t _fy1097[12] = {
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
   Double_t _fex1097[12] = {
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
   Double_t _fey1097[12] = {
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
   gre = new TGraphErrors(12,_fx1097,_fy1097,_fex1097,_fey1097);
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
   
   TH1F *Graph_Graph1097 = new TH1F("Graph_Graph1097","",100,770,5930);
   Graph_Graph1097->SetMinimum(1.9);
   Graph_Graph1097->SetMaximum(3.1);
   Graph_Graph1097->SetDirectory(0);
   Graph_Graph1097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1097->SetLineColor(ci);
   Graph_Graph1097->GetXaxis()->SetLabelFont(42);
   Graph_Graph1097->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetXaxis()->SetTitleFont(42);
   Graph_Graph1097->GetYaxis()->SetLabelFont(42);
   Graph_Graph1097->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetYaxis()->SetTitleFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1097);
   
   
   TF1 *pol01098 = new TF1("pol0","pol0",1200,5500);
   pol01098->SetFillColor(19);
   pol01098->SetFillStyle(0);
   pol01098->SetLineColor(2);
   pol01098->SetLineWidth(2);
   pol01098->SetChisquare(2.366583e-30);
   pol01098->SetNDF(11);
   pol01098->GetXaxis()->SetLabelFont(42);
   pol01098->GetXaxis()->SetLabelOffset(0.007);
   pol01098->GetXaxis()->SetLabelSize(0.05);
   pol01098->GetXaxis()->SetTitleSize(0.06);
   pol01098->GetXaxis()->SetTitleOffset(0.9);
   pol01098->GetXaxis()->SetTitleFont(42);
   pol01098->GetYaxis()->SetLabelFont(42);
   pol01098->GetYaxis()->SetLabelOffset(0.007);
   pol01098->GetYaxis()->SetLabelSize(0.05);
   pol01098->GetYaxis()->SetTitleSize(0.06);
   pol01098->GetYaxis()->SetTitleOffset(1.25);
   pol01098->GetYaxis()->SetTitleFont(42);
   pol01098->SetParameter(0,2);
   pol01098->SetParError(0,1.338979e-16);
   pol01098->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01098);
   gre->Draw("p");
   
   Double_t _fx1099[12] = {
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
   Double_t _fy1099[12] = {
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
   Double_t _fex1099[12] = {
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
   Double_t _fey1099[12] = {
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
   gre = new TGraphErrors(12,_fx1099,_fy1099,_fex1099,_fey1099);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1099 = new TH1F("Graph_Graph1099","",100,770,5930);
   Graph_Graph1099->SetMinimum(1.9);
   Graph_Graph1099->SetMaximum(3.1);
   Graph_Graph1099->SetDirectory(0);
   Graph_Graph1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1099->SetLineColor(ci);
   Graph_Graph1099->GetXaxis()->SetLabelFont(42);
   Graph_Graph1099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetXaxis()->SetTitleFont(42);
   Graph_Graph1099->GetYaxis()->SetLabelFont(42);
   Graph_Graph1099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetYaxis()->SetTitleFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1099);
   
   
   TF1 *pol01100 = new TF1("pol0","pol0",1200,5500);
   pol01100->SetFillColor(19);
   pol01100->SetFillStyle(0);
   pol01100->SetLineColor(2);
   pol01100->SetLineWidth(2);
   pol01100->SetChisquare(2.366583e-30);
   pol01100->SetNDF(11);
   pol01100->GetXaxis()->SetLabelFont(42);
   pol01100->GetXaxis()->SetLabelOffset(0.007);
   pol01100->GetXaxis()->SetLabelSize(0.05);
   pol01100->GetXaxis()->SetTitleSize(0.06);
   pol01100->GetXaxis()->SetTitleOffset(0.9);
   pol01100->GetXaxis()->SetTitleFont(42);
   pol01100->GetYaxis()->SetLabelFont(42);
   pol01100->GetYaxis()->SetLabelOffset(0.007);
   pol01100->GetYaxis()->SetLabelSize(0.05);
   pol01100->GetYaxis()->SetTitleSize(0.06);
   pol01100->GetYaxis()->SetTitleOffset(1.25);
   pol01100->GetYaxis()->SetTitleFont(42);
   pol01100->SetParameter(0,2);
   pol01100->SetParError(0,1.338979e-16);
   pol01100->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01100);
   gre->Draw("p");
   
   TF1 *pol01101 = new TF1("pol0","pol0",0,13000);
   pol01101->SetBit(TF1::kNotDraw);
   pol01101->SetFillColor(19);
   pol01101->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01101->SetMarkerColor(ci);
   pol01101->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01101->SetLineColor(ci);
   pol01101->SetLineWidth(3);
   pol01101->SetChisquare(2.366583e-30);
   pol01101->SetNDF(11);
   pol01101->GetXaxis()->SetLabelFont(42);
   pol01101->GetXaxis()->SetLabelOffset(0.007);
   pol01101->GetXaxis()->SetLabelSize(0.05);
   pol01101->GetXaxis()->SetTitleSize(0.06);
   pol01101->GetXaxis()->SetTitleOffset(0.9);
   pol01101->GetXaxis()->SetTitleFont(42);
   pol01101->GetYaxis()->SetLabelFont(42);
   pol01101->GetYaxis()->SetLabelOffset(0.007);
   pol01101->GetYaxis()->SetLabelSize(0.05);
   pol01101->GetYaxis()->SetTitleSize(0.06);
   pol01101->GetYaxis()->SetTitleOffset(1.25);
   pol01101->GetYaxis()->SetTitleFont(42);
   pol01101->SetParameter(0,2);
   pol01101->SetParError(0,1.338979e-16);
   pol01101->SetParLimits(0,0,0);
   pol01101->Draw("Csame");
   
   TF1 *pol01102 = new TF1("pol0","pol0",0,13000);
   pol01102->SetBit(TF1::kNotDraw);
   pol01102->SetFillColor(19);
   pol01102->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01102->SetMarkerColor(ci);
   pol01102->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol01102->SetLineColor(ci);
   pol01102->SetLineWidth(3);
   pol01102->SetLineStyle(9);
   pol01102->SetChisquare(2.366583e-30);
   pol01102->SetNDF(11);
   pol01102->GetXaxis()->SetLabelFont(42);
   pol01102->GetXaxis()->SetLabelOffset(0.007);
   pol01102->GetXaxis()->SetLabelSize(0.05);
   pol01102->GetXaxis()->SetTitleSize(0.06);
   pol01102->GetXaxis()->SetTitleOffset(0.9);
   pol01102->GetXaxis()->SetTitleFont(42);
   pol01102->GetYaxis()->SetLabelFont(42);
   pol01102->GetYaxis()->SetLabelOffset(0.007);
   pol01102->GetYaxis()->SetLabelSize(0.05);
   pol01102->GetYaxis()->SetTitleSize(0.06);
   pol01102->GetYaxis()->SetTitleOffset(1.25);
   pol01102->GetYaxis()->SetTitleFont(42);
   pol01102->SetParameter(0,2);
   pol01102->SetParError(0,1.338979e-16);
   pol01102->SetParLimits(0,0,0);
   pol01102->Draw("Csame");
   
   Double_t _fx1101[12] = {
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
   Double_t _fy1101[12] = {
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
   Double_t _fex1101[12] = {
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
   Double_t _fey1101[12] = {
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
   gre = new TGraphErrors(12,_fx1101,_fy1101,_fex1101,_fey1101);
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
   
   TH1F *Graph_Graph1101 = new TH1F("Graph_Graph1101","",100,770,5930);
   Graph_Graph1101->SetMinimum(1.9);
   Graph_Graph1101->SetMaximum(3.1);
   Graph_Graph1101->SetDirectory(0);
   Graph_Graph1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1101->SetLineColor(ci);
   Graph_Graph1101->GetXaxis()->SetLabelFont(42);
   Graph_Graph1101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1101->GetXaxis()->SetTitleFont(42);
   Graph_Graph1101->GetYaxis()->SetLabelFont(42);
   Graph_Graph1101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1101->GetYaxis()->SetTitleFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1101);
   
   
   TF1 *pol01102 = new TF1("pol0","pol0",1200,5500);
   pol01102->SetFillColor(19);
   pol01102->SetFillStyle(0);
   pol01102->SetLineColor(2);
   pol01102->SetLineWidth(2);
   pol01102->SetChisquare(2.366583e-30);
   pol01102->SetNDF(11);
   pol01102->GetXaxis()->SetLabelFont(42);
   pol01102->GetXaxis()->SetLabelOffset(0.007);
   pol01102->GetXaxis()->SetLabelSize(0.05);
   pol01102->GetXaxis()->SetTitleSize(0.06);
   pol01102->GetXaxis()->SetTitleOffset(0.9);
   pol01102->GetXaxis()->SetTitleFont(42);
   pol01102->GetYaxis()->SetLabelFont(42);
   pol01102->GetYaxis()->SetLabelOffset(0.007);
   pol01102->GetYaxis()->SetLabelSize(0.05);
   pol01102->GetYaxis()->SetTitleSize(0.06);
   pol01102->GetYaxis()->SetTitleOffset(1.25);
   pol01102->GetYaxis()->SetTitleFont(42);
   pol01102->SetParameter(0,2);
   pol01102->SetParError(0,1.338979e-16);
   pol01102->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01102);
   gre->Draw("p");
   
   Double_t _fx1103[12] = {
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
   Double_t _fy1103[12] = {
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
   Double_t _fex1103[12] = {
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
   Double_t _fey1103[12] = {
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
   gre = new TGraphErrors(12,_fx1103,_fy1103,_fex1103,_fey1103);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1103 = new TH1F("Graph_Graph1103","",100,770,5930);
   Graph_Graph1103->SetMinimum(1.9);
   Graph_Graph1103->SetMaximum(3.1);
   Graph_Graph1103->SetDirectory(0);
   Graph_Graph1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1103->SetLineColor(ci);
   Graph_Graph1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph1103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph1103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1103);
   
   
   TF1 *pol01104 = new TF1("pol0","pol0",1200,5500);
   pol01104->SetFillColor(19);
   pol01104->SetFillStyle(0);
   pol01104->SetLineColor(2);
   pol01104->SetLineWidth(2);
   pol01104->SetChisquare(2.366583e-30);
   pol01104->SetNDF(11);
   pol01104->GetXaxis()->SetLabelFont(42);
   pol01104->GetXaxis()->SetLabelOffset(0.007);
   pol01104->GetXaxis()->SetLabelSize(0.05);
   pol01104->GetXaxis()->SetTitleSize(0.06);
   pol01104->GetXaxis()->SetTitleOffset(0.9);
   pol01104->GetXaxis()->SetTitleFont(42);
   pol01104->GetYaxis()->SetLabelFont(42);
   pol01104->GetYaxis()->SetLabelOffset(0.007);
   pol01104->GetYaxis()->SetLabelSize(0.05);
   pol01104->GetYaxis()->SetTitleSize(0.06);
   pol01104->GetYaxis()->SetTitleOffset(1.25);
   pol01104->GetYaxis()->SetTitleFont(42);
   pol01104->SetParameter(0,2);
   pol01104->SetParError(0,1.338979e-16);
   pol01104->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01104);
   gre->Draw("p");
   
   TF1 *pol01105 = new TF1("pol0","pol0",0,13000);
   pol01105->SetBit(TF1::kNotDraw);
   pol01105->SetFillColor(19);
   pol01105->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01105->SetMarkerColor(ci);
   pol01105->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01105->SetLineColor(ci);
   pol01105->SetLineWidth(3);
   pol01105->SetChisquare(2.366583e-30);
   pol01105->SetNDF(11);
   pol01105->GetXaxis()->SetLabelFont(42);
   pol01105->GetXaxis()->SetLabelOffset(0.007);
   pol01105->GetXaxis()->SetLabelSize(0.05);
   pol01105->GetXaxis()->SetTitleSize(0.06);
   pol01105->GetXaxis()->SetTitleOffset(0.9);
   pol01105->GetXaxis()->SetTitleFont(42);
   pol01105->GetYaxis()->SetLabelFont(42);
   pol01105->GetYaxis()->SetLabelOffset(0.007);
   pol01105->GetYaxis()->SetLabelSize(0.05);
   pol01105->GetYaxis()->SetTitleSize(0.06);
   pol01105->GetYaxis()->SetTitleOffset(1.25);
   pol01105->GetYaxis()->SetTitleFont(42);
   pol01105->SetParameter(0,2);
   pol01105->SetParError(0,1.338979e-16);
   pol01105->SetParLimits(0,0,0);
   pol01105->Draw("Csame");
   
   TF1 *pol01106 = new TF1("pol0","pol0",0,13000);
   pol01106->SetBit(TF1::kNotDraw);
   pol01106->SetFillColor(19);
   pol01106->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01106->SetMarkerColor(ci);
   pol01106->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol01106->SetLineColor(ci);
   pol01106->SetLineWidth(3);
   pol01106->SetLineStyle(9);
   pol01106->SetChisquare(2.366583e-30);
   pol01106->SetNDF(11);
   pol01106->GetXaxis()->SetLabelFont(42);
   pol01106->GetXaxis()->SetLabelOffset(0.007);
   pol01106->GetXaxis()->SetLabelSize(0.05);
   pol01106->GetXaxis()->SetTitleSize(0.06);
   pol01106->GetXaxis()->SetTitleOffset(0.9);
   pol01106->GetXaxis()->SetTitleFont(42);
   pol01106->GetYaxis()->SetLabelFont(42);
   pol01106->GetYaxis()->SetLabelOffset(0.007);
   pol01106->GetYaxis()->SetLabelSize(0.05);
   pol01106->GetYaxis()->SetTitleSize(0.06);
   pol01106->GetYaxis()->SetTitleOffset(1.25);
   pol01106->GetYaxis()->SetTitleFont(42);
   pol01106->SetParameter(0,2);
   pol01106->SetParError(0,1.338979e-16);
   pol01106->SetParLimits(0,0,0);
   pol01106->Draw("Csame");
   
   Double_t _fx1105[12] = {
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
   Double_t _fy1105[12] = {
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
   Double_t _fex1105[12] = {
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
   Double_t _fey1105[12] = {
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
   gre = new TGraphErrors(12,_fx1105,_fy1105,_fex1105,_fey1105);
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
   
   TH1F *Graph_Graph1105 = new TH1F("Graph_Graph1105","",100,770,5930);
   Graph_Graph1105->SetMinimum(1.9);
   Graph_Graph1105->SetMaximum(3.1);
   Graph_Graph1105->SetDirectory(0);
   Graph_Graph1105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1105->SetLineColor(ci);
   Graph_Graph1105->GetXaxis()->SetLabelFont(42);
   Graph_Graph1105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1105->GetXaxis()->SetTitleFont(42);
   Graph_Graph1105->GetYaxis()->SetLabelFont(42);
   Graph_Graph1105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1105->GetYaxis()->SetTitleFont(42);
   Graph_Graph1105->GetZaxis()->SetLabelFont(42);
   Graph_Graph1105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1105);
   
   
   TF1 *pol01106 = new TF1("pol0","pol0",1200,5500);
   pol01106->SetFillColor(19);
   pol01106->SetFillStyle(0);
   pol01106->SetLineColor(2);
   pol01106->SetLineWidth(2);
   pol01106->SetChisquare(2.366583e-30);
   pol01106->SetNDF(11);
   pol01106->GetXaxis()->SetLabelFont(42);
   pol01106->GetXaxis()->SetLabelOffset(0.007);
   pol01106->GetXaxis()->SetLabelSize(0.05);
   pol01106->GetXaxis()->SetTitleSize(0.06);
   pol01106->GetXaxis()->SetTitleOffset(0.9);
   pol01106->GetXaxis()->SetTitleFont(42);
   pol01106->GetYaxis()->SetLabelFont(42);
   pol01106->GetYaxis()->SetLabelOffset(0.007);
   pol01106->GetYaxis()->SetLabelSize(0.05);
   pol01106->GetYaxis()->SetTitleSize(0.06);
   pol01106->GetYaxis()->SetTitleOffset(1.25);
   pol01106->GetYaxis()->SetTitleFont(42);
   pol01106->SetParameter(0,2);
   pol01106->SetParError(0,1.338979e-16);
   pol01106->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01106);
   gre->Draw("p");
   
   Double_t _fx1107[12] = {
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
   Double_t _fy1107[12] = {
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
   Double_t _fex1107[12] = {
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
   Double_t _fey1107[12] = {
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
   gre = new TGraphErrors(12,_fx1107,_fy1107,_fex1107,_fey1107);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","",100,770,5930);
   Graph_Graph1107->SetMinimum(1.9);
   Graph_Graph1107->SetMaximum(3.1);
   Graph_Graph1107->SetDirectory(0);
   Graph_Graph1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1107->SetLineColor(ci);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1107);
   
   
   TF1 *pol01108 = new TF1("pol0","pol0",1200,5500);
   pol01108->SetFillColor(19);
   pol01108->SetFillStyle(0);
   pol01108->SetLineColor(2);
   pol01108->SetLineWidth(2);
   pol01108->SetChisquare(2.366583e-30);
   pol01108->SetNDF(11);
   pol01108->GetXaxis()->SetLabelFont(42);
   pol01108->GetXaxis()->SetLabelOffset(0.007);
   pol01108->GetXaxis()->SetLabelSize(0.05);
   pol01108->GetXaxis()->SetTitleSize(0.06);
   pol01108->GetXaxis()->SetTitleOffset(0.9);
   pol01108->GetXaxis()->SetTitleFont(42);
   pol01108->GetYaxis()->SetLabelFont(42);
   pol01108->GetYaxis()->SetLabelOffset(0.007);
   pol01108->GetYaxis()->SetLabelSize(0.05);
   pol01108->GetYaxis()->SetTitleSize(0.06);
   pol01108->GetYaxis()->SetTitleOffset(1.25);
   pol01108->GetYaxis()->SetTitleFont(42);
   pol01108->SetParameter(0,2);
   pol01108->SetParError(0,1.338979e-16);
   pol01108->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01108);
   gre->Draw("p");
   
   TF1 *pol01109 = new TF1("pol0","pol0",0,13000);
   pol01109->SetBit(TF1::kNotDraw);
   pol01109->SetFillColor(19);
   pol01109->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01109->SetMarkerColor(ci);
   pol01109->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01109->SetLineColor(ci);
   pol01109->SetLineWidth(3);
   pol01109->SetChisquare(2.366583e-30);
   pol01109->SetNDF(11);
   pol01109->GetXaxis()->SetLabelFont(42);
   pol01109->GetXaxis()->SetLabelOffset(0.007);
   pol01109->GetXaxis()->SetLabelSize(0.05);
   pol01109->GetXaxis()->SetTitleSize(0.06);
   pol01109->GetXaxis()->SetTitleOffset(0.9);
   pol01109->GetXaxis()->SetTitleFont(42);
   pol01109->GetYaxis()->SetLabelFont(42);
   pol01109->GetYaxis()->SetLabelOffset(0.007);
   pol01109->GetYaxis()->SetLabelSize(0.05);
   pol01109->GetYaxis()->SetTitleSize(0.06);
   pol01109->GetYaxis()->SetTitleOffset(1.25);
   pol01109->GetYaxis()->SetTitleFont(42);
   pol01109->SetParameter(0,2);
   pol01109->SetParError(0,1.338979e-16);
   pol01109->SetParLimits(0,0,0);
   pol01109->Draw("Csame");
   
   TF1 *pol01110 = new TF1("pol0","pol0",0,13000);
   pol01110->SetBit(TF1::kNotDraw);
   pol01110->SetFillColor(19);
   pol01110->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01110->SetMarkerColor(ci);
   pol01110->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol01110->SetLineColor(ci);
   pol01110->SetLineWidth(3);
   pol01110->SetLineStyle(9);
   pol01110->SetChisquare(2.366583e-30);
   pol01110->SetNDF(11);
   pol01110->GetXaxis()->SetLabelFont(42);
   pol01110->GetXaxis()->SetLabelOffset(0.007);
   pol01110->GetXaxis()->SetLabelSize(0.05);
   pol01110->GetXaxis()->SetTitleSize(0.06);
   pol01110->GetXaxis()->SetTitleOffset(0.9);
   pol01110->GetXaxis()->SetTitleFont(42);
   pol01110->GetYaxis()->SetLabelFont(42);
   pol01110->GetYaxis()->SetLabelOffset(0.007);
   pol01110->GetYaxis()->SetLabelSize(0.05);
   pol01110->GetYaxis()->SetTitleSize(0.06);
   pol01110->GetYaxis()->SetTitleOffset(1.25);
   pol01110->GetYaxis()->SetTitleFont(42);
   pol01110->SetParameter(0,2);
   pol01110->SetParError(0,1.338979e-16);
   pol01110->SetParLimits(0,0,0);
   pol01110->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol0","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow ZZ","L");

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
