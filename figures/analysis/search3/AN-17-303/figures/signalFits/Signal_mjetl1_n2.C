void Signal_mjetl1_n2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:18:15 2018) by ROOT version6.02/05
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
   
   Double_t _fx1107[13] = {
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
   Double_t _fy1107[13] = {
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
   Double_t _fex1107[13] = {
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
   Double_t _fey1107[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1107,_fy1107,_fex1107,_fey1107);
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
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","",100,550,5950);
   Graph_Graph1107->SetMinimum(0);
   Graph_Graph1107->SetMaximum(4);
   Graph_Graph1107->SetDirectory(0);
   Graph_Graph1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1107->SetLineColor(ci);
   Graph_Graph1107->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1107->GetXaxis()->SetRange(11,92);
   Graph_Graph1107->GetXaxis()->SetNdivisions(209);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1107->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph1107->GetYaxis()->SetNdivisions(504);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1107->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1107);
   
   
   TF1 *n2_func1108 = new TF1("n2_func","pol0",1000,5500);
   n2_func1108->SetBit(TF1::kNotDraw);
   n2_func1108->SetFillColor(19);
   n2_func1108->SetFillStyle(0);
   n2_func1108->SetLineColor(2);
   n2_func1108->SetLineWidth(2);
   n2_func1108->SetChisquare(2.563798e-30);
   n2_func1108->SetNDF(12);
   n2_func1108->GetXaxis()->SetLabelFont(42);
   n2_func1108->GetXaxis()->SetLabelOffset(0.007);
   n2_func1108->GetXaxis()->SetLabelSize(0.05);
   n2_func1108->GetXaxis()->SetTitleSize(0.06);
   n2_func1108->GetXaxis()->SetTitleOffset(0.9);
   n2_func1108->GetXaxis()->SetTitleFont(42);
   n2_func1108->GetYaxis()->SetLabelFont(42);
   n2_func1108->GetYaxis()->SetLabelOffset(0.007);
   n2_func1108->GetYaxis()->SetLabelSize(0.05);
   n2_func1108->GetYaxis()->SetTitleSize(0.06);
   n2_func1108->GetYaxis()->SetTitleOffset(1.25);
   n2_func1108->GetYaxis()->SetTitleFont(42);
   n2_func1108->SetParameter(0,2);
   n2_func1108->SetParError(0,1.281975e-16);
   n2_func1108->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1108);
   gre->Draw("ap");
   
   Double_t _fx1109[13] = {
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
   Double_t _fy1109[13] = {
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
   Double_t _fex1109[13] = {
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
   Double_t _fey1109[13] = {
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
   gre = new TGraphErrors(13,_fx1109,_fy1109,_fex1109,_fey1109);
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
   
   TH1F *Graph_Graph1109 = new TH1F("Graph_Graph1109","",100,550,5950);
   Graph_Graph1109->SetMinimum(1.9);
   Graph_Graph1109->SetMaximum(3.1);
   Graph_Graph1109->SetDirectory(0);
   Graph_Graph1109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1109->SetLineColor(ci);
   Graph_Graph1109->GetXaxis()->SetLabelFont(42);
   Graph_Graph1109->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1109->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1109->GetXaxis()->SetTitleFont(42);
   Graph_Graph1109->GetYaxis()->SetLabelFont(42);
   Graph_Graph1109->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1109->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1109->GetYaxis()->SetTitleFont(42);
   Graph_Graph1109->GetZaxis()->SetLabelFont(42);
   Graph_Graph1109->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1109);
   
   
   TF1 *n2_func1110 = new TF1("n2_func","pol0",1000,5500);
   n2_func1110->SetBit(TF1::kNotDraw);
   n2_func1110->SetFillColor(19);
   n2_func1110->SetFillStyle(0);
   n2_func1110->SetLineColor(2);
   n2_func1110->SetLineWidth(2);
   n2_func1110->SetChisquare(2.563798e-30);
   n2_func1110->SetNDF(12);
   n2_func1110->GetXaxis()->SetLabelFont(42);
   n2_func1110->GetXaxis()->SetLabelOffset(0.007);
   n2_func1110->GetXaxis()->SetLabelSize(0.05);
   n2_func1110->GetXaxis()->SetTitleSize(0.06);
   n2_func1110->GetXaxis()->SetTitleOffset(0.9);
   n2_func1110->GetXaxis()->SetTitleFont(42);
   n2_func1110->GetYaxis()->SetLabelFont(42);
   n2_func1110->GetYaxis()->SetLabelOffset(0.007);
   n2_func1110->GetYaxis()->SetLabelSize(0.05);
   n2_func1110->GetYaxis()->SetTitleSize(0.06);
   n2_func1110->GetYaxis()->SetTitleOffset(1.25);
   n2_func1110->GetYaxis()->SetTitleFont(42);
   n2_func1110->SetParameter(0,2);
   n2_func1110->SetParError(0,1.281975e-16);
   n2_func1110->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1110);
   gre->Draw("p");
   
   Double_t _fx1111[13] = {
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
   Double_t _fy1111[13] = {
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
   Double_t _fex1111[13] = {
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
   Double_t _fey1111[13] = {
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
   gre = new TGraphErrors(13,_fx1111,_fy1111,_fex1111,_fey1111);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11071111 = new TH1F("Graph_Graph_Graph11071111","",100,550,5950);
   Graph_Graph_Graph11071111->SetMinimum(0);
   Graph_Graph_Graph11071111->SetMaximum(4);
   Graph_Graph_Graph11071111->SetDirectory(0);
   Graph_Graph_Graph11071111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11071111->SetLineColor(ci);
   Graph_Graph_Graph11071111->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph11071111->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph11071111->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11071111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11071111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11071111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11071111->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11071111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11071111->GetYaxis()->SetTitle("n2 (GeV)");
   Graph_Graph_Graph11071111->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11071111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11071111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11071111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11071111->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11071111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11071111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11071111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11071111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11071111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11071111);
   
   
   TF1 *n2_func1112 = new TF1("n2_func","pol0",1000,5500);
   n2_func1112->SetBit(TF1::kNotDraw);
   n2_func1112->SetFillColor(19);
   n2_func1112->SetFillStyle(0);
   n2_func1112->SetLineColor(2);
   n2_func1112->SetLineWidth(2);
   n2_func1112->SetChisquare(2.563798e-30);
   n2_func1112->SetNDF(12);
   n2_func1112->GetXaxis()->SetLabelFont(42);
   n2_func1112->GetXaxis()->SetLabelOffset(0.007);
   n2_func1112->GetXaxis()->SetLabelSize(0.05);
   n2_func1112->GetXaxis()->SetTitleSize(0.06);
   n2_func1112->GetXaxis()->SetTitleOffset(0.9);
   n2_func1112->GetXaxis()->SetTitleFont(42);
   n2_func1112->GetYaxis()->SetLabelFont(42);
   n2_func1112->GetYaxis()->SetLabelOffset(0.007);
   n2_func1112->GetYaxis()->SetLabelSize(0.05);
   n2_func1112->GetYaxis()->SetTitleSize(0.06);
   n2_func1112->GetYaxis()->SetTitleOffset(1.25);
   n2_func1112->GetYaxis()->SetTitleFont(42);
   n2_func1112->SetParameter(0,2);
   n2_func1112->SetParError(0,1.281975e-16);
   n2_func1112->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1112);
   gre->Draw("p");
   
   TF1 *n2_func1113 = new TF1("n2_func","pol0",0,13000);
   n2_func1113->SetFillColor(19);
   n2_func1113->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n2_func1113->SetMarkerColor(ci);
   n2_func1113->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   n2_func1113->SetLineColor(ci);
   n2_func1113->SetLineWidth(3);
   n2_func1113->SetChisquare(2.563798e-30);
   n2_func1113->SetNDF(12);
   n2_func1113->GetXaxis()->SetLabelFont(42);
   n2_func1113->GetXaxis()->SetLabelOffset(0.007);
   n2_func1113->GetXaxis()->SetLabelSize(0.05);
   n2_func1113->GetXaxis()->SetTitleSize(0.06);
   n2_func1113->GetXaxis()->SetTitleOffset(0.9);
   n2_func1113->GetXaxis()->SetTitleFont(42);
   n2_func1113->GetYaxis()->SetLabelFont(42);
   n2_func1113->GetYaxis()->SetLabelOffset(0.007);
   n2_func1113->GetYaxis()->SetLabelSize(0.05);
   n2_func1113->GetYaxis()->SetTitleSize(0.06);
   n2_func1113->GetYaxis()->SetTitleOffset(1.25);
   n2_func1113->GetYaxis()->SetTitleFont(42);
   n2_func1113->SetParameter(0,2);
   n2_func1113->SetParError(0,1.281975e-16);
   n2_func1113->SetParLimits(0,0,0);
   n2_func1113->Draw("Csame");
   
   TF1 *n2_func1114 = new TF1("n2_func","pol0",0,13000);
   n2_func1114->SetFillColor(19);
   n2_func1114->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   n2_func1114->SetMarkerColor(ci);
   n2_func1114->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   n2_func1114->SetLineColor(ci);
   n2_func1114->SetLineWidth(3);
   n2_func1114->SetLineStyle(9);
   n2_func1114->SetChisquare(2.563798e-30);
   n2_func1114->SetNDF(12);
   n2_func1114->GetXaxis()->SetLabelFont(42);
   n2_func1114->GetXaxis()->SetLabelOffset(0.007);
   n2_func1114->GetXaxis()->SetLabelSize(0.05);
   n2_func1114->GetXaxis()->SetTitleSize(0.06);
   n2_func1114->GetXaxis()->SetTitleOffset(0.9);
   n2_func1114->GetXaxis()->SetTitleFont(42);
   n2_func1114->GetYaxis()->SetLabelFont(42);
   n2_func1114->GetYaxis()->SetLabelOffset(0.007);
   n2_func1114->GetYaxis()->SetLabelSize(0.05);
   n2_func1114->GetYaxis()->SetTitleSize(0.06);
   n2_func1114->GetYaxis()->SetTitleOffset(1.25);
   n2_func1114->GetYaxis()->SetTitleFont(42);
   n2_func1114->SetParameter(0,2);
   n2_func1114->SetParError(0,1.281975e-16);
   n2_func1114->SetParLimits(0,0,0);
   n2_func1114->Draw("Csame");
   
   Double_t _fx1113[13] = {
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
   Double_t _fy1113[13] = {
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
   Double_t _fex1113[13] = {
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
   Double_t _fey1113[13] = {
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
   gre = new TGraphErrors(13,_fx1113,_fy1113,_fex1113,_fey1113);
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
   
   TH1F *Graph_Graph1113 = new TH1F("Graph_Graph1113","",100,550,5950);
   Graph_Graph1113->SetMinimum(1.9);
   Graph_Graph1113->SetMaximum(3.1);
   Graph_Graph1113->SetDirectory(0);
   Graph_Graph1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1113->SetLineColor(ci);
   Graph_Graph1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph1113->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1113->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph1113->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1113->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1113);
   
   
   TF1 *n2_func1114 = new TF1("n2_func","pol0",1000,5500);
   n2_func1114->SetBit(TF1::kNotDraw);
   n2_func1114->SetFillColor(19);
   n2_func1114->SetFillStyle(0);
   n2_func1114->SetLineColor(2);
   n2_func1114->SetLineWidth(2);
   n2_func1114->SetChisquare(2.563798e-30);
   n2_func1114->SetNDF(12);
   n2_func1114->GetXaxis()->SetLabelFont(42);
   n2_func1114->GetXaxis()->SetLabelOffset(0.007);
   n2_func1114->GetXaxis()->SetLabelSize(0.05);
   n2_func1114->GetXaxis()->SetTitleSize(0.06);
   n2_func1114->GetXaxis()->SetTitleOffset(0.9);
   n2_func1114->GetXaxis()->SetTitleFont(42);
   n2_func1114->GetYaxis()->SetLabelFont(42);
   n2_func1114->GetYaxis()->SetLabelOffset(0.007);
   n2_func1114->GetYaxis()->SetLabelSize(0.05);
   n2_func1114->GetYaxis()->SetTitleSize(0.06);
   n2_func1114->GetYaxis()->SetTitleOffset(1.25);
   n2_func1114->GetYaxis()->SetTitleFont(42);
   n2_func1114->SetParameter(0,2);
   n2_func1114->SetParError(0,1.281975e-16);
   n2_func1114->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1114);
   gre->Draw("p");
   
   Double_t _fx1115[13] = {
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
   Double_t _fy1115[13] = {
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
   Double_t _fex1115[13] = {
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
   Double_t _fey1115[13] = {
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
   gre = new TGraphErrors(13,_fx1115,_fy1115,_fex1115,_fey1115);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1115 = new TH1F("Graph_Graph1115","",100,550,5950);
   Graph_Graph1115->SetMinimum(1.9);
   Graph_Graph1115->SetMaximum(3.1);
   Graph_Graph1115->SetDirectory(0);
   Graph_Graph1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1115->SetLineColor(ci);
   Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1115);
   
   
   TF1 *n2_func1116 = new TF1("n2_func","pol0",1000,5500);
   n2_func1116->SetBit(TF1::kNotDraw);
   n2_func1116->SetFillColor(19);
   n2_func1116->SetFillStyle(0);
   n2_func1116->SetLineColor(2);
   n2_func1116->SetLineWidth(2);
   n2_func1116->SetChisquare(2.563798e-30);
   n2_func1116->SetNDF(12);
   n2_func1116->GetXaxis()->SetLabelFont(42);
   n2_func1116->GetXaxis()->SetLabelOffset(0.007);
   n2_func1116->GetXaxis()->SetLabelSize(0.05);
   n2_func1116->GetXaxis()->SetTitleSize(0.06);
   n2_func1116->GetXaxis()->SetTitleOffset(0.9);
   n2_func1116->GetXaxis()->SetTitleFont(42);
   n2_func1116->GetYaxis()->SetLabelFont(42);
   n2_func1116->GetYaxis()->SetLabelOffset(0.007);
   n2_func1116->GetYaxis()->SetLabelSize(0.05);
   n2_func1116->GetYaxis()->SetTitleSize(0.06);
   n2_func1116->GetYaxis()->SetTitleOffset(1.25);
   n2_func1116->GetYaxis()->SetTitleFont(42);
   n2_func1116->SetParameter(0,2);
   n2_func1116->SetParError(0,1.281975e-16);
   n2_func1116->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1116);
   gre->Draw("p");
   
   TF1 *n2_func1117 = new TF1("n2_func","pol0",0,13000);
   n2_func1117->SetFillColor(19);
   n2_func1117->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n2_func1117->SetMarkerColor(ci);
   n2_func1117->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   n2_func1117->SetLineColor(ci);
   n2_func1117->SetLineWidth(3);
   n2_func1117->SetChisquare(2.563798e-30);
   n2_func1117->SetNDF(12);
   n2_func1117->GetXaxis()->SetLabelFont(42);
   n2_func1117->GetXaxis()->SetLabelOffset(0.007);
   n2_func1117->GetXaxis()->SetLabelSize(0.05);
   n2_func1117->GetXaxis()->SetTitleSize(0.06);
   n2_func1117->GetXaxis()->SetTitleOffset(0.9);
   n2_func1117->GetXaxis()->SetTitleFont(42);
   n2_func1117->GetYaxis()->SetLabelFont(42);
   n2_func1117->GetYaxis()->SetLabelOffset(0.007);
   n2_func1117->GetYaxis()->SetLabelSize(0.05);
   n2_func1117->GetYaxis()->SetTitleSize(0.06);
   n2_func1117->GetYaxis()->SetTitleOffset(1.25);
   n2_func1117->GetYaxis()->SetTitleFont(42);
   n2_func1117->SetParameter(0,2);
   n2_func1117->SetParError(0,1.281975e-16);
   n2_func1117->SetParLimits(0,0,0);
   n2_func1117->Draw("Csame");
   
   TF1 *n2_func1118 = new TF1("n2_func","pol0",0,13000);
   n2_func1118->SetFillColor(19);
   n2_func1118->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   n2_func1118->SetMarkerColor(ci);
   n2_func1118->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   n2_func1118->SetLineColor(ci);
   n2_func1118->SetLineWidth(3);
   n2_func1118->SetLineStyle(9);
   n2_func1118->SetChisquare(2.563798e-30);
   n2_func1118->SetNDF(12);
   n2_func1118->GetXaxis()->SetLabelFont(42);
   n2_func1118->GetXaxis()->SetLabelOffset(0.007);
   n2_func1118->GetXaxis()->SetLabelSize(0.05);
   n2_func1118->GetXaxis()->SetTitleSize(0.06);
   n2_func1118->GetXaxis()->SetTitleOffset(0.9);
   n2_func1118->GetXaxis()->SetTitleFont(42);
   n2_func1118->GetYaxis()->SetLabelFont(42);
   n2_func1118->GetYaxis()->SetLabelOffset(0.007);
   n2_func1118->GetYaxis()->SetLabelSize(0.05);
   n2_func1118->GetYaxis()->SetTitleSize(0.06);
   n2_func1118->GetYaxis()->SetTitleOffset(1.25);
   n2_func1118->GetYaxis()->SetTitleFont(42);
   n2_func1118->SetParameter(0,2);
   n2_func1118->SetParError(0,1.281975e-16);
   n2_func1118->SetParLimits(0,0,0);
   n2_func1118->Draw("Csame");
   
   Double_t _fx1117[13] = {
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
   Double_t _fy1117[13] = {
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
   Double_t _fex1117[13] = {
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
   Double_t _fey1117[13] = {
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
   gre = new TGraphErrors(13,_fx1117,_fy1117,_fex1117,_fey1117);
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
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","",100,550,5950);
   Graph_Graph1117->SetMinimum(1.9);
   Graph_Graph1117->SetMaximum(3.1);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   
   TF1 *n2_func1118 = new TF1("n2_func","pol0",1000,5500);
   n2_func1118->SetBit(TF1::kNotDraw);
   n2_func1118->SetFillColor(19);
   n2_func1118->SetFillStyle(0);
   n2_func1118->SetLineColor(2);
   n2_func1118->SetLineWidth(2);
   n2_func1118->SetChisquare(2.563798e-30);
   n2_func1118->SetNDF(12);
   n2_func1118->GetXaxis()->SetLabelFont(42);
   n2_func1118->GetXaxis()->SetLabelOffset(0.007);
   n2_func1118->GetXaxis()->SetLabelSize(0.05);
   n2_func1118->GetXaxis()->SetTitleSize(0.06);
   n2_func1118->GetXaxis()->SetTitleOffset(0.9);
   n2_func1118->GetXaxis()->SetTitleFont(42);
   n2_func1118->GetYaxis()->SetLabelFont(42);
   n2_func1118->GetYaxis()->SetLabelOffset(0.007);
   n2_func1118->GetYaxis()->SetLabelSize(0.05);
   n2_func1118->GetYaxis()->SetTitleSize(0.06);
   n2_func1118->GetYaxis()->SetTitleOffset(1.25);
   n2_func1118->GetYaxis()->SetTitleFont(42);
   n2_func1118->SetParameter(0,2);
   n2_func1118->SetParError(0,1.281975e-16);
   n2_func1118->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1118);
   gre->Draw("p");
   
   Double_t _fx1119[13] = {
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
   Double_t _fy1119[13] = {
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
   Double_t _fex1119[13] = {
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
   Double_t _fey1119[13] = {
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
   gre = new TGraphErrors(13,_fx1119,_fy1119,_fex1119,_fey1119);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","",100,550,5950);
   Graph_Graph1119->SetMinimum(1.9);
   Graph_Graph1119->SetMaximum(3.1);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph1119->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1119);
   
   
   TF1 *n2_func1120 = new TF1("n2_func","pol0",1000,5500);
   n2_func1120->SetBit(TF1::kNotDraw);
   n2_func1120->SetFillColor(19);
   n2_func1120->SetFillStyle(0);
   n2_func1120->SetLineColor(2);
   n2_func1120->SetLineWidth(2);
   n2_func1120->SetChisquare(2.563798e-30);
   n2_func1120->SetNDF(12);
   n2_func1120->GetXaxis()->SetLabelFont(42);
   n2_func1120->GetXaxis()->SetLabelOffset(0.007);
   n2_func1120->GetXaxis()->SetLabelSize(0.05);
   n2_func1120->GetXaxis()->SetTitleSize(0.06);
   n2_func1120->GetXaxis()->SetTitleOffset(0.9);
   n2_func1120->GetXaxis()->SetTitleFont(42);
   n2_func1120->GetYaxis()->SetLabelFont(42);
   n2_func1120->GetYaxis()->SetLabelOffset(0.007);
   n2_func1120->GetYaxis()->SetLabelSize(0.05);
   n2_func1120->GetYaxis()->SetTitleSize(0.06);
   n2_func1120->GetYaxis()->SetTitleOffset(1.25);
   n2_func1120->GetYaxis()->SetTitleFont(42);
   n2_func1120->SetParameter(0,2);
   n2_func1120->SetParError(0,1.281975e-16);
   n2_func1120->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1120);
   gre->Draw("p");
   
   TF1 *n2_func1121 = new TF1("n2_func","pol0",0,13000);
   n2_func1121->SetFillColor(19);
   n2_func1121->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1121->SetMarkerColor(ci);
   n2_func1121->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1121->SetLineColor(ci);
   n2_func1121->SetLineWidth(3);
   n2_func1121->SetChisquare(2.563798e-30);
   n2_func1121->SetNDF(12);
   n2_func1121->GetXaxis()->SetLabelFont(42);
   n2_func1121->GetXaxis()->SetLabelOffset(0.007);
   n2_func1121->GetXaxis()->SetLabelSize(0.05);
   n2_func1121->GetXaxis()->SetTitleSize(0.06);
   n2_func1121->GetXaxis()->SetTitleOffset(0.9);
   n2_func1121->GetXaxis()->SetTitleFont(42);
   n2_func1121->GetYaxis()->SetLabelFont(42);
   n2_func1121->GetYaxis()->SetLabelOffset(0.007);
   n2_func1121->GetYaxis()->SetLabelSize(0.05);
   n2_func1121->GetYaxis()->SetTitleSize(0.06);
   n2_func1121->GetYaxis()->SetTitleOffset(1.25);
   n2_func1121->GetYaxis()->SetTitleFont(42);
   n2_func1121->SetParameter(0,2);
   n2_func1121->SetParError(0,1.281975e-16);
   n2_func1121->SetParLimits(0,0,0);
   n2_func1121->Draw("Csame");
   
   TF1 *n2_func1122 = new TF1("n2_func","pol0",0,13000);
   n2_func1122->SetFillColor(19);
   n2_func1122->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1122->SetMarkerColor(ci);
   n2_func1122->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   n2_func1122->SetLineColor(ci);
   n2_func1122->SetLineWidth(3);
   n2_func1122->SetLineStyle(9);
   n2_func1122->SetChisquare(2.563798e-30);
   n2_func1122->SetNDF(12);
   n2_func1122->GetXaxis()->SetLabelFont(42);
   n2_func1122->GetXaxis()->SetLabelOffset(0.007);
   n2_func1122->GetXaxis()->SetLabelSize(0.05);
   n2_func1122->GetXaxis()->SetTitleSize(0.06);
   n2_func1122->GetXaxis()->SetTitleOffset(0.9);
   n2_func1122->GetXaxis()->SetTitleFont(42);
   n2_func1122->GetYaxis()->SetLabelFont(42);
   n2_func1122->GetYaxis()->SetLabelOffset(0.007);
   n2_func1122->GetYaxis()->SetLabelSize(0.05);
   n2_func1122->GetYaxis()->SetTitleSize(0.06);
   n2_func1122->GetYaxis()->SetTitleOffset(1.25);
   n2_func1122->GetYaxis()->SetTitleFont(42);
   n2_func1122->SetParameter(0,2);
   n2_func1122->SetParError(0,1.281975e-16);
   n2_func1122->SetParLimits(0,0,0);
   n2_func1122->Draw("Csame");
   
   Double_t _fx1121[13] = {
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
   Double_t _fy1121[13] = {
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
   Double_t _fex1121[13] = {
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
   Double_t _fey1121[13] = {
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
   gre = new TGraphErrors(13,_fx1121,_fy1121,_fex1121,_fey1121);
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
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","",100,550,5950);
   Graph_Graph1121->SetMinimum(1.9);
   Graph_Graph1121->SetMaximum(3.1);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   
   TF1 *n2_func1122 = new TF1("n2_func","pol0",1000,5500);
   n2_func1122->SetBit(TF1::kNotDraw);
   n2_func1122->SetFillColor(19);
   n2_func1122->SetFillStyle(0);
   n2_func1122->SetLineColor(2);
   n2_func1122->SetLineWidth(2);
   n2_func1122->SetChisquare(2.563798e-30);
   n2_func1122->SetNDF(12);
   n2_func1122->GetXaxis()->SetLabelFont(42);
   n2_func1122->GetXaxis()->SetLabelOffset(0.007);
   n2_func1122->GetXaxis()->SetLabelSize(0.05);
   n2_func1122->GetXaxis()->SetTitleSize(0.06);
   n2_func1122->GetXaxis()->SetTitleOffset(0.9);
   n2_func1122->GetXaxis()->SetTitleFont(42);
   n2_func1122->GetYaxis()->SetLabelFont(42);
   n2_func1122->GetYaxis()->SetLabelOffset(0.007);
   n2_func1122->GetYaxis()->SetLabelSize(0.05);
   n2_func1122->GetYaxis()->SetTitleSize(0.06);
   n2_func1122->GetYaxis()->SetTitleOffset(1.25);
   n2_func1122->GetYaxis()->SetTitleFont(42);
   n2_func1122->SetParameter(0,2);
   n2_func1122->SetParError(0,1.281975e-16);
   n2_func1122->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1122);
   gre->Draw("p");
   
   Double_t _fx1123[13] = {
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
   Double_t _fy1123[13] = {
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
   Double_t _fex1123[13] = {
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
   Double_t _fey1123[13] = {
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
   gre = new TGraphErrors(13,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","",100,550,5950);
   Graph_Graph1123->SetMinimum(1.9);
   Graph_Graph1123->SetMaximum(3.1);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *n2_func1124 = new TF1("n2_func","pol0",1000,5500);
   n2_func1124->SetBit(TF1::kNotDraw);
   n2_func1124->SetFillColor(19);
   n2_func1124->SetFillStyle(0);
   n2_func1124->SetLineColor(2);
   n2_func1124->SetLineWidth(2);
   n2_func1124->SetChisquare(2.563798e-30);
   n2_func1124->SetNDF(12);
   n2_func1124->GetXaxis()->SetLabelFont(42);
   n2_func1124->GetXaxis()->SetLabelOffset(0.007);
   n2_func1124->GetXaxis()->SetLabelSize(0.05);
   n2_func1124->GetXaxis()->SetTitleSize(0.06);
   n2_func1124->GetXaxis()->SetTitleOffset(0.9);
   n2_func1124->GetXaxis()->SetTitleFont(42);
   n2_func1124->GetYaxis()->SetLabelFont(42);
   n2_func1124->GetYaxis()->SetLabelOffset(0.007);
   n2_func1124->GetYaxis()->SetLabelSize(0.05);
   n2_func1124->GetYaxis()->SetTitleSize(0.06);
   n2_func1124->GetYaxis()->SetTitleOffset(1.25);
   n2_func1124->GetYaxis()->SetTitleFont(42);
   n2_func1124->SetParameter(0,2);
   n2_func1124->SetParError(0,1.281975e-16);
   n2_func1124->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(n2_func1124);
   gre->Draw("p");
   
   TF1 *n2_func1125 = new TF1("n2_func","pol0",0,13000);
   n2_func1125->SetFillColor(19);
   n2_func1125->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n2_func1125->SetMarkerColor(ci);
   n2_func1125->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   n2_func1125->SetLineColor(ci);
   n2_func1125->SetLineWidth(3);
   n2_func1125->SetChisquare(2.563798e-30);
   n2_func1125->SetNDF(12);
   n2_func1125->GetXaxis()->SetLabelFont(42);
   n2_func1125->GetXaxis()->SetLabelOffset(0.007);
   n2_func1125->GetXaxis()->SetLabelSize(0.05);
   n2_func1125->GetXaxis()->SetTitleSize(0.06);
   n2_func1125->GetXaxis()->SetTitleOffset(0.9);
   n2_func1125->GetXaxis()->SetTitleFont(42);
   n2_func1125->GetYaxis()->SetLabelFont(42);
   n2_func1125->GetYaxis()->SetLabelOffset(0.007);
   n2_func1125->GetYaxis()->SetLabelSize(0.05);
   n2_func1125->GetYaxis()->SetTitleSize(0.06);
   n2_func1125->GetYaxis()->SetTitleOffset(1.25);
   n2_func1125->GetYaxis()->SetTitleFont(42);
   n2_func1125->SetParameter(0,2);
   n2_func1125->SetParError(0,1.281975e-16);
   n2_func1125->SetParLimits(0,0,0);
   n2_func1125->Draw("Csame");
   
   TF1 *n2_func1126 = new TF1("n2_func","pol0",0,13000);
   n2_func1126->SetFillColor(19);
   n2_func1126->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   n2_func1126->SetMarkerColor(ci);
   n2_func1126->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   n2_func1126->SetLineColor(ci);
   n2_func1126->SetLineWidth(3);
   n2_func1126->SetLineStyle(9);
   n2_func1126->SetChisquare(2.563798e-30);
   n2_func1126->SetNDF(12);
   n2_func1126->GetXaxis()->SetLabelFont(42);
   n2_func1126->GetXaxis()->SetLabelOffset(0.007);
   n2_func1126->GetXaxis()->SetLabelSize(0.05);
   n2_func1126->GetXaxis()->SetTitleSize(0.06);
   n2_func1126->GetXaxis()->SetTitleOffset(0.9);
   n2_func1126->GetXaxis()->SetTitleFont(42);
   n2_func1126->GetYaxis()->SetLabelFont(42);
   n2_func1126->GetYaxis()->SetLabelOffset(0.007);
   n2_func1126->GetYaxis()->SetLabelSize(0.05);
   n2_func1126->GetYaxis()->SetTitleSize(0.06);
   n2_func1126->GetYaxis()->SetTitleOffset(1.25);
   n2_func1126->GetYaxis()->SetTitleFont(42);
   n2_func1126->SetParameter(0,2);
   n2_func1126->SetParError(0,1.281975e-16);
   n2_func1126->SetParLimits(0,0,0);
   n2_func1126->Draw("Csame");
   
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
