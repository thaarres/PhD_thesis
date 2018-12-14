void Signal_mjetl2_alpha()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:19 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(445.6571,-0.927835,5728.514,5.515464);
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
   
   Double_t _fx1145[12] = {
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
   Double_t _fy1145[12] = {
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
   Double_t _fex1145[12] = {
   0,
   0,
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
   Double_t _fey1145[12] = {
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1145,_fy1145,_fex1145,_fey1145);
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
   
   TH1F *Graph_Graph1145 = new TH1F("Graph_Graph1145","",100,770,5930);
   Graph_Graph1145->SetMinimum(0);
   Graph_Graph1145->SetMaximum(5);
   Graph_Graph1145->SetDirectory(0);
   Graph_Graph1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1145->SetLineColor(ci);
   Graph_Graph1145->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1145->GetXaxis()->SetRange(7,92);
   Graph_Graph1145->GetXaxis()->SetNdivisions(209);
   Graph_Graph1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph1145->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph1145->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph1145->GetYaxis()->SetNdivisions(504);
   Graph_Graph1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph1145->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1145);
   
   
   TF1 *pol01146 = new TF1("pol0","pol0",1200,5500);
   pol01146->SetFillColor(19);
   pol01146->SetFillStyle(0);
   pol01146->SetLineColor(2);
   pol01146->SetLineWidth(2);
   pol01146->SetChisquare(5.916457e-31);
   pol01146->SetNDF(11);
   pol01146->GetXaxis()->SetLabelFont(42);
   pol01146->GetXaxis()->SetLabelOffset(0.007);
   pol01146->GetXaxis()->SetLabelSize(0.05);
   pol01146->GetXaxis()->SetTitleSize(0.06);
   pol01146->GetXaxis()->SetTitleOffset(0.9);
   pol01146->GetXaxis()->SetTitleFont(42);
   pol01146->GetYaxis()->SetLabelFont(42);
   pol01146->GetYaxis()->SetLabelOffset(0.007);
   pol01146->GetYaxis()->SetLabelSize(0.05);
   pol01146->GetYaxis()->SetTitleSize(0.06);
   pol01146->GetYaxis()->SetTitleOffset(1.25);
   pol01146->GetYaxis()->SetTitleFont(42);
   pol01146->SetParameter(0,1.083);
   pol01146->SetParError(0,6.694897e-17);
   pol01146->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01146);
   gre->Draw("ap");
   
   Double_t _fx1147[12] = {
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
   Double_t _fy1147[12] = {
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
   Double_t _fex1147[12] = {
   0,
   0,
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
   Double_t _fey1147[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1147,_fy1147,_fex1147,_fey1147);
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
   
   TH1F *Graph_Graph1147 = new TH1F("Graph_Graph1147","",100,770,5930);
   Graph_Graph1147->SetMinimum(1.025);
   Graph_Graph1147->SetMaximum(2.225);
   Graph_Graph1147->SetDirectory(0);
   Graph_Graph1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1147->SetLineColor(ci);
   Graph_Graph1147->GetXaxis()->SetLabelFont(42);
   Graph_Graph1147->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1147->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1147->GetXaxis()->SetTitleFont(42);
   Graph_Graph1147->GetYaxis()->SetLabelFont(42);
   Graph_Graph1147->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1147->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1147->GetYaxis()->SetTitleFont(42);
   Graph_Graph1147->GetZaxis()->SetLabelFont(42);
   Graph_Graph1147->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1147->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1147);
   
   
   TF1 *pol31148 = new TF1("pol3","pol3",1200,5500);
   pol31148->SetFillColor(19);
   pol31148->SetFillStyle(0);
   pol31148->SetLineColor(2);
   pol31148->SetLineWidth(2);
   pol31148->GetXaxis()->SetLabelFont(42);
   pol31148->GetXaxis()->SetLabelOffset(0.007);
   pol31148->GetXaxis()->SetLabelSize(0.05);
   pol31148->GetXaxis()->SetTitleSize(0.06);
   pol31148->GetXaxis()->SetTitleOffset(0.9);
   pol31148->GetXaxis()->SetTitleFont(42);
   pol31148->GetYaxis()->SetLabelFont(42);
   pol31148->GetYaxis()->SetLabelOffset(0.007);
   pol31148->GetYaxis()->SetLabelSize(0.05);
   pol31148->GetYaxis()->SetTitleSize(0.06);
   pol31148->GetYaxis()->SetTitleOffset(1.25);
   pol31148->GetYaxis()->SetTitleFont(42);
   pol31148->SetParameter(0,1.125);
   pol31148->SetParError(0,4.520469);
   pol31148->SetParLimits(0,0,0);
   pol31148->SetParameter(1,0);
   pol31148->SetParError(1,0.004968687);
   pol31148->SetParLimits(1,0,0);
   pol31148->SetParameter(2,0);
   pol31148->SetParError(2,1.614427e-06);
   pol31148->SetParLimits(2,0,0);
   pol31148->SetParameter(3,0);
   pol31148->SetParError(3,1.602031e-10);
   pol31148->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31148);
   gre->Draw("p");
   
   Double_t _fx1149[12] = {
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
   Double_t _fy1149[12] = {
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
   Double_t _fex1149[12] = {
   0,
   0,
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
   Double_t _fey1149[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1149,_fy1149,_fex1149,_fey1149);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph11451149 = new TH1F("Graph_Graph_Graph11451149","",100,770,5930);
   Graph_Graph_Graph11451149->SetMinimum(0);
   Graph_Graph_Graph11451149->SetMaximum(5);
   Graph_Graph_Graph11451149->SetDirectory(0);
   Graph_Graph_Graph11451149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11451149->SetLineColor(ci);
   Graph_Graph_Graph11451149->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph11451149->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph11451149->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph11451149->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11451149->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11451149->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11451149->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph11451149->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11451149->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph_Graph11451149->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph11451149->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11451149->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11451149->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11451149->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph11451149->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11451149->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11451149->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11451149->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11451149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11451149);
   
   
   TF1 *pol01150 = new TF1("pol0","pol0",1200,5500);
   pol01150->SetFillColor(19);
   pol01150->SetFillStyle(0);
   pol01150->SetLineColor(2);
   pol01150->SetLineWidth(2);
   pol01150->SetChisquare(5.916457e-31);
   pol01150->SetNDF(11);
   pol01150->GetXaxis()->SetLabelFont(42);
   pol01150->GetXaxis()->SetLabelOffset(0.007);
   pol01150->GetXaxis()->SetLabelSize(0.05);
   pol01150->GetXaxis()->SetTitleSize(0.06);
   pol01150->GetXaxis()->SetTitleOffset(0.9);
   pol01150->GetXaxis()->SetTitleFont(42);
   pol01150->GetYaxis()->SetLabelFont(42);
   pol01150->GetYaxis()->SetLabelOffset(0.007);
   pol01150->GetYaxis()->SetLabelSize(0.05);
   pol01150->GetYaxis()->SetTitleSize(0.06);
   pol01150->GetYaxis()->SetTitleOffset(1.25);
   pol01150->GetYaxis()->SetTitleFont(42);
   pol01150->SetParameter(0,1.083);
   pol01150->SetParError(0,6.694897e-17);
   pol01150->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01150);
   gre->Draw("p");
   
   TF1 *pol01151 = new TF1("pol0","pol0",0,13000);
   pol01151->SetBit(TF1::kNotDraw);
   pol01151->SetFillColor(19);
   pol01151->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01151->SetMarkerColor(ci);
   pol01151->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01151->SetLineColor(ci);
   pol01151->SetLineWidth(3);
   pol01151->SetChisquare(5.916457e-31);
   pol01151->SetNDF(11);
   pol01151->GetXaxis()->SetLabelFont(42);
   pol01151->GetXaxis()->SetLabelOffset(0.007);
   pol01151->GetXaxis()->SetLabelSize(0.05);
   pol01151->GetXaxis()->SetTitleSize(0.06);
   pol01151->GetXaxis()->SetTitleOffset(0.9);
   pol01151->GetXaxis()->SetTitleFont(42);
   pol01151->GetYaxis()->SetLabelFont(42);
   pol01151->GetYaxis()->SetLabelOffset(0.007);
   pol01151->GetYaxis()->SetLabelSize(0.05);
   pol01151->GetYaxis()->SetTitleSize(0.06);
   pol01151->GetYaxis()->SetTitleOffset(1.25);
   pol01151->GetYaxis()->SetTitleFont(42);
   pol01151->SetParameter(0,1.083);
   pol01151->SetParError(0,6.694897e-17);
   pol01151->SetParLimits(0,0,0);
   pol01151->Draw("Csame");
   
   TF1 *pol31152 = new TF1("pol3","pol3",0,13000);
   pol31152->SetBit(TF1::kNotDraw);
   pol31152->SetFillColor(19);
   pol31152->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol31152->SetMarkerColor(ci);
   pol31152->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol31152->SetLineColor(ci);
   pol31152->SetLineWidth(3);
   pol31152->SetLineStyle(9);
   pol31152->GetXaxis()->SetLabelFont(42);
   pol31152->GetXaxis()->SetLabelOffset(0.007);
   pol31152->GetXaxis()->SetLabelSize(0.05);
   pol31152->GetXaxis()->SetTitleSize(0.06);
   pol31152->GetXaxis()->SetTitleOffset(0.9);
   pol31152->GetXaxis()->SetTitleFont(42);
   pol31152->GetYaxis()->SetLabelFont(42);
   pol31152->GetYaxis()->SetLabelOffset(0.007);
   pol31152->GetYaxis()->SetLabelSize(0.05);
   pol31152->GetYaxis()->SetTitleSize(0.06);
   pol31152->GetYaxis()->SetTitleOffset(1.25);
   pol31152->GetYaxis()->SetTitleFont(42);
   pol31152->SetParameter(0,1.125);
   pol31152->SetParError(0,4.520469);
   pol31152->SetParLimits(0,0,0);
   pol31152->SetParameter(1,0);
   pol31152->SetParError(1,0.004968687);
   pol31152->SetParLimits(1,0,0);
   pol31152->SetParameter(2,0);
   pol31152->SetParError(2,1.614427e-06);
   pol31152->SetParLimits(2,0,0);
   pol31152->SetParameter(3,0);
   pol31152->SetParError(3,1.602031e-10);
   pol31152->SetParLimits(3,0,0);
   pol31152->Draw("Csame");
   
   Double_t _fx1151[12] = {
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
   Double_t _fy1151[12] = {
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
   Double_t _fex1151[12] = {
   0,
   0,
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
   Double_t _fey1151[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1151,_fy1151,_fex1151,_fey1151);
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
   
   TH1F *Graph_Graph1151 = new TH1F("Graph_Graph1151","",100,770,5930);
   Graph_Graph1151->SetMinimum(1.025);
   Graph_Graph1151->SetMaximum(2.225);
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
   
   
   TF1 *pol31152 = new TF1("pol3","pol3",1200,5500);
   pol31152->SetFillColor(19);
   pol31152->SetFillStyle(0);
   pol31152->SetLineColor(2);
   pol31152->SetLineWidth(2);
   pol31152->GetXaxis()->SetLabelFont(42);
   pol31152->GetXaxis()->SetLabelOffset(0.007);
   pol31152->GetXaxis()->SetLabelSize(0.05);
   pol31152->GetXaxis()->SetTitleSize(0.06);
   pol31152->GetXaxis()->SetTitleOffset(0.9);
   pol31152->GetXaxis()->SetTitleFont(42);
   pol31152->GetYaxis()->SetLabelFont(42);
   pol31152->GetYaxis()->SetLabelOffset(0.007);
   pol31152->GetYaxis()->SetLabelSize(0.05);
   pol31152->GetYaxis()->SetTitleSize(0.06);
   pol31152->GetYaxis()->SetTitleOffset(1.25);
   pol31152->GetYaxis()->SetTitleFont(42);
   pol31152->SetParameter(0,1.125);
   pol31152->SetParError(0,4.520469);
   pol31152->SetParLimits(0,0,0);
   pol31152->SetParameter(1,0);
   pol31152->SetParError(1,0.004968687);
   pol31152->SetParLimits(1,0,0);
   pol31152->SetParameter(2,0);
   pol31152->SetParError(2,1.614427e-06);
   pol31152->SetParLimits(2,0,0);
   pol31152->SetParameter(3,0);
   pol31152->SetParError(3,1.602031e-10);
   pol31152->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31152);
   gre->Draw("p");
   
   Double_t _fx1153[12] = {
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
   Double_t _fy1153[12] = {
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
   Double_t _fex1153[12] = {
   0,
   0,
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
   Double_t _fey1153[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1153,_fy1153,_fex1153,_fey1153);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1153 = new TH1F("Graph_Graph1153","",100,770,5930);
   Graph_Graph1153->SetMinimum(0.98);
   Graph_Graph1153->SetMaximum(2.18);
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
   
   
   TF1 *pol01154 = new TF1("pol0","pol0",1200,5500);
   pol01154->SetFillColor(19);
   pol01154->SetFillStyle(0);
   pol01154->SetLineColor(2);
   pol01154->SetLineWidth(2);
   pol01154->GetXaxis()->SetLabelFont(42);
   pol01154->GetXaxis()->SetLabelOffset(0.007);
   pol01154->GetXaxis()->SetLabelSize(0.05);
   pol01154->GetXaxis()->SetTitleSize(0.06);
   pol01154->GetXaxis()->SetTitleOffset(0.9);
   pol01154->GetXaxis()->SetTitleFont(42);
   pol01154->GetYaxis()->SetLabelFont(42);
   pol01154->GetYaxis()->SetLabelOffset(0.007);
   pol01154->GetYaxis()->SetLabelSize(0.05);
   pol01154->GetYaxis()->SetTitleSize(0.06);
   pol01154->GetYaxis()->SetTitleOffset(1.25);
   pol01154->GetYaxis()->SetTitleFont(42);
   pol01154->SetParameter(0,1.08);
   pol01154->SetParError(0,0.2886751);
   pol01154->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01154);
   gre->Draw("p");
   
   TF1 *pol01155 = new TF1("pol0","pol0",0,13000);
   pol01155->SetBit(TF1::kNotDraw);
   pol01155->SetFillColor(19);
   pol01155->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01155->SetMarkerColor(ci);
   pol01155->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01155->SetLineColor(ci);
   pol01155->SetLineWidth(3);
   pol01155->GetXaxis()->SetLabelFont(42);
   pol01155->GetXaxis()->SetLabelOffset(0.007);
   pol01155->GetXaxis()->SetLabelSize(0.05);
   pol01155->GetXaxis()->SetTitleSize(0.06);
   pol01155->GetXaxis()->SetTitleOffset(0.9);
   pol01155->GetXaxis()->SetTitleFont(42);
   pol01155->GetYaxis()->SetLabelFont(42);
   pol01155->GetYaxis()->SetLabelOffset(0.007);
   pol01155->GetYaxis()->SetLabelSize(0.05);
   pol01155->GetYaxis()->SetTitleSize(0.06);
   pol01155->GetYaxis()->SetTitleOffset(1.25);
   pol01155->GetYaxis()->SetTitleFont(42);
   pol01155->SetParameter(0,1.08);
   pol01155->SetParError(0,0.2886751);
   pol01155->SetParLimits(0,0,0);
   pol01155->Draw("Csame");
   
   TF1 *pol31156 = new TF1("pol3","pol3",0,13000);
   pol31156->SetBit(TF1::kNotDraw);
   pol31156->SetFillColor(19);
   pol31156->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol31156->SetMarkerColor(ci);
   pol31156->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol31156->SetLineColor(ci);
   pol31156->SetLineWidth(3);
   pol31156->SetLineStyle(9);
   pol31156->GetXaxis()->SetLabelFont(42);
   pol31156->GetXaxis()->SetLabelOffset(0.007);
   pol31156->GetXaxis()->SetLabelSize(0.05);
   pol31156->GetXaxis()->SetTitleSize(0.06);
   pol31156->GetXaxis()->SetTitleOffset(0.9);
   pol31156->GetXaxis()->SetTitleFont(42);
   pol31156->GetYaxis()->SetLabelFont(42);
   pol31156->GetYaxis()->SetLabelOffset(0.007);
   pol31156->GetYaxis()->SetLabelSize(0.05);
   pol31156->GetYaxis()->SetTitleSize(0.06);
   pol31156->GetYaxis()->SetTitleOffset(1.25);
   pol31156->GetYaxis()->SetTitleFont(42);
   pol31156->SetParameter(0,1.125);
   pol31156->SetParError(0,4.520469);
   pol31156->SetParLimits(0,0,0);
   pol31156->SetParameter(1,0);
   pol31156->SetParError(1,0.004968687);
   pol31156->SetParLimits(1,0,0);
   pol31156->SetParameter(2,0);
   pol31156->SetParError(2,1.614427e-06);
   pol31156->SetParLimits(2,0,0);
   pol31156->SetParameter(3,0);
   pol31156->SetParError(3,1.602031e-10);
   pol31156->SetParLimits(3,0,0);
   pol31156->Draw("Csame");
   
   Double_t _fx1155[12] = {
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
   Double_t _fy1155[12] = {
   1.485255,
   1.503872,
   1.468858,
   1.440432,
   1.45688,
   1.424846,
   1.367071,
   1.355476,
   1.320941,
   1.536139,
   1.259621,
   1.470553};
   Double_t _fex1155[12] = {
   0,
   0,
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
   Double_t _fey1155[12] = {
   0.04989697,
   0.04868831,
   0.04417183,
   0.0473516,
   0.04755045,
   0.03823027,
   0.0375538,
   0.0377868,
   0.0416419,
   0.05376557,
   0.04861307,
   0.06715921};
   gre = new TGraphErrors(12,_fx1155,_fy1155,_fex1155,_fey1155);
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
   
   TH1F *Graph_Graph1155 = new TH1F("Graph_Graph1155","",100,770,5930);
   Graph_Graph1155->SetMinimum(1.173118);
   Graph_Graph1155->SetMaximum(1.627795);
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
   
   
   TF1 *pol31156 = new TF1("pol3","pol3",1200,5500);
   pol31156->SetFillColor(19);
   pol31156->SetFillStyle(0);
   pol31156->SetLineColor(2);
   pol31156->SetLineWidth(2);
   pol31156->SetChisquare(18.96993);
   pol31156->SetNDF(8);
   pol31156->GetXaxis()->SetLabelFont(42);
   pol31156->GetXaxis()->SetLabelOffset(0.007);
   pol31156->GetXaxis()->SetLabelSize(0.05);
   pol31156->GetXaxis()->SetTitleSize(0.06);
   pol31156->GetXaxis()->SetTitleOffset(0.9);
   pol31156->GetXaxis()->SetTitleFont(42);
   pol31156->GetYaxis()->SetLabelFont(42);
   pol31156->GetYaxis()->SetLabelOffset(0.007);
   pol31156->GetYaxis()->SetLabelSize(0.05);
   pol31156->GetYaxis()->SetTitleSize(0.06);
   pol31156->GetYaxis()->SetTitleOffset(1.25);
   pol31156->GetYaxis()->SetTitleFont(42);
   pol31156->SetParameter(0,1.572523);
   pol31156->SetParError(0,0.2165111);
   pol31156->SetParLimits(0,0,0);
   pol31156->SetParameter(1,-4.766866e-05);
   pol31156->SetParError(1,0.0002389693);
   pol31156->SetParLimits(1,0,0);
   pol31156->SetParameter(2,-1.54634e-08);
   pol31156->SetParError(2,7.893959e-08);
   pol31156->SetParLimits(2,0,0);
   pol31156->SetParameter(3,3.42935e-12);
   pol31156->SetParError(3,7.995073e-12);
   pol31156->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31156);
   gre->Draw("p");
   
   Double_t _fx1157[12] = {
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
   Double_t _fy1157[12] = {
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
   Double_t _fex1157[12] = {
   0,
   0,
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
   Double_t _fey1157[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1157,_fy1157,_fex1157,_fey1157);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1157 = new TH1F("Graph_Graph1157","",100,770,5930);
   Graph_Graph1157->SetMinimum(1.405);
   Graph_Graph1157->SetMaximum(2.605);
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
   
   
   TF1 *pol01158 = new TF1("pol0","pol0",1200,5500);
   pol01158->SetFillColor(19);
   pol01158->SetFillStyle(0);
   pol01158->SetLineColor(2);
   pol01158->SetLineWidth(2);
   pol01158->GetXaxis()->SetLabelFont(42);
   pol01158->GetXaxis()->SetLabelOffset(0.007);
   pol01158->GetXaxis()->SetLabelSize(0.05);
   pol01158->GetXaxis()->SetTitleSize(0.06);
   pol01158->GetXaxis()->SetTitleOffset(0.9);
   pol01158->GetXaxis()->SetTitleFont(42);
   pol01158->GetYaxis()->SetLabelFont(42);
   pol01158->GetYaxis()->SetLabelOffset(0.007);
   pol01158->GetYaxis()->SetLabelSize(0.05);
   pol01158->GetYaxis()->SetTitleSize(0.06);
   pol01158->GetYaxis()->SetTitleOffset(1.25);
   pol01158->GetYaxis()->SetTitleFont(42);
   pol01158->SetParameter(0,1.505);
   pol01158->SetParError(0,0.2886751);
   pol01158->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01158);
   gre->Draw("p");
   
   TF1 *pol01159 = new TF1("pol0","pol0",0,13000);
   pol01159->SetBit(TF1::kNotDraw);
   pol01159->SetFillColor(19);
   pol01159->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01159->SetMarkerColor(ci);
   pol01159->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01159->SetLineColor(ci);
   pol01159->SetLineWidth(3);
   pol01159->GetXaxis()->SetLabelFont(42);
   pol01159->GetXaxis()->SetLabelOffset(0.007);
   pol01159->GetXaxis()->SetLabelSize(0.05);
   pol01159->GetXaxis()->SetTitleSize(0.06);
   pol01159->GetXaxis()->SetTitleOffset(0.9);
   pol01159->GetXaxis()->SetTitleFont(42);
   pol01159->GetYaxis()->SetLabelFont(42);
   pol01159->GetYaxis()->SetLabelOffset(0.007);
   pol01159->GetYaxis()->SetLabelSize(0.05);
   pol01159->GetYaxis()->SetTitleSize(0.06);
   pol01159->GetYaxis()->SetTitleOffset(1.25);
   pol01159->GetYaxis()->SetTitleFont(42);
   pol01159->SetParameter(0,1.505);
   pol01159->SetParError(0,0.2886751);
   pol01159->SetParLimits(0,0,0);
   pol01159->Draw("Csame");
   
   TF1 *pol31160 = new TF1("pol3","pol3",0,13000);
   pol31160->SetBit(TF1::kNotDraw);
   pol31160->SetFillColor(19);
   pol31160->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol31160->SetMarkerColor(ci);
   pol31160->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol31160->SetLineColor(ci);
   pol31160->SetLineWidth(3);
   pol31160->SetLineStyle(9);
   pol31160->SetChisquare(18.96993);
   pol31160->SetNDF(8);
   pol31160->GetXaxis()->SetLabelFont(42);
   pol31160->GetXaxis()->SetLabelOffset(0.007);
   pol31160->GetXaxis()->SetLabelSize(0.05);
   pol31160->GetXaxis()->SetTitleSize(0.06);
   pol31160->GetXaxis()->SetTitleOffset(0.9);
   pol31160->GetXaxis()->SetTitleFont(42);
   pol31160->GetYaxis()->SetLabelFont(42);
   pol31160->GetYaxis()->SetLabelOffset(0.007);
   pol31160->GetYaxis()->SetLabelSize(0.05);
   pol31160->GetYaxis()->SetTitleSize(0.06);
   pol31160->GetYaxis()->SetTitleOffset(1.25);
   pol31160->GetYaxis()->SetTitleFont(42);
   pol31160->SetParameter(0,1.572523);
   pol31160->SetParError(0,0.2165111);
   pol31160->SetParLimits(0,0,0);
   pol31160->SetParameter(1,-4.766866e-05);
   pol31160->SetParError(1,0.0002389693);
   pol31160->SetParLimits(1,0,0);
   pol31160->SetParameter(2,-1.54634e-08);
   pol31160->SetParError(2,7.893959e-08);
   pol31160->SetParLimits(2,0,0);
   pol31160->SetParameter(3,3.42935e-12);
   pol31160->SetParError(3,7.995073e-12);
   pol31160->SetParLimits(3,0,0);
   pol31160->Draw("Csame");
   
   Double_t _fx1159[12] = {
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
   Double_t _fy1159[12] = {
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
   Double_t _fex1159[12] = {
   0,
   0,
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
   Double_t _fey1159[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1159,_fy1159,_fex1159,_fey1159);
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
   
   TH1F *Graph_Graph1159 = new TH1F("Graph_Graph1159","",100,770,5930);
   Graph_Graph1159->SetMinimum(1.025);
   Graph_Graph1159->SetMaximum(2.225);
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
   
   
   TF1 *pol31160 = new TF1("pol3","pol3",1200,5500);
   pol31160->SetFillColor(19);
   pol31160->SetFillStyle(0);
   pol31160->SetLineColor(2);
   pol31160->SetLineWidth(2);
   pol31160->GetXaxis()->SetLabelFont(42);
   pol31160->GetXaxis()->SetLabelOffset(0.007);
   pol31160->GetXaxis()->SetLabelSize(0.05);
   pol31160->GetXaxis()->SetTitleSize(0.06);
   pol31160->GetXaxis()->SetTitleOffset(0.9);
   pol31160->GetXaxis()->SetTitleFont(42);
   pol31160->GetYaxis()->SetLabelFont(42);
   pol31160->GetYaxis()->SetLabelOffset(0.007);
   pol31160->GetYaxis()->SetLabelSize(0.05);
   pol31160->GetYaxis()->SetTitleSize(0.06);
   pol31160->GetYaxis()->SetTitleOffset(1.25);
   pol31160->GetYaxis()->SetTitleFont(42);
   pol31160->SetParameter(0,1.125);
   pol31160->SetParError(0,4.520469);
   pol31160->SetParLimits(0,0,0);
   pol31160->SetParameter(1,0);
   pol31160->SetParError(1,0.004968687);
   pol31160->SetParLimits(1,0,0);
   pol31160->SetParameter(2,0);
   pol31160->SetParError(2,1.614427e-06);
   pol31160->SetParLimits(2,0,0);
   pol31160->SetParameter(3,0);
   pol31160->SetParError(3,1.602031e-10);
   pol31160->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31160);
   gre->Draw("p");
   
   Double_t _fx1161[12] = {
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
   Double_t _fy1161[12] = {
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
   Double_t _fex1161[12] = {
   0,
   0,
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
   Double_t _fey1161[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1161,_fy1161,_fex1161,_fey1161);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1161 = new TH1F("Graph_Graph1161","",100,770,5930);
   Graph_Graph1161->SetMinimum(0.98);
   Graph_Graph1161->SetMaximum(2.18);
   Graph_Graph1161->SetDirectory(0);
   Graph_Graph1161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1161->SetLineColor(ci);
   Graph_Graph1161->GetXaxis()->SetLabelFont(42);
   Graph_Graph1161->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1161->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1161->GetXaxis()->SetTitleFont(42);
   Graph_Graph1161->GetYaxis()->SetLabelFont(42);
   Graph_Graph1161->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1161->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1161->GetYaxis()->SetTitleFont(42);
   Graph_Graph1161->GetZaxis()->SetLabelFont(42);
   Graph_Graph1161->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1161->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1161);
   
   
   TF1 *pol01162 = new TF1("pol0","pol0",1200,5500);
   pol01162->SetFillColor(19);
   pol01162->SetFillStyle(0);
   pol01162->SetLineColor(2);
   pol01162->SetLineWidth(2);
   pol01162->GetXaxis()->SetLabelFont(42);
   pol01162->GetXaxis()->SetLabelOffset(0.007);
   pol01162->GetXaxis()->SetLabelSize(0.05);
   pol01162->GetXaxis()->SetTitleSize(0.06);
   pol01162->GetXaxis()->SetTitleOffset(0.9);
   pol01162->GetXaxis()->SetTitleFont(42);
   pol01162->GetYaxis()->SetLabelFont(42);
   pol01162->GetYaxis()->SetLabelOffset(0.007);
   pol01162->GetYaxis()->SetLabelSize(0.05);
   pol01162->GetYaxis()->SetTitleSize(0.06);
   pol01162->GetYaxis()->SetTitleOffset(1.25);
   pol01162->GetYaxis()->SetTitleFont(42);
   pol01162->SetParameter(0,1.08);
   pol01162->SetParError(0,0.2886751);
   pol01162->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01162);
   gre->Draw("p");
   
   TF1 *pol01163 = new TF1("pol0","pol0",0,13000);
   pol01163->SetBit(TF1::kNotDraw);
   pol01163->SetFillColor(19);
   pol01163->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01163->SetMarkerColor(ci);
   pol01163->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01163->SetLineColor(ci);
   pol01163->SetLineWidth(3);
   pol01163->GetXaxis()->SetLabelFont(42);
   pol01163->GetXaxis()->SetLabelOffset(0.007);
   pol01163->GetXaxis()->SetLabelSize(0.05);
   pol01163->GetXaxis()->SetTitleSize(0.06);
   pol01163->GetXaxis()->SetTitleOffset(0.9);
   pol01163->GetXaxis()->SetTitleFont(42);
   pol01163->GetYaxis()->SetLabelFont(42);
   pol01163->GetYaxis()->SetLabelOffset(0.007);
   pol01163->GetYaxis()->SetLabelSize(0.05);
   pol01163->GetYaxis()->SetTitleSize(0.06);
   pol01163->GetYaxis()->SetTitleOffset(1.25);
   pol01163->GetYaxis()->SetTitleFont(42);
   pol01163->SetParameter(0,1.08);
   pol01163->SetParError(0,0.2886751);
   pol01163->SetParLimits(0,0,0);
   pol01163->Draw("Csame");
   
   TF1 *pol31164 = new TF1("pol3","pol3",0,13000);
   pol31164->SetBit(TF1::kNotDraw);
   pol31164->SetFillColor(19);
   pol31164->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol31164->SetMarkerColor(ci);
   pol31164->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol31164->SetLineColor(ci);
   pol31164->SetLineWidth(3);
   pol31164->SetLineStyle(9);
   pol31164->GetXaxis()->SetLabelFont(42);
   pol31164->GetXaxis()->SetLabelOffset(0.007);
   pol31164->GetXaxis()->SetLabelSize(0.05);
   pol31164->GetXaxis()->SetTitleSize(0.06);
   pol31164->GetXaxis()->SetTitleOffset(0.9);
   pol31164->GetXaxis()->SetTitleFont(42);
   pol31164->GetYaxis()->SetLabelFont(42);
   pol31164->GetYaxis()->SetLabelOffset(0.007);
   pol31164->GetYaxis()->SetLabelSize(0.05);
   pol31164->GetYaxis()->SetTitleSize(0.06);
   pol31164->GetYaxis()->SetTitleOffset(1.25);
   pol31164->GetYaxis()->SetTitleFont(42);
   pol31164->SetParameter(0,1.125);
   pol31164->SetParError(0,4.520469);
   pol31164->SetParLimits(0,0,0);
   pol31164->SetParameter(1,0);
   pol31164->SetParError(1,0.004968687);
   pol31164->SetParLimits(1,0,0);
   pol31164->SetParameter(2,0);
   pol31164->SetParError(2,1.614427e-06);
   pol31164->SetParLimits(2,0,0);
   pol31164->SetParameter(3,0);
   pol31164->SetParError(3,1.602031e-10);
   pol31164->SetParLimits(3,0,0);
   pol31164->Draw("Csame");
   
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
