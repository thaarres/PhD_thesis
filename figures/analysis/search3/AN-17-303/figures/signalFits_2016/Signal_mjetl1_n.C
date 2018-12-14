void Signal_mjetl1_n()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:05 2018) by ROOT version6.02/05
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
   
   Double_t _fx1055[12] = {
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
   Double_t _fy1055[12] = {
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
   Double_t _fex1055[12] = {
   0,
   0,
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
   Double_t _fey1055[12] = {
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1055,_fy1055,_fex1055,_fey1055);
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
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,770,5930);
   Graph_Graph1055->SetMinimum(0);
   Graph_Graph1055->SetMaximum(4);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1055->GetXaxis()->SetRange(7,92);
   Graph_Graph1055->GetXaxis()->SetNdivisions(209);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph1055->GetYaxis()->SetNdivisions(504);
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   
   TF1 *pol01056 = new TF1("pol0","pol0",1200,5500);
   pol01056->SetFillColor(19);
   pol01056->SetFillStyle(0);
   pol01056->SetLineColor(2);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(9.466331e-30);
   pol01056->SetNDF(11);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetLabelOffset(0.007);
   pol01056->GetXaxis()->SetLabelSize(0.05);
   pol01056->GetXaxis()->SetTitleSize(0.06);
   pol01056->GetXaxis()->SetTitleOffset(0.9);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetLabelOffset(0.007);
   pol01056->GetYaxis()->SetLabelSize(0.05);
   pol01056->GetYaxis()->SetTitleSize(0.06);
   pol01056->GetYaxis()->SetTitleOffset(1.25);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,2.85);
   pol01056->SetParError(0,2.677959e-16);
   pol01056->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("ap");
   
   Double_t _fx1057[12] = {
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
   Double_t _fy1057[12] = {
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
   Double_t _fex1057[12] = {
   0,
   0,
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
   Double_t _fey1057[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1057,_fy1057,_fex1057,_fey1057);
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
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,770,5930);
   Graph_Graph1057->SetMinimum(1.9);
   Graph_Graph1057->SetMaximum(3.1);
   Graph_Graph1057->SetDirectory(0);
   Graph_Graph1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1057->SetLineColor(ci);
   Graph_Graph1057->GetXaxis()->SetLabelFont(42);
   Graph_Graph1057->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1057->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1057->GetXaxis()->SetTitleFont(42);
   Graph_Graph1057->GetYaxis()->SetLabelFont(42);
   Graph_Graph1057->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1057->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1057->GetYaxis()->SetTitleFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1057->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1057);
   
   
   TF1 *pol01058 = new TF1("pol0","pol0",1200,5500);
   pol01058->SetFillColor(19);
   pol01058->SetFillStyle(0);
   pol01058->SetLineColor(2);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(2.366583e-30);
   pol01058->SetNDF(11);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetLabelOffset(0.007);
   pol01058->GetXaxis()->SetLabelSize(0.05);
   pol01058->GetXaxis()->SetTitleSize(0.06);
   pol01058->GetXaxis()->SetTitleOffset(0.9);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetLabelOffset(0.007);
   pol01058->GetYaxis()->SetLabelSize(0.05);
   pol01058->GetYaxis()->SetTitleSize(0.06);
   pol01058->GetYaxis()->SetTitleOffset(1.25);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,2);
   pol01058->SetParError(0,1.338979e-16);
   pol01058->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("p");
   
   Double_t _fx1059[12] = {
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
   Double_t _fy1059[12] = {
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
   Double_t _fex1059[12] = {
   0,
   0,
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
   Double_t _fey1059[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10551059 = new TH1F("Graph_Graph_Graph10551059","",100,770,5930);
   Graph_Graph_Graph10551059->SetMinimum(0);
   Graph_Graph_Graph10551059->SetMaximum(4);
   Graph_Graph_Graph10551059->SetDirectory(0);
   Graph_Graph_Graph10551059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10551059->SetLineColor(ci);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10551059->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph10551059->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10551059->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10551059->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10551059->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitle("n (GeV)");
   Graph_Graph_Graph10551059->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10551059->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10551059->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10551059->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10551059->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10551059->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10551059->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10551059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10551059);
   
   
   TF1 *pol01060 = new TF1("pol0","pol0",1200,5500);
   pol01060->SetFillColor(19);
   pol01060->SetFillStyle(0);
   pol01060->SetLineColor(2);
   pol01060->SetLineWidth(2);
   pol01060->SetChisquare(9.466331e-30);
   pol01060->SetNDF(11);
   pol01060->GetXaxis()->SetLabelFont(42);
   pol01060->GetXaxis()->SetLabelOffset(0.007);
   pol01060->GetXaxis()->SetLabelSize(0.05);
   pol01060->GetXaxis()->SetTitleSize(0.06);
   pol01060->GetXaxis()->SetTitleOffset(0.9);
   pol01060->GetXaxis()->SetTitleFont(42);
   pol01060->GetYaxis()->SetLabelFont(42);
   pol01060->GetYaxis()->SetLabelOffset(0.007);
   pol01060->GetYaxis()->SetLabelSize(0.05);
   pol01060->GetYaxis()->SetTitleSize(0.06);
   pol01060->GetYaxis()->SetTitleOffset(1.25);
   pol01060->GetYaxis()->SetTitleFont(42);
   pol01060->SetParameter(0,2.85);
   pol01060->SetParError(0,2.677959e-16);
   pol01060->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01060);
   gre->Draw("p");
   
   TF1 *pol01061 = new TF1("pol0","pol0",0,13000);
   pol01061->SetBit(TF1::kNotDraw);
   pol01061->SetFillColor(19);
   pol01061->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01061->SetMarkerColor(ci);
   pol01061->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01061->SetLineColor(ci);
   pol01061->SetLineWidth(3);
   pol01061->SetChisquare(9.466331e-30);
   pol01061->SetNDF(11);
   pol01061->GetXaxis()->SetLabelFont(42);
   pol01061->GetXaxis()->SetLabelOffset(0.007);
   pol01061->GetXaxis()->SetLabelSize(0.05);
   pol01061->GetXaxis()->SetTitleSize(0.06);
   pol01061->GetXaxis()->SetTitleOffset(0.9);
   pol01061->GetXaxis()->SetTitleFont(42);
   pol01061->GetYaxis()->SetLabelFont(42);
   pol01061->GetYaxis()->SetLabelOffset(0.007);
   pol01061->GetYaxis()->SetLabelSize(0.05);
   pol01061->GetYaxis()->SetTitleSize(0.06);
   pol01061->GetYaxis()->SetTitleOffset(1.25);
   pol01061->GetYaxis()->SetTitleFont(42);
   pol01061->SetParameter(0,2.85);
   pol01061->SetParError(0,2.677959e-16);
   pol01061->SetParLimits(0,0,0);
   pol01061->Draw("Csame");
   
   TF1 *pol01062 = new TF1("pol0","pol0",0,13000);
   pol01062->SetBit(TF1::kNotDraw);
   pol01062->SetFillColor(19);
   pol01062->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01062->SetMarkerColor(ci);
   pol01062->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol01062->SetLineColor(ci);
   pol01062->SetLineWidth(3);
   pol01062->SetLineStyle(9);
   pol01062->SetChisquare(2.366583e-30);
   pol01062->SetNDF(11);
   pol01062->GetXaxis()->SetLabelFont(42);
   pol01062->GetXaxis()->SetLabelOffset(0.007);
   pol01062->GetXaxis()->SetLabelSize(0.05);
   pol01062->GetXaxis()->SetTitleSize(0.06);
   pol01062->GetXaxis()->SetTitleOffset(0.9);
   pol01062->GetXaxis()->SetTitleFont(42);
   pol01062->GetYaxis()->SetLabelFont(42);
   pol01062->GetYaxis()->SetLabelOffset(0.007);
   pol01062->GetYaxis()->SetLabelSize(0.05);
   pol01062->GetYaxis()->SetTitleSize(0.06);
   pol01062->GetYaxis()->SetTitleOffset(1.25);
   pol01062->GetYaxis()->SetTitleFont(42);
   pol01062->SetParameter(0,2);
   pol01062->SetParError(0,1.338979e-16);
   pol01062->SetParLimits(0,0,0);
   pol01062->Draw("Csame");
   
   Double_t _fx1061[12] = {
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
   Double_t _fy1061[12] = {
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
   Double_t _fex1061[12] = {
   0,
   0,
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
   Double_t _fey1061[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1061,_fy1061,_fex1061,_fey1061);
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
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","",100,770,5930);
   Graph_Graph1061->SetMinimum(1.9);
   Graph_Graph1061->SetMaximum(3.1);
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
   
   
   TF1 *pol01062 = new TF1("pol0","pol0",1200,5500);
   pol01062->SetFillColor(19);
   pol01062->SetFillStyle(0);
   pol01062->SetLineColor(2);
   pol01062->SetLineWidth(2);
   pol01062->SetChisquare(2.366583e-30);
   pol01062->SetNDF(11);
   pol01062->GetXaxis()->SetLabelFont(42);
   pol01062->GetXaxis()->SetLabelOffset(0.007);
   pol01062->GetXaxis()->SetLabelSize(0.05);
   pol01062->GetXaxis()->SetTitleSize(0.06);
   pol01062->GetXaxis()->SetTitleOffset(0.9);
   pol01062->GetXaxis()->SetTitleFont(42);
   pol01062->GetYaxis()->SetLabelFont(42);
   pol01062->GetYaxis()->SetLabelOffset(0.007);
   pol01062->GetYaxis()->SetLabelSize(0.05);
   pol01062->GetYaxis()->SetTitleSize(0.06);
   pol01062->GetYaxis()->SetTitleOffset(1.25);
   pol01062->GetYaxis()->SetTitleFont(42);
   pol01062->SetParameter(0,2);
   pol01062->SetParError(0,1.338979e-16);
   pol01062->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01062);
   gre->Draw("p");
   
   Double_t _fx1063[12] = {
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
   Double_t _fy1063[12] = {
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
   Double_t _fex1063[12] = {
   0,
   0,
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
   Double_t _fey1063[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1063,_fy1063,_fex1063,_fey1063);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","",100,770,5930);
   Graph_Graph1063->SetMinimum(1.9);
   Graph_Graph1063->SetMaximum(3.1);
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
   
   
   TF1 *pol01064 = new TF1("pol0","pol0",1200,5500);
   pol01064->SetFillColor(19);
   pol01064->SetFillStyle(0);
   pol01064->SetLineColor(2);
   pol01064->SetLineWidth(2);
   pol01064->SetChisquare(2.366583e-30);
   pol01064->SetNDF(11);
   pol01064->GetXaxis()->SetLabelFont(42);
   pol01064->GetXaxis()->SetLabelOffset(0.007);
   pol01064->GetXaxis()->SetLabelSize(0.05);
   pol01064->GetXaxis()->SetTitleSize(0.06);
   pol01064->GetXaxis()->SetTitleOffset(0.9);
   pol01064->GetXaxis()->SetTitleFont(42);
   pol01064->GetYaxis()->SetLabelFont(42);
   pol01064->GetYaxis()->SetLabelOffset(0.007);
   pol01064->GetYaxis()->SetLabelSize(0.05);
   pol01064->GetYaxis()->SetTitleSize(0.06);
   pol01064->GetYaxis()->SetTitleOffset(1.25);
   pol01064->GetYaxis()->SetTitleFont(42);
   pol01064->SetParameter(0,2);
   pol01064->SetParError(0,1.338979e-16);
   pol01064->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01064);
   gre->Draw("p");
   
   TF1 *pol01065 = new TF1("pol0","pol0",0,13000);
   pol01065->SetBit(TF1::kNotDraw);
   pol01065->SetFillColor(19);
   pol01065->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01065->SetMarkerColor(ci);
   pol01065->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01065->SetLineColor(ci);
   pol01065->SetLineWidth(3);
   pol01065->SetChisquare(2.366583e-30);
   pol01065->SetNDF(11);
   pol01065->GetXaxis()->SetLabelFont(42);
   pol01065->GetXaxis()->SetLabelOffset(0.007);
   pol01065->GetXaxis()->SetLabelSize(0.05);
   pol01065->GetXaxis()->SetTitleSize(0.06);
   pol01065->GetXaxis()->SetTitleOffset(0.9);
   pol01065->GetXaxis()->SetTitleFont(42);
   pol01065->GetYaxis()->SetLabelFont(42);
   pol01065->GetYaxis()->SetLabelOffset(0.007);
   pol01065->GetYaxis()->SetLabelSize(0.05);
   pol01065->GetYaxis()->SetTitleSize(0.06);
   pol01065->GetYaxis()->SetTitleOffset(1.25);
   pol01065->GetYaxis()->SetTitleFont(42);
   pol01065->SetParameter(0,2);
   pol01065->SetParError(0,1.338979e-16);
   pol01065->SetParLimits(0,0,0);
   pol01065->Draw("Csame");
   
   TF1 *pol01066 = new TF1("pol0","pol0",0,13000);
   pol01066->SetBit(TF1::kNotDraw);
   pol01066->SetFillColor(19);
   pol01066->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01066->SetMarkerColor(ci);
   pol01066->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol01066->SetLineColor(ci);
   pol01066->SetLineWidth(3);
   pol01066->SetLineStyle(9);
   pol01066->SetChisquare(2.366583e-30);
   pol01066->SetNDF(11);
   pol01066->GetXaxis()->SetLabelFont(42);
   pol01066->GetXaxis()->SetLabelOffset(0.007);
   pol01066->GetXaxis()->SetLabelSize(0.05);
   pol01066->GetXaxis()->SetTitleSize(0.06);
   pol01066->GetXaxis()->SetTitleOffset(0.9);
   pol01066->GetXaxis()->SetTitleFont(42);
   pol01066->GetYaxis()->SetLabelFont(42);
   pol01066->GetYaxis()->SetLabelOffset(0.007);
   pol01066->GetYaxis()->SetLabelSize(0.05);
   pol01066->GetYaxis()->SetTitleSize(0.06);
   pol01066->GetYaxis()->SetTitleOffset(1.25);
   pol01066->GetYaxis()->SetTitleFont(42);
   pol01066->SetParameter(0,2);
   pol01066->SetParError(0,1.338979e-16);
   pol01066->SetParLimits(0,0,0);
   pol01066->Draw("Csame");
   
   Double_t _fx1065[12] = {
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
   Double_t _fy1065[12] = {
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
   Double_t _fex1065[12] = {
   0,
   0,
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
   Double_t _fey1065[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1065,_fy1065,_fex1065,_fey1065);
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
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","",100,770,5930);
   Graph_Graph1065->SetMinimum(1.9);
   Graph_Graph1065->SetMaximum(3.1);
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
   
   
   TF1 *pol01066 = new TF1("pol0","pol0",1200,5500);
   pol01066->SetFillColor(19);
   pol01066->SetFillStyle(0);
   pol01066->SetLineColor(2);
   pol01066->SetLineWidth(2);
   pol01066->SetChisquare(2.366583e-30);
   pol01066->SetNDF(11);
   pol01066->GetXaxis()->SetLabelFont(42);
   pol01066->GetXaxis()->SetLabelOffset(0.007);
   pol01066->GetXaxis()->SetLabelSize(0.05);
   pol01066->GetXaxis()->SetTitleSize(0.06);
   pol01066->GetXaxis()->SetTitleOffset(0.9);
   pol01066->GetXaxis()->SetTitleFont(42);
   pol01066->GetYaxis()->SetLabelFont(42);
   pol01066->GetYaxis()->SetLabelOffset(0.007);
   pol01066->GetYaxis()->SetLabelSize(0.05);
   pol01066->GetYaxis()->SetTitleSize(0.06);
   pol01066->GetYaxis()->SetTitleOffset(1.25);
   pol01066->GetYaxis()->SetTitleFont(42);
   pol01066->SetParameter(0,2);
   pol01066->SetParError(0,1.338979e-16);
   pol01066->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01066);
   gre->Draw("p");
   
   Double_t _fx1067[12] = {
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
   Double_t _fy1067[12] = {
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
   Double_t _fex1067[12] = {
   0,
   0,
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
   Double_t _fey1067[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1067,_fy1067,_fex1067,_fey1067);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","",100,770,5930);
   Graph_Graph1067->SetMinimum(1.9);
   Graph_Graph1067->SetMaximum(3.1);
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
   
   
   TF1 *pol01068 = new TF1("pol0","pol0",1200,5500);
   pol01068->SetFillColor(19);
   pol01068->SetFillStyle(0);
   pol01068->SetLineColor(2);
   pol01068->SetLineWidth(2);
   pol01068->SetChisquare(2.366583e-30);
   pol01068->SetNDF(11);
   pol01068->GetXaxis()->SetLabelFont(42);
   pol01068->GetXaxis()->SetLabelOffset(0.007);
   pol01068->GetXaxis()->SetLabelSize(0.05);
   pol01068->GetXaxis()->SetTitleSize(0.06);
   pol01068->GetXaxis()->SetTitleOffset(0.9);
   pol01068->GetXaxis()->SetTitleFont(42);
   pol01068->GetYaxis()->SetLabelFont(42);
   pol01068->GetYaxis()->SetLabelOffset(0.007);
   pol01068->GetYaxis()->SetLabelSize(0.05);
   pol01068->GetYaxis()->SetTitleSize(0.06);
   pol01068->GetYaxis()->SetTitleOffset(1.25);
   pol01068->GetYaxis()->SetTitleFont(42);
   pol01068->SetParameter(0,2);
   pol01068->SetParError(0,1.338979e-16);
   pol01068->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01068);
   gre->Draw("p");
   
   TF1 *pol01069 = new TF1("pol0","pol0",0,13000);
   pol01069->SetBit(TF1::kNotDraw);
   pol01069->SetFillColor(19);
   pol01069->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01069->SetMarkerColor(ci);
   pol01069->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01069->SetLineColor(ci);
   pol01069->SetLineWidth(3);
   pol01069->SetChisquare(2.366583e-30);
   pol01069->SetNDF(11);
   pol01069->GetXaxis()->SetLabelFont(42);
   pol01069->GetXaxis()->SetLabelOffset(0.007);
   pol01069->GetXaxis()->SetLabelSize(0.05);
   pol01069->GetXaxis()->SetTitleSize(0.06);
   pol01069->GetXaxis()->SetTitleOffset(0.9);
   pol01069->GetXaxis()->SetTitleFont(42);
   pol01069->GetYaxis()->SetLabelFont(42);
   pol01069->GetYaxis()->SetLabelOffset(0.007);
   pol01069->GetYaxis()->SetLabelSize(0.05);
   pol01069->GetYaxis()->SetTitleSize(0.06);
   pol01069->GetYaxis()->SetTitleOffset(1.25);
   pol01069->GetYaxis()->SetTitleFont(42);
   pol01069->SetParameter(0,2);
   pol01069->SetParError(0,1.338979e-16);
   pol01069->SetParLimits(0,0,0);
   pol01069->Draw("Csame");
   
   TF1 *pol01070 = new TF1("pol0","pol0",0,13000);
   pol01070->SetBit(TF1::kNotDraw);
   pol01070->SetFillColor(19);
   pol01070->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01070->SetMarkerColor(ci);
   pol01070->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol01070->SetLineColor(ci);
   pol01070->SetLineWidth(3);
   pol01070->SetLineStyle(9);
   pol01070->SetChisquare(2.366583e-30);
   pol01070->SetNDF(11);
   pol01070->GetXaxis()->SetLabelFont(42);
   pol01070->GetXaxis()->SetLabelOffset(0.007);
   pol01070->GetXaxis()->SetLabelSize(0.05);
   pol01070->GetXaxis()->SetTitleSize(0.06);
   pol01070->GetXaxis()->SetTitleOffset(0.9);
   pol01070->GetXaxis()->SetTitleFont(42);
   pol01070->GetYaxis()->SetLabelFont(42);
   pol01070->GetYaxis()->SetLabelOffset(0.007);
   pol01070->GetYaxis()->SetLabelSize(0.05);
   pol01070->GetYaxis()->SetTitleSize(0.06);
   pol01070->GetYaxis()->SetTitleOffset(1.25);
   pol01070->GetYaxis()->SetTitleFont(42);
   pol01070->SetParameter(0,2);
   pol01070->SetParError(0,1.338979e-16);
   pol01070->SetParLimits(0,0,0);
   pol01070->Draw("Csame");
   
   Double_t _fx1069[12] = {
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
   Double_t _fy1069[12] = {
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
   Double_t _fex1069[12] = {
   0,
   0,
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
   Double_t _fey1069[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1069,_fy1069,_fex1069,_fey1069);
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
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","",100,770,5930);
   Graph_Graph1069->SetMinimum(1.9);
   Graph_Graph1069->SetMaximum(3.1);
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
   
   
   TF1 *pol01070 = new TF1("pol0","pol0",1200,5500);
   pol01070->SetFillColor(19);
   pol01070->SetFillStyle(0);
   pol01070->SetLineColor(2);
   pol01070->SetLineWidth(2);
   pol01070->SetChisquare(2.366583e-30);
   pol01070->SetNDF(11);
   pol01070->GetXaxis()->SetLabelFont(42);
   pol01070->GetXaxis()->SetLabelOffset(0.007);
   pol01070->GetXaxis()->SetLabelSize(0.05);
   pol01070->GetXaxis()->SetTitleSize(0.06);
   pol01070->GetXaxis()->SetTitleOffset(0.9);
   pol01070->GetXaxis()->SetTitleFont(42);
   pol01070->GetYaxis()->SetLabelFont(42);
   pol01070->GetYaxis()->SetLabelOffset(0.007);
   pol01070->GetYaxis()->SetLabelSize(0.05);
   pol01070->GetYaxis()->SetTitleSize(0.06);
   pol01070->GetYaxis()->SetTitleOffset(1.25);
   pol01070->GetYaxis()->SetTitleFont(42);
   pol01070->SetParameter(0,2);
   pol01070->SetParError(0,1.338979e-16);
   pol01070->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01070);
   gre->Draw("p");
   
   Double_t _fx1071[12] = {
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
   Double_t _fy1071[12] = {
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
   Double_t _fex1071[12] = {
   0,
   0,
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
   Double_t _fey1071[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1071,_fy1071,_fex1071,_fey1071);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1071 = new TH1F("Graph_Graph1071","",100,770,5930);
   Graph_Graph1071->SetMinimum(1.9);
   Graph_Graph1071->SetMaximum(3.1);
   Graph_Graph1071->SetDirectory(0);
   Graph_Graph1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1071->SetLineColor(ci);
   Graph_Graph1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph1071->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph1071->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1071);
   
   
   TF1 *pol01072 = new TF1("pol0","pol0",1200,5500);
   pol01072->SetFillColor(19);
   pol01072->SetFillStyle(0);
   pol01072->SetLineColor(2);
   pol01072->SetLineWidth(2);
   pol01072->SetChisquare(2.366583e-30);
   pol01072->SetNDF(11);
   pol01072->GetXaxis()->SetLabelFont(42);
   pol01072->GetXaxis()->SetLabelOffset(0.007);
   pol01072->GetXaxis()->SetLabelSize(0.05);
   pol01072->GetXaxis()->SetTitleSize(0.06);
   pol01072->GetXaxis()->SetTitleOffset(0.9);
   pol01072->GetXaxis()->SetTitleFont(42);
   pol01072->GetYaxis()->SetLabelFont(42);
   pol01072->GetYaxis()->SetLabelOffset(0.007);
   pol01072->GetYaxis()->SetLabelSize(0.05);
   pol01072->GetYaxis()->SetTitleSize(0.06);
   pol01072->GetYaxis()->SetTitleOffset(1.25);
   pol01072->GetYaxis()->SetTitleFont(42);
   pol01072->SetParameter(0,2);
   pol01072->SetParError(0,1.338979e-16);
   pol01072->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01072);
   gre->Draw("p");
   
   TF1 *pol01073 = new TF1("pol0","pol0",0,13000);
   pol01073->SetBit(TF1::kNotDraw);
   pol01073->SetFillColor(19);
   pol01073->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01073->SetMarkerColor(ci);
   pol01073->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01073->SetLineColor(ci);
   pol01073->SetLineWidth(3);
   pol01073->SetChisquare(2.366583e-30);
   pol01073->SetNDF(11);
   pol01073->GetXaxis()->SetLabelFont(42);
   pol01073->GetXaxis()->SetLabelOffset(0.007);
   pol01073->GetXaxis()->SetLabelSize(0.05);
   pol01073->GetXaxis()->SetTitleSize(0.06);
   pol01073->GetXaxis()->SetTitleOffset(0.9);
   pol01073->GetXaxis()->SetTitleFont(42);
   pol01073->GetYaxis()->SetLabelFont(42);
   pol01073->GetYaxis()->SetLabelOffset(0.007);
   pol01073->GetYaxis()->SetLabelSize(0.05);
   pol01073->GetYaxis()->SetTitleSize(0.06);
   pol01073->GetYaxis()->SetTitleOffset(1.25);
   pol01073->GetYaxis()->SetTitleFont(42);
   pol01073->SetParameter(0,2);
   pol01073->SetParError(0,1.338979e-16);
   pol01073->SetParLimits(0,0,0);
   pol01073->Draw("Csame");
   
   TF1 *pol01074 = new TF1("pol0","pol0",0,13000);
   pol01074->SetBit(TF1::kNotDraw);
   pol01074->SetFillColor(19);
   pol01074->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01074->SetMarkerColor(ci);
   pol01074->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol01074->SetLineColor(ci);
   pol01074->SetLineWidth(3);
   pol01074->SetLineStyle(9);
   pol01074->SetChisquare(2.366583e-30);
   pol01074->SetNDF(11);
   pol01074->GetXaxis()->SetLabelFont(42);
   pol01074->GetXaxis()->SetLabelOffset(0.007);
   pol01074->GetXaxis()->SetLabelSize(0.05);
   pol01074->GetXaxis()->SetTitleSize(0.06);
   pol01074->GetXaxis()->SetTitleOffset(0.9);
   pol01074->GetXaxis()->SetTitleFont(42);
   pol01074->GetYaxis()->SetLabelFont(42);
   pol01074->GetYaxis()->SetLabelOffset(0.007);
   pol01074->GetYaxis()->SetLabelSize(0.05);
   pol01074->GetYaxis()->SetTitleSize(0.06);
   pol01074->GetYaxis()->SetTitleOffset(1.25);
   pol01074->GetYaxis()->SetTitleFont(42);
   pol01074->SetParameter(0,2);
   pol01074->SetParError(0,1.338979e-16);
   pol01074->SetParLimits(0,0,0);
   pol01074->Draw("Csame");
   
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
