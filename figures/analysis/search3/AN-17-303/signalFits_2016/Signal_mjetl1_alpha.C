void Signal_mjetl1_alpha()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 16:09:02 2018) by ROOT version6.02/05
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
   
   Double_t _fx1037[12] = {
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
   Double_t _fy1037[12] = {
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
   Double_t _fex1037[12] = {
   0,
   0,
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
   Double_t _fey1037[12] = {
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1037,_fy1037,_fex1037,_fey1037);
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
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,770,5930);
   Graph_Graph1037->SetMinimum(0);
   Graph_Graph1037->SetMaximum(5);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph1037->GetXaxis()->SetRange(7,92);
   Graph_Graph1037->GetXaxis()->SetNdivisions(209);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph1037->GetYaxis()->SetNdivisions(504);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *pol01038 = new TF1("pol0","pol0",1200,5500);
   pol01038->SetFillColor(19);
   pol01038->SetFillStyle(0);
   pol01038->SetLineColor(2);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(5.916457e-31);
   pol01038->SetNDF(11);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetLabelOffset(0.007);
   pol01038->GetXaxis()->SetLabelSize(0.05);
   pol01038->GetXaxis()->SetTitleSize(0.06);
   pol01038->GetXaxis()->SetTitleOffset(0.9);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetLabelOffset(0.007);
   pol01038->GetYaxis()->SetLabelSize(0.05);
   pol01038->GetYaxis()->SetTitleSize(0.06);
   pol01038->GetYaxis()->SetTitleOffset(1.25);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,1.083);
   pol01038->SetParError(0,6.694897e-17);
   pol01038->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01038);
   gre->Draw("ap");
   
   Double_t _fx1039[12] = {
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
   Double_t _fy1039[12] = {
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
   Double_t _fex1039[12] = {
   0,
   0,
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
   Double_t _fey1039[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1039,_fy1039,_fex1039,_fey1039);
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
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,770,5930);
   Graph_Graph1039->SetMinimum(1.025);
   Graph_Graph1039->SetMaximum(2.225);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
   
   TF1 *pol31040 = new TF1("pol3","pol3",1200,5500);
   pol31040->SetFillColor(19);
   pol31040->SetFillStyle(0);
   pol31040->SetLineColor(2);
   pol31040->SetLineWidth(2);
   pol31040->GetXaxis()->SetLabelFont(42);
   pol31040->GetXaxis()->SetLabelOffset(0.007);
   pol31040->GetXaxis()->SetLabelSize(0.05);
   pol31040->GetXaxis()->SetTitleSize(0.06);
   pol31040->GetXaxis()->SetTitleOffset(0.9);
   pol31040->GetXaxis()->SetTitleFont(42);
   pol31040->GetYaxis()->SetLabelFont(42);
   pol31040->GetYaxis()->SetLabelOffset(0.007);
   pol31040->GetYaxis()->SetLabelSize(0.05);
   pol31040->GetYaxis()->SetTitleSize(0.06);
   pol31040->GetYaxis()->SetTitleOffset(1.25);
   pol31040->GetYaxis()->SetTitleFont(42);
   pol31040->SetParameter(0,1.125);
   pol31040->SetParError(0,4.520469);
   pol31040->SetParLimits(0,0,0);
   pol31040->SetParameter(1,0);
   pol31040->SetParError(1,0.004968687);
   pol31040->SetParLimits(1,0,0);
   pol31040->SetParameter(2,0);
   pol31040->SetParError(2,1.614427e-06);
   pol31040->SetParLimits(2,0,0);
   pol31040->SetParameter(3,0);
   pol31040->SetParError(3,1.602031e-10);
   pol31040->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31040);
   gre->Draw("p");
   
   Double_t _fx1041[12] = {
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
   Double_t _fy1041[12] = {
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
   Double_t _fex1041[12] = {
   0,
   0,
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
   Double_t _fey1041[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10371041 = new TH1F("Graph_Graph_Graph10371041","",100,770,5930);
   Graph_Graph_Graph10371041->SetMinimum(0);
   Graph_Graph_Graph10371041->SetMaximum(5);
   Graph_Graph_Graph10371041->SetDirectory(0);
   Graph_Graph_Graph10371041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10371041->SetLineColor(ci);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitle("M_{X} (GeV)");
   Graph_Graph_Graph10371041->GetXaxis()->SetRange(7,92);
   Graph_Graph_Graph10371041->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10371041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10371041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitle("alpha (GeV)");
   Graph_Graph_Graph10371041->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10371041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10371041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10371041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10371041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10371041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10371041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10371041);
   
   
   TF1 *pol01042 = new TF1("pol0","pol0",1200,5500);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);
   pol01042->SetLineColor(2);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(5.916457e-31);
   pol01042->SetNDF(11);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetLabelOffset(0.007);
   pol01042->GetXaxis()->SetLabelSize(0.05);
   pol01042->GetXaxis()->SetTitleSize(0.06);
   pol01042->GetXaxis()->SetTitleOffset(0.9);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetLabelOffset(0.007);
   pol01042->GetYaxis()->SetLabelSize(0.05);
   pol01042->GetYaxis()->SetTitleSize(0.06);
   pol01042->GetYaxis()->SetTitleOffset(1.25);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,1.083);
   pol01042->SetParError(0,6.694897e-17);
   pol01042->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p");
   
   TF1 *pol01043 = new TF1("pol0","pol0",0,13000);
   pol01043->SetBit(TF1::kNotDraw);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01043->SetMarkerColor(ci);
   pol01043->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01043->SetLineColor(ci);
   pol01043->SetLineWidth(3);
   pol01043->SetChisquare(5.916457e-31);
   pol01043->SetNDF(11);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetLabelOffset(0.007);
   pol01043->GetXaxis()->SetLabelSize(0.05);
   pol01043->GetXaxis()->SetTitleSize(0.06);
   pol01043->GetXaxis()->SetTitleOffset(0.9);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetLabelOffset(0.007);
   pol01043->GetYaxis()->SetLabelSize(0.05);
   pol01043->GetYaxis()->SetTitleSize(0.06);
   pol01043->GetYaxis()->SetTitleOffset(1.25);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,1.083);
   pol01043->SetParError(0,6.694897e-17);
   pol01043->SetParLimits(0,0,0);
   pol01043->Draw("Csame");
   
   TF1 *pol31044 = new TF1("pol3","pol3",0,13000);
   pol31044->SetBit(TF1::kNotDraw);
   pol31044->SetFillColor(19);
   pol31044->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol31044->SetMarkerColor(ci);
   pol31044->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   pol31044->SetLineColor(ci);
   pol31044->SetLineWidth(3);
   pol31044->SetLineStyle(9);
   pol31044->GetXaxis()->SetLabelFont(42);
   pol31044->GetXaxis()->SetLabelOffset(0.007);
   pol31044->GetXaxis()->SetLabelSize(0.05);
   pol31044->GetXaxis()->SetTitleSize(0.06);
   pol31044->GetXaxis()->SetTitleOffset(0.9);
   pol31044->GetXaxis()->SetTitleFont(42);
   pol31044->GetYaxis()->SetLabelFont(42);
   pol31044->GetYaxis()->SetLabelOffset(0.007);
   pol31044->GetYaxis()->SetLabelSize(0.05);
   pol31044->GetYaxis()->SetTitleSize(0.06);
   pol31044->GetYaxis()->SetTitleOffset(1.25);
   pol31044->GetYaxis()->SetTitleFont(42);
   pol31044->SetParameter(0,1.125);
   pol31044->SetParError(0,4.520469);
   pol31044->SetParLimits(0,0,0);
   pol31044->SetParameter(1,0);
   pol31044->SetParError(1,0.004968687);
   pol31044->SetParLimits(1,0,0);
   pol31044->SetParameter(2,0);
   pol31044->SetParError(2,1.614427e-06);
   pol31044->SetParLimits(2,0,0);
   pol31044->SetParameter(3,0);
   pol31044->SetParError(3,1.602031e-10);
   pol31044->SetParLimits(3,0,0);
   pol31044->Draw("Csame");
   
   Double_t _fx1043[12] = {
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
   Double_t _fy1043[12] = {
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
   Double_t _fex1043[12] = {
   0,
   0,
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
   Double_t _fey1043[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1043,_fy1043,_fex1043,_fey1043);
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
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,770,5930);
   Graph_Graph1043->SetMinimum(1.025);
   Graph_Graph1043->SetMaximum(2.225);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol31044 = new TF1("pol3","pol3",1200,5500);
   pol31044->SetFillColor(19);
   pol31044->SetFillStyle(0);
   pol31044->SetLineColor(2);
   pol31044->SetLineWidth(2);
   pol31044->GetXaxis()->SetLabelFont(42);
   pol31044->GetXaxis()->SetLabelOffset(0.007);
   pol31044->GetXaxis()->SetLabelSize(0.05);
   pol31044->GetXaxis()->SetTitleSize(0.06);
   pol31044->GetXaxis()->SetTitleOffset(0.9);
   pol31044->GetXaxis()->SetTitleFont(42);
   pol31044->GetYaxis()->SetLabelFont(42);
   pol31044->GetYaxis()->SetLabelOffset(0.007);
   pol31044->GetYaxis()->SetLabelSize(0.05);
   pol31044->GetYaxis()->SetTitleSize(0.06);
   pol31044->GetYaxis()->SetTitleOffset(1.25);
   pol31044->GetYaxis()->SetTitleFont(42);
   pol31044->SetParameter(0,1.125);
   pol31044->SetParError(0,4.520469);
   pol31044->SetParLimits(0,0,0);
   pol31044->SetParameter(1,0);
   pol31044->SetParError(1,0.004968687);
   pol31044->SetParLimits(1,0,0);
   pol31044->SetParameter(2,0);
   pol31044->SetParError(2,1.614427e-06);
   pol31044->SetParLimits(2,0,0);
   pol31044->SetParameter(3,0);
   pol31044->SetParError(3,1.602031e-10);
   pol31044->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31044);
   gre->Draw("p");
   
   Double_t _fx1045[12] = {
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
   Double_t _fy1045[12] = {
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
   Double_t _fex1045[12] = {
   0,
   0,
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
   Double_t _fey1045[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,770,5930);
   Graph_Graph1045->SetMinimum(0.98);
   Graph_Graph1045->SetMaximum(2.18);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   
   TF1 *pol01046 = new TF1("pol0","pol0",1200,5500);
   pol01046->SetFillColor(19);
   pol01046->SetFillStyle(0);
   pol01046->SetLineColor(2);
   pol01046->SetLineWidth(2);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetLabelOffset(0.007);
   pol01046->GetXaxis()->SetLabelSize(0.05);
   pol01046->GetXaxis()->SetTitleSize(0.06);
   pol01046->GetXaxis()->SetTitleOffset(0.9);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetLabelOffset(0.007);
   pol01046->GetYaxis()->SetLabelSize(0.05);
   pol01046->GetYaxis()->SetTitleSize(0.06);
   pol01046->GetYaxis()->SetTitleOffset(1.25);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.08);
   pol01046->SetParError(0,0.2886751);
   pol01046->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p");
   
   TF1 *pol01047 = new TF1("pol0","pol0",0,13000);
   pol01047->SetBit(TF1::kNotDraw);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01047->SetMarkerColor(ci);
   pol01047->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01047->SetLineColor(ci);
   pol01047->SetLineWidth(3);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetLabelOffset(0.007);
   pol01047->GetXaxis()->SetLabelSize(0.05);
   pol01047->GetXaxis()->SetTitleSize(0.06);
   pol01047->GetXaxis()->SetTitleOffset(0.9);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetLabelOffset(0.007);
   pol01047->GetYaxis()->SetLabelSize(0.05);
   pol01047->GetYaxis()->SetTitleSize(0.06);
   pol01047->GetYaxis()->SetTitleOffset(1.25);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,1.08);
   pol01047->SetParError(0,0.2886751);
   pol01047->SetParLimits(0,0,0);
   pol01047->Draw("Csame");
   
   TF1 *pol31048 = new TF1("pol3","pol3",0,13000);
   pol31048->SetBit(TF1::kNotDraw);
   pol31048->SetFillColor(19);
   pol31048->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol31048->SetMarkerColor(ci);
   pol31048->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   pol31048->SetLineColor(ci);
   pol31048->SetLineWidth(3);
   pol31048->SetLineStyle(9);
   pol31048->GetXaxis()->SetLabelFont(42);
   pol31048->GetXaxis()->SetLabelOffset(0.007);
   pol31048->GetXaxis()->SetLabelSize(0.05);
   pol31048->GetXaxis()->SetTitleSize(0.06);
   pol31048->GetXaxis()->SetTitleOffset(0.9);
   pol31048->GetXaxis()->SetTitleFont(42);
   pol31048->GetYaxis()->SetLabelFont(42);
   pol31048->GetYaxis()->SetLabelOffset(0.007);
   pol31048->GetYaxis()->SetLabelSize(0.05);
   pol31048->GetYaxis()->SetTitleSize(0.06);
   pol31048->GetYaxis()->SetTitleOffset(1.25);
   pol31048->GetYaxis()->SetTitleFont(42);
   pol31048->SetParameter(0,1.125);
   pol31048->SetParError(0,4.520469);
   pol31048->SetParLimits(0,0,0);
   pol31048->SetParameter(1,0);
   pol31048->SetParError(1,0.004968687);
   pol31048->SetParLimits(1,0,0);
   pol31048->SetParameter(2,0);
   pol31048->SetParError(2,1.614427e-06);
   pol31048->SetParLimits(2,0,0);
   pol31048->SetParameter(3,0);
   pol31048->SetParError(3,1.602031e-10);
   pol31048->SetParLimits(3,0,0);
   pol31048->Draw("Csame");
   
   Double_t _fx1047[12] = {
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
   Double_t _fy1047[12] = {
   1.447959,
   1.551019,
   1.582461,
   1.478681,
   1.455384,
   1.355686,
   1.392456,
   1.35267,
   1.370102,
   1.335881,
   1.314487,
   1.312756};
   Double_t _fex1047[12] = {
   0,
   0,
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
   Double_t _fey1047[12] = {
   0.04422354,
   0.08588133,
   0.1341849,
   0.04922933,
   0.04041107,
   0.03712816,
   0.03917739,
   0.03818252,
   0.04838481,
   0.05407956,
   0.07399708,
   0.07199389};
   gre = new TGraphErrors(12,_fx1047,_fy1047,_fex1047,_fey1047);
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
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,770,5930);
   Graph_Graph1047->SetMinimum(1.192875);
   Graph_Graph1047->SetMaximum(1.764262);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *pol31048 = new TF1("pol3","pol3",1200,5500);
   pol31048->SetFillColor(19);
   pol31048->SetFillStyle(0);
   pol31048->SetLineColor(2);
   pol31048->SetLineWidth(2);
   pol31048->SetChisquare(5.417049);
   pol31048->SetNDF(8);
   pol31048->GetXaxis()->SetLabelFont(42);
   pol31048->GetXaxis()->SetLabelOffset(0.007);
   pol31048->GetXaxis()->SetLabelSize(0.05);
   pol31048->GetXaxis()->SetTitleSize(0.06);
   pol31048->GetXaxis()->SetTitleOffset(0.9);
   pol31048->GetXaxis()->SetTitleFont(42);
   pol31048->GetYaxis()->SetLabelFont(42);
   pol31048->GetYaxis()->SetLabelOffset(0.007);
   pol31048->GetYaxis()->SetLabelSize(0.05);
   pol31048->GetYaxis()->SetTitleSize(0.06);
   pol31048->GetYaxis()->SetTitleOffset(1.25);
   pol31048->GetYaxis()->SetTitleFont(42);
   pol31048->SetParameter(0,1.582547);
   pol31048->SetParError(0,0.2152924);
   pol31048->SetParLimits(0,0,0);
   pol31048->SetParameter(1,-8.919971e-05);
   pol31048->SetParError(1,0.0002369105);
   pol31048->SetParLimits(1,0,0);
   pol31048->SetParameter(2,7.205108e-09);
   pol31048->SetParError(2,7.883675e-08);
   pol31048->SetParLimits(2,0,0);
   pol31048->SetParameter(3,5.556232e-14);
   pol31048->SetParError(3,8.053832e-12);
   pol31048->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31048);
   gre->Draw("p");
   
   Double_t _fx1049[12] = {
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
   Double_t _fy1049[12] = {
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
   Double_t _fex1049[12] = {
   0,
   0,
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
   Double_t _fey1049[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,770,5930);
   Graph_Graph1049->SetMinimum(1.405);
   Graph_Graph1049->SetMaximum(2.605);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *pol01050 = new TF1("pol0","pol0",1200,5500);
   pol01050->SetFillColor(19);
   pol01050->SetFillStyle(0);
   pol01050->SetLineColor(2);
   pol01050->SetLineWidth(2);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetLabelOffset(0.007);
   pol01050->GetXaxis()->SetLabelSize(0.05);
   pol01050->GetXaxis()->SetTitleSize(0.06);
   pol01050->GetXaxis()->SetTitleOffset(0.9);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetLabelOffset(0.007);
   pol01050->GetYaxis()->SetLabelSize(0.05);
   pol01050->GetYaxis()->SetTitleSize(0.06);
   pol01050->GetYaxis()->SetTitleOffset(1.25);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,1.505);
   pol01050->SetParError(0,0.2886751);
   pol01050->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("p");
   
   TF1 *pol01051 = new TF1("pol0","pol0",0,13000);
   pol01051->SetBit(TF1::kNotDraw);
   pol01051->SetFillColor(19);
   pol01051->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01051->SetMarkerColor(ci);
   pol01051->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01051->SetLineColor(ci);
   pol01051->SetLineWidth(3);
   pol01051->GetXaxis()->SetLabelFont(42);
   pol01051->GetXaxis()->SetLabelOffset(0.007);
   pol01051->GetXaxis()->SetLabelSize(0.05);
   pol01051->GetXaxis()->SetTitleSize(0.06);
   pol01051->GetXaxis()->SetTitleOffset(0.9);
   pol01051->GetXaxis()->SetTitleFont(42);
   pol01051->GetYaxis()->SetLabelFont(42);
   pol01051->GetYaxis()->SetLabelOffset(0.007);
   pol01051->GetYaxis()->SetLabelSize(0.05);
   pol01051->GetYaxis()->SetTitleSize(0.06);
   pol01051->GetYaxis()->SetTitleOffset(1.25);
   pol01051->GetYaxis()->SetTitleFont(42);
   pol01051->SetParameter(0,1.505);
   pol01051->SetParError(0,0.2886751);
   pol01051->SetParLimits(0,0,0);
   pol01051->Draw("Csame");
   
   TF1 *pol31052 = new TF1("pol3","pol3",0,13000);
   pol31052->SetBit(TF1::kNotDraw);
   pol31052->SetFillColor(19);
   pol31052->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol31052->SetMarkerColor(ci);
   pol31052->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   pol31052->SetLineColor(ci);
   pol31052->SetLineWidth(3);
   pol31052->SetLineStyle(9);
   pol31052->SetChisquare(5.417049);
   pol31052->SetNDF(8);
   pol31052->GetXaxis()->SetLabelFont(42);
   pol31052->GetXaxis()->SetLabelOffset(0.007);
   pol31052->GetXaxis()->SetLabelSize(0.05);
   pol31052->GetXaxis()->SetTitleSize(0.06);
   pol31052->GetXaxis()->SetTitleOffset(0.9);
   pol31052->GetXaxis()->SetTitleFont(42);
   pol31052->GetYaxis()->SetLabelFont(42);
   pol31052->GetYaxis()->SetLabelOffset(0.007);
   pol31052->GetYaxis()->SetLabelSize(0.05);
   pol31052->GetYaxis()->SetTitleSize(0.06);
   pol31052->GetYaxis()->SetTitleOffset(1.25);
   pol31052->GetYaxis()->SetTitleFont(42);
   pol31052->SetParameter(0,1.582547);
   pol31052->SetParError(0,0.2152924);
   pol31052->SetParLimits(0,0,0);
   pol31052->SetParameter(1,-8.919971e-05);
   pol31052->SetParError(1,0.0002369105);
   pol31052->SetParLimits(1,0,0);
   pol31052->SetParameter(2,7.205108e-09);
   pol31052->SetParError(2,7.883675e-08);
   pol31052->SetParLimits(2,0,0);
   pol31052->SetParameter(3,5.556232e-14);
   pol31052->SetParError(3,8.053832e-12);
   pol31052->SetParLimits(3,0,0);
   pol31052->Draw("Csame");
   
   Double_t _fx1051[12] = {
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
   Double_t _fy1051[12] = {
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
   Double_t _fex1051[12] = {
   0,
   0,
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
   Double_t _fey1051[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1051,_fy1051,_fex1051,_fey1051);
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
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,770,5930);
   Graph_Graph1051->SetMinimum(1.025);
   Graph_Graph1051->SetMaximum(2.225);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   
   TF1 *pol31052 = new TF1("pol3","pol3",1200,5500);
   pol31052->SetFillColor(19);
   pol31052->SetFillStyle(0);
   pol31052->SetLineColor(2);
   pol31052->SetLineWidth(2);
   pol31052->GetXaxis()->SetLabelFont(42);
   pol31052->GetXaxis()->SetLabelOffset(0.007);
   pol31052->GetXaxis()->SetLabelSize(0.05);
   pol31052->GetXaxis()->SetTitleSize(0.06);
   pol31052->GetXaxis()->SetTitleOffset(0.9);
   pol31052->GetXaxis()->SetTitleFont(42);
   pol31052->GetYaxis()->SetLabelFont(42);
   pol31052->GetYaxis()->SetLabelOffset(0.007);
   pol31052->GetYaxis()->SetLabelSize(0.05);
   pol31052->GetYaxis()->SetTitleSize(0.06);
   pol31052->GetYaxis()->SetTitleOffset(1.25);
   pol31052->GetYaxis()->SetTitleFont(42);
   pol31052->SetParameter(0,1.125);
   pol31052->SetParError(0,4.520469);
   pol31052->SetParLimits(0,0,0);
   pol31052->SetParameter(1,0);
   pol31052->SetParError(1,0.004968687);
   pol31052->SetParLimits(1,0,0);
   pol31052->SetParameter(2,0);
   pol31052->SetParError(2,1.614427e-06);
   pol31052->SetParLimits(2,0,0);
   pol31052->SetParameter(3,0);
   pol31052->SetParError(3,1.602031e-10);
   pol31052->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(pol31052);
   gre->Draw("p");
   
   Double_t _fx1053[12] = {
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
   Double_t _fy1053[12] = {
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
   Double_t _fex1053[12] = {
   0,
   0,
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
   Double_t _fey1053[12] = {
   0,
   0,
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
   gre = new TGraphErrors(12,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,770,5930);
   Graph_Graph1053->SetMinimum(0.98);
   Graph_Graph1053->SetMaximum(2.18);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   
   TF1 *pol01054 = new TF1("pol0","pol0",1200,5500);
   pol01054->SetFillColor(19);
   pol01054->SetFillStyle(0);
   pol01054->SetLineColor(2);
   pol01054->SetLineWidth(2);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetLabelOffset(0.007);
   pol01054->GetXaxis()->SetLabelSize(0.05);
   pol01054->GetXaxis()->SetTitleSize(0.06);
   pol01054->GetXaxis()->SetTitleOffset(0.9);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetLabelOffset(0.007);
   pol01054->GetYaxis()->SetLabelSize(0.05);
   pol01054->GetYaxis()->SetTitleSize(0.06);
   pol01054->GetYaxis()->SetTitleOffset(1.25);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,1.08);
   pol01054->SetParError(0,0.2886751);
   pol01054->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01054);
   gre->Draw("p");
   
   TF1 *pol01055 = new TF1("pol0","pol0",0,13000);
   pol01055->SetBit(TF1::kNotDraw);
   pol01055->SetFillColor(19);
   pol01055->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01055->SetMarkerColor(ci);
   pol01055->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01055->SetLineColor(ci);
   pol01055->SetLineWidth(3);
   pol01055->GetXaxis()->SetLabelFont(42);
   pol01055->GetXaxis()->SetLabelOffset(0.007);
   pol01055->GetXaxis()->SetLabelSize(0.05);
   pol01055->GetXaxis()->SetTitleSize(0.06);
   pol01055->GetXaxis()->SetTitleOffset(0.9);
   pol01055->GetXaxis()->SetTitleFont(42);
   pol01055->GetYaxis()->SetLabelFont(42);
   pol01055->GetYaxis()->SetLabelOffset(0.007);
   pol01055->GetYaxis()->SetLabelSize(0.05);
   pol01055->GetYaxis()->SetTitleSize(0.06);
   pol01055->GetYaxis()->SetTitleOffset(1.25);
   pol01055->GetYaxis()->SetTitleFont(42);
   pol01055->SetParameter(0,1.08);
   pol01055->SetParError(0,0.2886751);
   pol01055->SetParLimits(0,0,0);
   pol01055->Draw("Csame");
   
   TF1 *pol31056 = new TF1("pol3","pol3",0,13000);
   pol31056->SetBit(TF1::kNotDraw);
   pol31056->SetFillColor(19);
   pol31056->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol31056->SetMarkerColor(ci);
   pol31056->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   pol31056->SetLineColor(ci);
   pol31056->SetLineWidth(3);
   pol31056->SetLineStyle(9);
   pol31056->GetXaxis()->SetLabelFont(42);
   pol31056->GetXaxis()->SetLabelOffset(0.007);
   pol31056->GetXaxis()->SetLabelSize(0.05);
   pol31056->GetXaxis()->SetTitleSize(0.06);
   pol31056->GetXaxis()->SetTitleOffset(0.9);
   pol31056->GetXaxis()->SetTitleFont(42);
   pol31056->GetYaxis()->SetLabelFont(42);
   pol31056->GetYaxis()->SetLabelOffset(0.007);
   pol31056->GetYaxis()->SetLabelSize(0.05);
   pol31056->GetYaxis()->SetTitleSize(0.06);
   pol31056->GetYaxis()->SetTitleOffset(1.25);
   pol31056->GetYaxis()->SetTitleFont(42);
   pol31056->SetParameter(0,1.125);
   pol31056->SetParError(0,4.520469);
   pol31056->SetParLimits(0,0,0);
   pol31056->SetParameter(1,0);
   pol31056->SetParError(1,0.004968687);
   pol31056->SetParLimits(1,0,0);
   pol31056->SetParameter(2,0);
   pol31056->SetParError(2,1.614427e-06);
   pol31056->SetParLimits(2,0,0);
   pol31056->SetParameter(3,0);
   pol31056->SetParError(3,1.602031e-10);
   pol31056->SetParLimits(3,0,0);
   pol31056->Draw("Csame");
   
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
