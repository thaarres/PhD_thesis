void Signal_mjetl1_alpha()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:17:48 2018) by ROOT version6.02/05
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
   
   Double_t _fx1053[13] = {
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
   Double_t _fy1053[13] = {
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
   Double_t _fex1053[13] = {
   0,
   0,
   0,
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
   Double_t _fey1053[13] = {
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(13,_fx1053,_fy1053,_fex1053,_fey1053);
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
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,550,5950);
   Graph_Graph1053->SetMinimum(0);
   Graph_Graph1053->SetMaximum(5);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1053->GetXaxis()->SetRange(11,92);
   Graph_Graph1053->GetXaxis()->SetNdivisions(209);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph1053->GetYaxis()->SetNdivisions(504);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   
   TF1 *alpha_func1054 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1054->SetBit(TF1::kNotDraw);
   alpha_func1054->SetFillColor(19);
   alpha_func1054->SetFillStyle(0);
   alpha_func1054->SetLineColor(2);
   alpha_func1054->SetLineWidth(2);
   alpha_func1054->SetChisquare(6.409495e-31);
   alpha_func1054->SetNDF(12);
   alpha_func1054->GetXaxis()->SetLabelFont(42);
   alpha_func1054->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1054->GetXaxis()->SetLabelSize(0.05);
   alpha_func1054->GetXaxis()->SetTitleSize(0.06);
   alpha_func1054->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1054->GetXaxis()->SetTitleFont(42);
   alpha_func1054->GetYaxis()->SetLabelFont(42);
   alpha_func1054->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1054->GetYaxis()->SetLabelSize(0.05);
   alpha_func1054->GetYaxis()->SetTitleSize(0.06);
   alpha_func1054->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1054->GetYaxis()->SetTitleFont(42);
   alpha_func1054->SetParameter(0,1.083);
   alpha_func1054->SetParError(0,6.409876e-17);
   alpha_func1054->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1054);
   gre->Draw("ap");
   
   Double_t _fx1055[13] = {
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
   Double_t _fy1055[13] = {
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
   Double_t _fex1055[13] = {
   0,
   0,
   0,
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
   Double_t _fey1055[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1055,_fy1055,_fex1055,_fey1055);
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
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,550,5950);
   Graph_Graph1055->SetMinimum(1.025);
   Graph_Graph1055->SetMaximum(2.225);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   
   TF1 *alpha_func1056 = new TF1("alpha_func","pol4",1000,5500);
   alpha_func1056->SetBit(TF1::kNotDraw);
   alpha_func1056->SetFillColor(19);
   alpha_func1056->SetFillStyle(0);
   alpha_func1056->SetLineColor(2);
   alpha_func1056->SetLineWidth(2);
   alpha_func1056->SetChisquare(1.467281e-27);
   alpha_func1056->SetNDF(8);
   alpha_func1056->GetXaxis()->SetLabelFont(42);
   alpha_func1056->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1056->GetXaxis()->SetLabelSize(0.05);
   alpha_func1056->GetXaxis()->SetTitleSize(0.06);
   alpha_func1056->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1056->GetXaxis()->SetTitleFont(42);
   alpha_func1056->GetYaxis()->SetLabelFont(42);
   alpha_func1056->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1056->GetYaxis()->SetLabelSize(0.05);
   alpha_func1056->GetYaxis()->SetTitleSize(0.06);
   alpha_func1056->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1056->GetYaxis()->SetTitleFont(42);
   alpha_func1056->SetParameter(0,1.125);
   alpha_func1056->SetParError(0,1.010526e-13);
   alpha_func1056->SetParLimits(0,0,0);
   alpha_func1056->SetParameter(1,-4.077273e-16);
   alpha_func1056->SetParError(1,1.631386e-16);
   alpha_func1056->SetParLimits(1,0,0);
   alpha_func1056->SetParameter(2,2.057548e-19);
   alpha_func1056->SetParError(2,8.923675e-20);
   alpha_func1056->SetParLimits(2,0,0);
   alpha_func1056->SetParameter(3,-4.192122e-23);
   alpha_func1056->SetParError(3,1.985292e-23);
   alpha_func1056->SetParLimits(3,0,0);
   alpha_func1056->SetParameter(4,2.979754e-27);
   alpha_func1056->SetParError(4,1.538285e-27);
   alpha_func1056->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1056);
   gre->Draw("p");
   
   Double_t _fx1057[13] = {
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
   Double_t _fy1057[13] = {
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
   Double_t _fex1057[13] = {
   0,
   0,
   0,
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
   Double_t _fey1057[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10531057 = new TH1F("Graph_Graph_Graph10531057","",100,550,5950);
   Graph_Graph_Graph10531057->SetMinimum(0);
   Graph_Graph_Graph10531057->SetMaximum(5);
   Graph_Graph_Graph10531057->SetDirectory(0);
   Graph_Graph_Graph10531057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10531057->SetLineColor(ci);
   Graph_Graph_Graph10531057->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph10531057->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph10531057->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10531057->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10531057->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10531057->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10531057->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10531057->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10531057->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph_Graph10531057->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10531057->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10531057->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10531057->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10531057->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10531057->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10531057->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10531057->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10531057->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10531057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10531057);
   
   
   TF1 *alpha_func1058 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1058->SetBit(TF1::kNotDraw);
   alpha_func1058->SetFillColor(19);
   alpha_func1058->SetFillStyle(0);
   alpha_func1058->SetLineColor(2);
   alpha_func1058->SetLineWidth(2);
   alpha_func1058->SetChisquare(6.409495e-31);
   alpha_func1058->SetNDF(12);
   alpha_func1058->GetXaxis()->SetLabelFont(42);
   alpha_func1058->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1058->GetXaxis()->SetLabelSize(0.05);
   alpha_func1058->GetXaxis()->SetTitleSize(0.06);
   alpha_func1058->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1058->GetXaxis()->SetTitleFont(42);
   alpha_func1058->GetYaxis()->SetLabelFont(42);
   alpha_func1058->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1058->GetYaxis()->SetLabelSize(0.05);
   alpha_func1058->GetYaxis()->SetTitleSize(0.06);
   alpha_func1058->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1058->GetYaxis()->SetTitleFont(42);
   alpha_func1058->SetParameter(0,1.083);
   alpha_func1058->SetParError(0,6.409876e-17);
   alpha_func1058->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1058);
   gre->Draw("p");
   
   TF1 *alpha_func1059 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1059->SetFillColor(19);
   alpha_func1059->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha_func1059->SetMarkerColor(ci);
   alpha_func1059->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   alpha_func1059->SetLineColor(ci);
   alpha_func1059->SetLineWidth(3);
   alpha_func1059->SetChisquare(6.409495e-31);
   alpha_func1059->SetNDF(12);
   alpha_func1059->GetXaxis()->SetLabelFont(42);
   alpha_func1059->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1059->GetXaxis()->SetLabelSize(0.05);
   alpha_func1059->GetXaxis()->SetTitleSize(0.06);
   alpha_func1059->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1059->GetXaxis()->SetTitleFont(42);
   alpha_func1059->GetYaxis()->SetLabelFont(42);
   alpha_func1059->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1059->GetYaxis()->SetLabelSize(0.05);
   alpha_func1059->GetYaxis()->SetTitleSize(0.06);
   alpha_func1059->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1059->GetYaxis()->SetTitleFont(42);
   alpha_func1059->SetParameter(0,1.083);
   alpha_func1059->SetParError(0,6.409876e-17);
   alpha_func1059->SetParLimits(0,0,0);
   alpha_func1059->Draw("Csame");
   
   TF1 *alpha_func1060 = new TF1("alpha_func","pol4",0,13000);
   alpha_func1060->SetFillColor(19);
   alpha_func1060->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha_func1060->SetMarkerColor(ci);
   alpha_func1060->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   alpha_func1060->SetLineColor(ci);
   alpha_func1060->SetLineWidth(3);
   alpha_func1060->SetLineStyle(9);
   alpha_func1060->SetChisquare(1.467281e-27);
   alpha_func1060->SetNDF(8);
   alpha_func1060->GetXaxis()->SetLabelFont(42);
   alpha_func1060->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1060->GetXaxis()->SetLabelSize(0.05);
   alpha_func1060->GetXaxis()->SetTitleSize(0.06);
   alpha_func1060->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1060->GetXaxis()->SetTitleFont(42);
   alpha_func1060->GetYaxis()->SetLabelFont(42);
   alpha_func1060->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1060->GetYaxis()->SetLabelSize(0.05);
   alpha_func1060->GetYaxis()->SetTitleSize(0.06);
   alpha_func1060->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1060->GetYaxis()->SetTitleFont(42);
   alpha_func1060->SetParameter(0,1.125);
   alpha_func1060->SetParError(0,1.010526e-13);
   alpha_func1060->SetParLimits(0,0,0);
   alpha_func1060->SetParameter(1,-4.077273e-16);
   alpha_func1060->SetParError(1,1.631386e-16);
   alpha_func1060->SetParLimits(1,0,0);
   alpha_func1060->SetParameter(2,2.057548e-19);
   alpha_func1060->SetParError(2,8.923675e-20);
   alpha_func1060->SetParLimits(2,0,0);
   alpha_func1060->SetParameter(3,-4.192122e-23);
   alpha_func1060->SetParError(3,1.985292e-23);
   alpha_func1060->SetParLimits(3,0,0);
   alpha_func1060->SetParameter(4,2.979754e-27);
   alpha_func1060->SetParError(4,1.538285e-27);
   alpha_func1060->SetParLimits(4,0,0);
   alpha_func1060->Draw("Csame");
   
   Double_t _fx1059[13] = {
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
   Double_t _fy1059[13] = {
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
   Double_t _fex1059[13] = {
   0,
   0,
   0,
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
   Double_t _fey1059[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1059,_fy1059,_fex1059,_fey1059);
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
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","",100,550,5950);
   Graph_Graph1059->SetMinimum(1.025);
   Graph_Graph1059->SetMaximum(2.225);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1059->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1059->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1059->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   
   TF1 *alpha_func1060 = new TF1("alpha_func","pol3",1000,5500);
   alpha_func1060->SetBit(TF1::kNotDraw);
   alpha_func1060->SetFillColor(19);
   alpha_func1060->SetFillStyle(0);
   alpha_func1060->SetLineColor(2);
   alpha_func1060->SetLineWidth(2);
   alpha_func1060->SetChisquare(7.956155e-28);
   alpha_func1060->SetNDF(9);
   alpha_func1060->GetXaxis()->SetLabelFont(42);
   alpha_func1060->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1060->GetXaxis()->SetLabelSize(0.05);
   alpha_func1060->GetXaxis()->SetTitleSize(0.06);
   alpha_func1060->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1060->GetXaxis()->SetTitleFont(42);
   alpha_func1060->GetYaxis()->SetLabelFont(42);
   alpha_func1060->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1060->GetYaxis()->SetLabelSize(0.05);
   alpha_func1060->GetYaxis()->SetTitleSize(0.06);
   alpha_func1060->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1060->GetYaxis()->SetTitleFont(42);
   alpha_func1060->SetParameter(0,1.125);
   alpha_func1060->SetParError(0,3.102647e-14);
   alpha_func1060->SetParLimits(0,0,0);
   alpha_func1060->SetParameter(1,-1.083755e-16);
   alpha_func1060->SetParError(1,3.628699e-17);
   alpha_func1060->SetParLimits(1,0,0);
   alpha_func1060->SetParameter(2,3.634859e-20);
   alpha_func1060->SetParError(2,1.231752e-20);
   alpha_func1060->SetParLimits(2,0,0);
   alpha_func1060->SetParameter(3,-3.62645e-24);
   alpha_func1060->SetParError(3,1.262186e-24);
   alpha_func1060->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1060);
   gre->Draw("p");
   
   Double_t _fx1061[13] = {
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
   Double_t _fy1061[13] = {
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
   Double_t _fex1061[13] = {
   0,
   0,
   0,
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
   Double_t _fey1061[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","",100,550,5950);
   Graph_Graph1061->SetMinimum(0.98);
   Graph_Graph1061->SetMaximum(2.18);
   Graph_Graph1061->SetDirectory(0);
   Graph_Graph1061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1061->SetLineColor(ci);
   Graph_Graph1061->GetXaxis()->SetLabelFont(42);
   Graph_Graph1061->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1061->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1061->GetXaxis()->SetTitleFont(42);
   Graph_Graph1061->GetYaxis()->SetLabelFont(42);
   Graph_Graph1061->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1061->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1061->GetYaxis()->SetTitleFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1061->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1061);
   
   
   TF1 *alpha_func1062 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1062->SetBit(TF1::kNotDraw);
   alpha_func1062->SetFillColor(19);
   alpha_func1062->SetFillStyle(0);
   alpha_func1062->SetLineColor(2);
   alpha_func1062->SetLineWidth(2);
   alpha_func1062->SetChisquare(6.409495e-31);
   alpha_func1062->SetNDF(12);
   alpha_func1062->GetXaxis()->SetLabelFont(42);
   alpha_func1062->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1062->GetXaxis()->SetLabelSize(0.05);
   alpha_func1062->GetXaxis()->SetTitleSize(0.06);
   alpha_func1062->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1062->GetXaxis()->SetTitleFont(42);
   alpha_func1062->GetYaxis()->SetLabelFont(42);
   alpha_func1062->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1062->GetYaxis()->SetLabelSize(0.05);
   alpha_func1062->GetYaxis()->SetTitleSize(0.06);
   alpha_func1062->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1062->GetYaxis()->SetTitleFont(42);
   alpha_func1062->SetParameter(0,1.08);
   alpha_func1062->SetParError(0,6.409876e-17);
   alpha_func1062->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1062);
   gre->Draw("p");
   
   TF1 *alpha_func1063 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1063->SetFillColor(19);
   alpha_func1063->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1063->SetMarkerColor(ci);
   alpha_func1063->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1063->SetLineColor(ci);
   alpha_func1063->SetLineWidth(3);
   alpha_func1063->SetChisquare(6.409495e-31);
   alpha_func1063->SetNDF(12);
   alpha_func1063->GetXaxis()->SetLabelFont(42);
   alpha_func1063->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1063->GetXaxis()->SetLabelSize(0.05);
   alpha_func1063->GetXaxis()->SetTitleSize(0.06);
   alpha_func1063->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1063->GetXaxis()->SetTitleFont(42);
   alpha_func1063->GetYaxis()->SetLabelFont(42);
   alpha_func1063->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1063->GetYaxis()->SetLabelSize(0.05);
   alpha_func1063->GetYaxis()->SetTitleSize(0.06);
   alpha_func1063->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1063->GetYaxis()->SetTitleFont(42);
   alpha_func1063->SetParameter(0,1.08);
   alpha_func1063->SetParError(0,6.409876e-17);
   alpha_func1063->SetParLimits(0,0,0);
   alpha_func1063->Draw("Csame");
   
   TF1 *alpha_func1064 = new TF1("alpha_func","pol3",0,13000);
   alpha_func1064->SetFillColor(19);
   alpha_func1064->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1064->SetMarkerColor(ci);
   alpha_func1064->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   alpha_func1064->SetLineColor(ci);
   alpha_func1064->SetLineWidth(3);
   alpha_func1064->SetLineStyle(9);
   alpha_func1064->SetChisquare(7.956155e-28);
   alpha_func1064->SetNDF(9);
   alpha_func1064->GetXaxis()->SetLabelFont(42);
   alpha_func1064->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1064->GetXaxis()->SetLabelSize(0.05);
   alpha_func1064->GetXaxis()->SetTitleSize(0.06);
   alpha_func1064->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1064->GetXaxis()->SetTitleFont(42);
   alpha_func1064->GetYaxis()->SetLabelFont(42);
   alpha_func1064->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1064->GetYaxis()->SetLabelSize(0.05);
   alpha_func1064->GetYaxis()->SetTitleSize(0.06);
   alpha_func1064->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1064->GetYaxis()->SetTitleFont(42);
   alpha_func1064->SetParameter(0,1.125);
   alpha_func1064->SetParError(0,3.102647e-14);
   alpha_func1064->SetParLimits(0,0,0);
   alpha_func1064->SetParameter(1,-1.083755e-16);
   alpha_func1064->SetParError(1,3.628699e-17);
   alpha_func1064->SetParLimits(1,0,0);
   alpha_func1064->SetParameter(2,3.634859e-20);
   alpha_func1064->SetParError(2,1.231752e-20);
   alpha_func1064->SetParLimits(2,0,0);
   alpha_func1064->SetParameter(3,-3.62645e-24);
   alpha_func1064->SetParError(3,1.262186e-24);
   alpha_func1064->SetParLimits(3,0,0);
   alpha_func1064->Draw("Csame");
   
   Double_t _fx1063[13] = {
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
   Double_t _fy1063[13] = {
   1.583765,
   1.434465,
   1.446557,
   1.442458,
   1.426376,
   1.290033,
   1.276639,
   1.163504,
   1.07751,
   1.237688,
   1.222491,
   1.2648,
   9.082481};
   Double_t _fex1063[13] = {
   0,
   0,
   0,
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
   Double_t _fey1063[13] = {
   0.05064583,
   0.04193962,
   0.03975945,
   0.0460145,
   0.04864132,
   0.03719686,
   0.03835756,
   0.04932116,
   0.04743369,
   0.0501054,
   0.05328341,
   0.07483301,
   0.6156598};
   gre = new TGraphErrors(13,_fx1063,_fy1063,_fex1063,_fey1063);
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
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","",100,550,5950);
   Graph_Graph1063->SetMinimum(0.1632696);
   Graph_Graph1063->SetMaximum(10.56495);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1063->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1063->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1063->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   
   TF1 *alpha_func1064 = new TF1("alpha_func","pol3",1000,5500);
   alpha_func1064->SetBit(TF1::kNotDraw);
   alpha_func1064->SetFillColor(19);
   alpha_func1064->SetFillStyle(0);
   alpha_func1064->SetLineColor(2);
   alpha_func1064->SetLineWidth(2);
   alpha_func1064->SetChisquare(158.8734);
   alpha_func1064->SetNDF(9);
   alpha_func1064->GetXaxis()->SetLabelFont(42);
   alpha_func1064->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1064->GetXaxis()->SetLabelSize(0.05);
   alpha_func1064->GetXaxis()->SetTitleSize(0.06);
   alpha_func1064->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1064->GetXaxis()->SetTitleFont(42);
   alpha_func1064->GetYaxis()->SetLabelFont(42);
   alpha_func1064->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1064->GetYaxis()->SetLabelSize(0.05);
   alpha_func1064->GetYaxis()->SetTitleSize(0.06);
   alpha_func1064->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1064->GetYaxis()->SetTitleFont(42);
   alpha_func1064->SetParameter(0,1.495395);
   alpha_func1064->SetParError(0,0.1847468);
   alpha_func1064->SetParLimits(0,0,0);
   alpha_func1064->SetParameter(1,0.0001707248);
   alpha_func1064->SetParError(1,0.0002316139);
   alpha_func1064->SetParLimits(1,0,0);
   alpha_func1064->SetParameter(2,-1.8201e-07);
   alpha_func1064->SetParError(2,8.699756e-08);
   alpha_func1064->SetParLimits(2,0,0);
   alpha_func1064->SetParameter(3,2.92811e-11);
   alpha_func1064->SetParError(3,9.985272e-12);
   alpha_func1064->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1064);
   gre->Draw("p");
   
   Double_t _fx1065[13] = {
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
   Double_t _fy1065[13] = {
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
   Double_t _fex1065[13] = {
   0,
   0,
   0,
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
   Double_t _fey1065[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1065,_fy1065,_fex1065,_fey1065);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","",100,550,5950);
   Graph_Graph1065->SetMinimum(1.405);
   Graph_Graph1065->SetMaximum(2.605);
   Graph_Graph1065->SetDirectory(0);
   Graph_Graph1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1065->SetLineColor(ci);
   Graph_Graph1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph1065->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1065->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph1065->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1065->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph1065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1065);
   
   
   TF1 *alpha_func1066 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1066->SetBit(TF1::kNotDraw);
   alpha_func1066->SetFillColor(19);
   alpha_func1066->SetFillStyle(0);
   alpha_func1066->SetLineColor(2);
   alpha_func1066->SetLineWidth(2);
   alpha_func1066->SetChisquare(6.409495e-31);
   alpha_func1066->SetNDF(12);
   alpha_func1066->GetXaxis()->SetLabelFont(42);
   alpha_func1066->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1066->GetXaxis()->SetLabelSize(0.05);
   alpha_func1066->GetXaxis()->SetTitleSize(0.06);
   alpha_func1066->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1066->GetXaxis()->SetTitleFont(42);
   alpha_func1066->GetYaxis()->SetLabelFont(42);
   alpha_func1066->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1066->GetYaxis()->SetLabelSize(0.05);
   alpha_func1066->GetYaxis()->SetTitleSize(0.06);
   alpha_func1066->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1066->GetYaxis()->SetTitleFont(42);
   alpha_func1066->SetParameter(0,1.505);
   alpha_func1066->SetParError(0,6.409876e-17);
   alpha_func1066->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1066);
   gre->Draw("p");
   
   TF1 *alpha_func1067 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1067->SetFillColor(19);
   alpha_func1067->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1067->SetMarkerColor(ci);
   alpha_func1067->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1067->SetLineColor(ci);
   alpha_func1067->SetLineWidth(3);
   alpha_func1067->SetChisquare(6.409495e-31);
   alpha_func1067->SetNDF(12);
   alpha_func1067->GetXaxis()->SetLabelFont(42);
   alpha_func1067->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1067->GetXaxis()->SetLabelSize(0.05);
   alpha_func1067->GetXaxis()->SetTitleSize(0.06);
   alpha_func1067->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1067->GetXaxis()->SetTitleFont(42);
   alpha_func1067->GetYaxis()->SetLabelFont(42);
   alpha_func1067->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1067->GetYaxis()->SetLabelSize(0.05);
   alpha_func1067->GetYaxis()->SetTitleSize(0.06);
   alpha_func1067->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1067->GetYaxis()->SetTitleFont(42);
   alpha_func1067->SetParameter(0,1.505);
   alpha_func1067->SetParError(0,6.409876e-17);
   alpha_func1067->SetParLimits(0,0,0);
   alpha_func1067->Draw("Csame");
   
   TF1 *alpha_func1068 = new TF1("alpha_func","pol3",0,13000);
   alpha_func1068->SetFillColor(19);
   alpha_func1068->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1068->SetMarkerColor(ci);
   alpha_func1068->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   alpha_func1068->SetLineColor(ci);
   alpha_func1068->SetLineWidth(3);
   alpha_func1068->SetLineStyle(9);
   alpha_func1068->SetChisquare(158.8734);
   alpha_func1068->SetNDF(9);
   alpha_func1068->GetXaxis()->SetLabelFont(42);
   alpha_func1068->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1068->GetXaxis()->SetLabelSize(0.05);
   alpha_func1068->GetXaxis()->SetTitleSize(0.06);
   alpha_func1068->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1068->GetXaxis()->SetTitleFont(42);
   alpha_func1068->GetYaxis()->SetLabelFont(42);
   alpha_func1068->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1068->GetYaxis()->SetLabelSize(0.05);
   alpha_func1068->GetYaxis()->SetTitleSize(0.06);
   alpha_func1068->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1068->GetYaxis()->SetTitleFont(42);
   alpha_func1068->SetParameter(0,1.495395);
   alpha_func1068->SetParError(0,0.1847468);
   alpha_func1068->SetParLimits(0,0,0);
   alpha_func1068->SetParameter(1,0.0001707248);
   alpha_func1068->SetParError(1,0.0002316139);
   alpha_func1068->SetParLimits(1,0,0);
   alpha_func1068->SetParameter(2,-1.8201e-07);
   alpha_func1068->SetParError(2,8.699756e-08);
   alpha_func1068->SetParLimits(2,0,0);
   alpha_func1068->SetParameter(3,2.92811e-11);
   alpha_func1068->SetParError(3,9.985272e-12);
   alpha_func1068->SetParLimits(3,0,0);
   alpha_func1068->Draw("Csame");
   
   Double_t _fx1067[13] = {
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
   Double_t _fy1067[13] = {
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
   Double_t _fex1067[13] = {
   0,
   0,
   0,
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
   Double_t _fey1067[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1067,_fy1067,_fex1067,_fey1067);
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
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","",100,550,5950);
   Graph_Graph1067->SetMinimum(1.025);
   Graph_Graph1067->SetMaximum(2.225);
   Graph_Graph1067->SetDirectory(0);
   Graph_Graph1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1067->SetLineColor(ci);
   Graph_Graph1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph1067->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1067->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph1067->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1067->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1067->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1067);
   
   
   TF1 *alpha_func1068 = new TF1("alpha_func","pol4",1000,5500);
   alpha_func1068->SetBit(TF1::kNotDraw);
   alpha_func1068->SetFillColor(19);
   alpha_func1068->SetFillStyle(0);
   alpha_func1068->SetLineColor(2);
   alpha_func1068->SetLineWidth(2);
   alpha_func1068->SetChisquare(1.467281e-27);
   alpha_func1068->SetNDF(8);
   alpha_func1068->GetXaxis()->SetLabelFont(42);
   alpha_func1068->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1068->GetXaxis()->SetLabelSize(0.05);
   alpha_func1068->GetXaxis()->SetTitleSize(0.06);
   alpha_func1068->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1068->GetXaxis()->SetTitleFont(42);
   alpha_func1068->GetYaxis()->SetLabelFont(42);
   alpha_func1068->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1068->GetYaxis()->SetLabelSize(0.05);
   alpha_func1068->GetYaxis()->SetTitleSize(0.06);
   alpha_func1068->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1068->GetYaxis()->SetTitleFont(42);
   alpha_func1068->SetParameter(0,1.125);
   alpha_func1068->SetParError(0,1.010526e-13);
   alpha_func1068->SetParLimits(0,0,0);
   alpha_func1068->SetParameter(1,-4.077273e-16);
   alpha_func1068->SetParError(1,1.631386e-16);
   alpha_func1068->SetParLimits(1,0,0);
   alpha_func1068->SetParameter(2,2.057548e-19);
   alpha_func1068->SetParError(2,8.923675e-20);
   alpha_func1068->SetParLimits(2,0,0);
   alpha_func1068->SetParameter(3,-4.192122e-23);
   alpha_func1068->SetParError(3,1.985292e-23);
   alpha_func1068->SetParLimits(3,0,0);
   alpha_func1068->SetParameter(4,2.979754e-27);
   alpha_func1068->SetParError(4,1.538285e-27);
   alpha_func1068->SetParLimits(4,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1068);
   gre->Draw("p");
   
   Double_t _fx1069[13] = {
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
   Double_t _fy1069[13] = {
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
   Double_t _fex1069[13] = {
   0,
   0,
   0,
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
   Double_t _fey1069[13] = {
   0,
   0,
   0,
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
   gre = new TGraphErrors(13,_fx1069,_fy1069,_fex1069,_fey1069);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","",100,550,5950);
   Graph_Graph1069->SetMinimum(0.98);
   Graph_Graph1069->SetMaximum(2.18);
   Graph_Graph1069->SetDirectory(0);
   Graph_Graph1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1069->SetLineColor(ci);
   Graph_Graph1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph1069->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1069->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph1069->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1069->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1069);
   
   
   TF1 *alpha_func1070 = new TF1("alpha_func","pol0",1000,5500);
   alpha_func1070->SetBit(TF1::kNotDraw);
   alpha_func1070->SetFillColor(19);
   alpha_func1070->SetFillStyle(0);
   alpha_func1070->SetLineColor(2);
   alpha_func1070->SetLineWidth(2);
   alpha_func1070->SetChisquare(6.409495e-31);
   alpha_func1070->SetNDF(12);
   alpha_func1070->GetXaxis()->SetLabelFont(42);
   alpha_func1070->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1070->GetXaxis()->SetLabelSize(0.05);
   alpha_func1070->GetXaxis()->SetTitleSize(0.06);
   alpha_func1070->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1070->GetXaxis()->SetTitleFont(42);
   alpha_func1070->GetYaxis()->SetLabelFont(42);
   alpha_func1070->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1070->GetYaxis()->SetLabelSize(0.05);
   alpha_func1070->GetYaxis()->SetTitleSize(0.06);
   alpha_func1070->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1070->GetYaxis()->SetTitleFont(42);
   alpha_func1070->SetParameter(0,1.08);
   alpha_func1070->SetParError(0,6.409876e-17);
   alpha_func1070->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(alpha_func1070);
   gre->Draw("p");
   
   TF1 *alpha_func1071 = new TF1("alpha_func","pol0",0,13000);
   alpha_func1071->SetFillColor(19);
   alpha_func1071->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha_func1071->SetMarkerColor(ci);
   alpha_func1071->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   alpha_func1071->SetLineColor(ci);
   alpha_func1071->SetLineWidth(3);
   alpha_func1071->SetChisquare(6.409495e-31);
   alpha_func1071->SetNDF(12);
   alpha_func1071->GetXaxis()->SetLabelFont(42);
   alpha_func1071->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1071->GetXaxis()->SetLabelSize(0.05);
   alpha_func1071->GetXaxis()->SetTitleSize(0.06);
   alpha_func1071->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1071->GetXaxis()->SetTitleFont(42);
   alpha_func1071->GetYaxis()->SetLabelFont(42);
   alpha_func1071->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1071->GetYaxis()->SetLabelSize(0.05);
   alpha_func1071->GetYaxis()->SetTitleSize(0.06);
   alpha_func1071->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1071->GetYaxis()->SetTitleFont(42);
   alpha_func1071->SetParameter(0,1.08);
   alpha_func1071->SetParError(0,6.409876e-17);
   alpha_func1071->SetParLimits(0,0,0);
   alpha_func1071->Draw("Csame");
   
   TF1 *alpha_func1072 = new TF1("alpha_func","pol4",0,13000);
   alpha_func1072->SetFillColor(19);
   alpha_func1072->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha_func1072->SetMarkerColor(ci);
   alpha_func1072->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   alpha_func1072->SetLineColor(ci);
   alpha_func1072->SetLineWidth(3);
   alpha_func1072->SetLineStyle(9);
   alpha_func1072->SetChisquare(1.467281e-27);
   alpha_func1072->SetNDF(8);
   alpha_func1072->GetXaxis()->SetLabelFont(42);
   alpha_func1072->GetXaxis()->SetLabelOffset(0.007);
   alpha_func1072->GetXaxis()->SetLabelSize(0.05);
   alpha_func1072->GetXaxis()->SetTitleSize(0.06);
   alpha_func1072->GetXaxis()->SetTitleOffset(0.9);
   alpha_func1072->GetXaxis()->SetTitleFont(42);
   alpha_func1072->GetYaxis()->SetLabelFont(42);
   alpha_func1072->GetYaxis()->SetLabelOffset(0.007);
   alpha_func1072->GetYaxis()->SetLabelSize(0.05);
   alpha_func1072->GetYaxis()->SetTitleSize(0.06);
   alpha_func1072->GetYaxis()->SetTitleOffset(1.25);
   alpha_func1072->GetYaxis()->SetTitleFont(42);
   alpha_func1072->SetParameter(0,1.125);
   alpha_func1072->SetParError(0,1.010526e-13);
   alpha_func1072->SetParLimits(0,0,0);
   alpha_func1072->SetParameter(1,-4.077273e-16);
   alpha_func1072->SetParError(1,1.631386e-16);
   alpha_func1072->SetParLimits(1,0,0);
   alpha_func1072->SetParameter(2,2.057548e-19);
   alpha_func1072->SetParError(2,8.923675e-20);
   alpha_func1072->SetParLimits(2,0,0);
   alpha_func1072->SetParameter(3,-4.192122e-23);
   alpha_func1072->SetParError(3,1.985292e-23);
   alpha_func1072->SetParLimits(3,0,0);
   alpha_func1072->SetParameter(4,2.979754e-27);
   alpha_func1072->SetParError(4,1.538285e-27);
   alpha_func1072->SetParLimits(4,0,0);
   alpha_func1072->Draw("Csame");
   
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
